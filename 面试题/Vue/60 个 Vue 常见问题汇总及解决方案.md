# 60 个 Vue 常见问题汇总及解决方案

[mp.weixin.qq.com](https://mp.weixin.qq.com/s/ui6NMNxPta0e3GVCr_ATzA)大前端技术之路

> 来源：https://www.fly63.com/

**Q1：安装超时(install timeout)**

方案有这么些:
```
cnpm : 国内对npm的镜像版本
/*
cnpm website: https://npm.taobao.org/
*/
npm install -g cnpm --registry=https://registry.npm.taobao.org

// cnpm 的大多命令跟 npm 的是一致的,比如安装,卸载这些
yarn 和 npm 改源大法

//使用 nrm 模块 : www.npmjs.com/package/nrm
npm config : npm config set registry https://registry.npm.taobao.org
yarn config : yarn config set registry https://registry.npm.taobao.org
```

**Q2：安装一些需要编译的包:提示没有安装python、build失败等**

因为一些 npm 的包安装需要编译的环境,mac 和 linux 都还好,大多都齐全 window 用户依赖 visual studio 的一些库和python 2+, windows的小伙伴都装上: windows-build-tools python 2.x

**Q3：can’t not find ‘xxModule’ - 找不到某些依赖或者模块**

这种情况一般报错信息可以看到是哪个包抛出的信息.，一般卸载这个模块,安装重新安装下即可.

**Q4：data functions should return an object**

这个问题是vue实例内,单组件的data必须返回一个对象;如下
```js
export default {
  name: 'page-router-view',
      data () {
      return {
        tabs: [
          {
            title: '财务信息',
            url: '/userinfo'
          },
          {
            title: '帐号信息',
            url: '/userinfo/base'
          }
        ]
      }
    }
}
```
为什么要 return 一个数据对象呢? 官方解释如下: data 必须声明为返回一个初始数据对象的函数，因为组件可能被用来创建多个实例。如果 data 仍然是一个纯粹的对象，则所有的实例将共享引用同一个数据对象！简言之,组件复用下,不会造成数据同时指向一处,造出牵一发而动全身的破问题...

**Q5：我给组件内的原生控件添加事件,怎么不生效了!!!**
```html
<!--比如用了第三方框架,或者一些封装的内置组件; 然后想绑定事件-->
<!--// 错误例子1-->
<el-input placeholder="请输入特定消费金额 " @mouseover="test()"></el-input>
<!--// 错误例子2-->
<router-link :to="item.menuUrl" @click="toggleName=''">
  <i :class="['fzicon',item.menuIcon]"></i>
  <span>{{item.menuName}}</span>
</router-link>
<!--上面的两个例子都没法触发事件!!!-->
<!--究其原因,少了一个修饰符 .native-->
<router-link :to="item.menuUrl" @click.native="toggleName=''">
  <i :class="['fzicon',item.menuIcon]"></i>
  <span>{{item.menuName}}</span>
</router-link>
<!--明明官方文档有的,一堆人不愿意去看,Fuck-->
<!--https://cn.vuejs.org/v2/guide/components.html#给组件绑定原生事件-->
```

**Q6：我用了 axios , 为什么 IE 浏览器不识别(IE9+)**
```
那是因为 IE 整个家族都不支持 promise, 解决方案:
npm install es6-promise
// 在 main.js 引入即可
// ES6的polyfill
require("es6-promise").polyfill();
``` 

**Q7：我在函数内用了this.xxx=,为什么抛出Cannot set property ‘xxx’ of undefined;**

这又是this的套路了..this是和当前运行的上下文绑定的...

一般你在axios或者其他 promise , 或者setInterval 这些默认都是指向最外层的全局钩子.

简单点说:"最外层的上下文就是 window,vue内则是 Vue 对象而不是实例!";

解决方案:

> 暂存法: 函数内先缓存 this , let that = this;(let是 es6, es5用var)-
> 箭头函数: 会强行关联当前运行区域为 this 的上下文;

**Q8：我看一些Vue教程有这么些写法,是什么意思@click.prevent,v-demo.a.b;**

就拿这两个例子来说吧.

@click.prevent : 事件+修饰符 , 作用就是点击但又阻止默认行为。

v-demo.a.b: 自定义指令+修饰符. 具体看你什么指令了,修饰符的作用大多是给事件增加一些确切的拓展功能，比如阻止事件冒泡,阻止默认行为,访问到原生控件,结合键盘快捷键等等 。

可以自定义修饰符么?也是可以的。可以通过全局 config.keyCodes 对象自定义键值修饰符别名：

**Q9：为什么我的引入的小图片渲染出来却是 data:image/png;base64xxxxxxxx**

这个是webpack里面的对应插件处理的，对于小于多少 K 以下的图片(规定的格式)直接转为 base64格式渲染;

具体配置在webpack.base.conf.js里面的rules里面的 url-loader，这样做的好处:在网速不好的时候先于内容加载和减少http的请求次数来减少网站服务器的负担。

**Q10：Component template shold contain exactly one root element.If you are useing v-if on multiple elements , xxxxx**

大体就是说,单组件渲染 DOM 区域必须要有一个根元素,不能出现同级元素. 可以用v-if和v-else-if指令来控制其他元素达到并存的状态。

换个直白的解释,就是有一个唯一的父类,包裹者; 比如一个div(父包含块) 内部多少个同级或者嵌套都行,但是最外层元素不能出现同级元素!

**Q11：跨域问题怎么破!比如No ‘Access-Control-Allow-Origin’ header is present on the requested resource.**

这种问题老生常谈了,我就不细说了..大体说一下;

> 1: CORS , 前后端都要对应去配置,IE10+-
> 2: nginx 反向代理,一劳永逸 <-- 线上环境可以用这个

线下开发模式,比如你用了vue-cli, 里面的 webpack 有引入了proxyTable这么个玩意, 也可以做接口反向代理。

```js
// 在 config 目录下的index.js
proxyTable: {
  "/bp-api": {
    target: "http://new.d.st.cn",
    changeOrigin: true,
    // pathRewrite: {
    //   "^/bp-api": "/"
    // }
  }
}

// target : 就是 api 的代理的实际路径
// changeOrigin: 就是是变源,必须是...
// pathRewrite : 就是路径重定向,一看就知道
```

当然还有依旧坚挺的jsonp大法!不过局限性比较多,比较适合一些特殊的信息获取!

**Q12：我需要遍历的数组值更新了,值也赋值了,为什么视图不更新!**

那是因为有局限性啊,官方文档也说的很清楚,只有一些魔改的之后的方法提供跟原生一样的使用姿势(却又可以触发视图更新);

一般我们更常用(除了魔改方法)的手段是使用:this.$set(obj,item,value);

**Q13：为什么我的组件间的样式不能继承或者覆写啊!**

单组件开发模式下,请确认是否开启了css模块化功能!也就是scoped(vue-cli 里面配置了,只要加入这个属性就自动启用)。
```html
<style lang="scss" scoped></style> 
```
为什么不能继承或者覆写呢,那时因为每个类或者 id 乃至标签都会给自动在css后面添加hash! 比如：

```
// 写的时候是这个
.trangle{}
// 编译过后,加上了 hash
.trangle[data-v-1ec35ffc]{}
```

这些都是在 css-loader 里面配置!!!

**Q14：路由模式改为history后,除了首次启动首页没报错,刷新访问路由都报错!**

必须给对应的服务端配置查询的主页面..也可以认为是主路由入口的引导。

官方文档也有,为毛总有人不喜欢去看文档,总喜欢做伸手党。

**Q15：我想拦截页面,或者在页面进来之前做一些事情,可以么?**

可以的，各种路由器的钩子!!当然,记忆滚动的位置也可以做到,详情翻翻官网里面的文档。

**Q16：TypeError: xxx is not a function**

这种问题明显就是写法有问题...能不能动点脑子!!

**Q17：Uncaught ReferenceError: xxx is not define**

实例内的 data 对应的变量没有声明，你导入模块报这个错误,那绝逼是导出没写好。

**Q18：Error in render function:”Type Error: Cannot read property ‘xxx’ of undefined”**

这种问题大多都是初始化的姿势不对;比如引入echart这些...仔细去了解下生命周期,再来具体初始化;

vue 组件有时候也会(嵌套组件或者 props传递初始化)..也是基本这个问题

**Q19：Unexpected token: operator xxxxx**

大佬,这个一看就是语法错误啊，基本都是符号问题， 一般报错会给出哪一行或者哪个组件。

**Q20：npm run build之后不能直接访问**

大佬!你最起码得在本地搭个服务器才能访问好么!!

**Q21：CSSbackground引入图片打包后,访问路径错误**

因为打包后图片是在根目录下,你用相对路径肯定报错啊....

你可以魔改 webpack 的配置文件里面的static为./static...但是不建议。你若是把图片什么丢到assets目录下,然后相对路径,打包后是正常的。

**Q22：安装模块时命令窗口输出unsupported platform xxx**

一般两种情况,node版本不兼容,系统不兼容;

解决方案: 要么不装,要么满足安装要求;

**Q23：Unexpected tab charater这些**

一般是你用脚手架初始化的时候开了 eslint ;要么遵循规则,要么改变规则;要么直接把 webpack 里面的 eslint 检测给关闭了。

**Q24：Failed to mount component: template or render function not defined**

组件挂载失败,问题只有这么几个

> 组件没有正确引入;-
> 挂载点顺序错了了; 自行动手排查

**Q25：Unknown custom element: <xxx> - did you register the component correctly?**

组件没有正确引入或者正确使用,依次确认

> 导入对应的组件-
> 在 components 内声明-
> 在 dom 区域声明标签

**Q26：axios的 post 请求后台接受不到!**

axios默认是 json 格式提交,确认后台是否做了对应的支持;若是只能接受传统的表单序列化,就需要自己写一个转义的方法...当然还有一个更加省事的方案,装一个小模块qs.

```js
npm install qs -S
// 然后在对应的地方转就行了..单一请求也行,拦截器也行...我是写在拦截器的.
// 具体可以看看我 axios 封装那篇文章
//POST传参序列化(添加请求拦截器)
Axios.interceptors.request.use(
  config => {
    // 在发送请求之前做某件事
    if (
      config.method === "post"
    ) {
      // 序列化
      config.data = qs.stringify(config.data); // ***** 这里转义
    }

    // 若是有做鉴权token , 就给头部带上token
    if (localStorage.token) {
      config.headers.Authorization = localStorage.token;
    }
    return config;
  },
  error => {
    Message({
      //  饿了么的消息弹窗组件,类似toast
      showClose: true,
      message: error,
      type: "error.data.error.message"
    });
    return Promise.reject(error.data.error.message);
  }
);
``` 

**Q27：Invalid prop: type check failed for prop “xxx”. Expected Boolean, got String.**

这种问题一般就是组件内的 props 类型已经设置了接受的范围类型, 而你传递的值却又不是它需要的类型,写代码严谨些 OK?

**Q28：过滤器可以用于DOM区域结合指令么?**

```html
<!-- 不行,看下面的错误例子 -->
// 不行,看下面的错误例子
<li v-for="(item,index) in range | sortByDesc | spliceText">{{item}}</li>
<!-- `vue2+`的指令只能用语 mustache`{{}}` , 正确姿势如下: -->
<span>{{ message | capitalize }}</span>
```

**Q29：[…Array],…mapState,[SOME_MUTATION] (state) {},increment ({ commit }) {}这种写法是什么鬼!**

ES6+(ES2015)的基础去过一遍..上面依次:数组解构,对象解构,对象风格函数,对象解构赋值传递。

**Q30：我的 Vue 网站为什么 UC 访问一片空白亦或者flex布局错乱!!**

来来来,墙角走起.... UC 号称移动界的 IE 这称号不是白叫的。flexbox 布局错乱,一般是你没有把兼容方案写上..就是带各种前缀,复合属性拆分。

UC访问空白, 有一种情况绝对会造成,那就是 ES6的代码降级不够彻底. 其他情况可能就是路由配置问题(自己去排除)，现在的开发都推荐按需引入,靠babel-preset-env 来控制,以达到打包体积减小。-

但是这样做的后果,有些内核比较老的...嘿嘿..拜拜。所以最好把代码完全 ES5话!!记住有些特性不能乱使用,没有对应的 polyfill,比如 ES6 的proxy

**Q31：this.\$set | this.\$xxx 这个 $ 是个什么意思?是 jQuery的么,会冲突么?**

且看我细细道来.

> Vue 的\$和 jQuery 的\$并没有半毛钱的关系,就跟JavaScript和java一样.-
> Vue 的\$是封装了一些 vue 的内建函数,然后导出以\$开头...这显然并不是 jQuery的专利;
> jQuery 的\$是选择器!!取得 DOM区域...两者的作用完全不一致!

**Q32：Error in event handler for “click”:”xxx”**

这个问题大多都是你写的代码有问题.你的事件触发了,但是组件内部缺少对应的实现或者变量,所以抛出事件错误。

解决方案:看着报错慢慢排查

**Q33：组件的通讯有哪几种啊!**

基本最常用的是这几种;

> 父传子: props
> 子传父: emit
> 兄弟通讯:event bus: 就是找一个中间组件来作为信息传递中介
> vuex: 信息树

**Q34：vuex的用户信息为什么还要存一遍在****浏览器****里(sessionStorage or localStorage)**

因为 vuex的 store 干不过刷新啊，保存在浏览器的缓存内,若用户刷新的话,值再取一遍呗;

**Q35：“有 Vue + Vue Router + Vuex”或什么”express + vue + mongodb”的项目学习么**

Github 一搜一大堆,提这些问题的人动动脑子!

**Q36：线上若是 nginx,如何部署?以及反向代理这些!**

1.将node端的服务端口放入服务器的80端口，做反向代理，这里用的是3000端口来做示范
```

#先定义一个website变量，方便管理以后端口的变更，不会影响到后续的80端口其他的操作
upstream website{
  server 127.0.0.1:3000;
}
 
server {
  listen 80;
#业户逻辑... ...
####
  location / {
        proxy_pass    http://website;
        proxy_redirect default ;
  }
####  
}
```

**Q37：“我会 Vue 我还需要学习 jQuery 或者原生 JS 么”**

jQuery还有很多公司在用,源码可以学习的地方很多;原生 js 是根本,不管是哪个前端框架,最终都是 js 实现的;只有基础扎实,才能学的比较深...

框架只是加快开发,提高效率,但不是你在这一行长期立足的根本;-

前端的人不仅需要宽度,也要深度...这样才能走的更远....

**Q38：npm run dev 报端口错误!Error: listen EADDRINUSE :::8080**

自己用 webpack搭脚手架的都不用我说了;Vue-cli 里面的 webpack 配置: config/index.js
```js
dev: {
    env: require("./dev.env"),
    port: 8080, //  这里这里,若是这个端口已经给系统的其他程序占用了.改我改我!!!!!!
    autoOpenBrowser: true,
    assetsSubDirectory: "static",
    assetsPublicPath: "/",
    proxyTable: {
      "/bp-api": {
        target: "http://new.d.st.cn",
        changeOrigin: true,
        // pathRewrite: {
        //   "^/bp-api": "/"
        // }
    }
},
```

**Q39：什么时候用v-if,什么用 v-show!**

我们先来说说两者的核心差异;

> v-if : DOM 区域没有生成,没有插入文档..等条件成立的时候才动态插入到页面!有些需要遍历的数组对象或者值,最好用这货控制,等到拿到值才处理遍历,不然一些操作过快的情况会报错,比如数据还没请求到!
> v-show: DOM 区域在组件渲染的时候同时渲染了,只是单纯用 css 隐藏了，对于下拉菜单,折叠菜单这些数据基本不怎么变动.用这个最合适了..而且可以改善用户体验,因为它不会导致页面的重绘,DOM 操作会!

简言之: DOM结构不怎么变化的用v-show, 数据需要改动很大或者布局改动的用v-if

**Q40：`<template>`是什么,html5的标签么?**

你猜对了..html5的标签还真有这么一个，不过 Vue 的 template 有点不一样,不是去给浏览器解析的。

你可以理解为一个临时标签,用来方便你写循环,判断的....

因为最终 template 不会解析到浏览器的页面,他只是在 Vue 解析的过程充当一个包裹层!最终我们看到的是内部处理后的组合的 DOM 结构!

**Q41：the “scope” attribute for scoped slots …. replaced by “slot-scope” since 2.5**

这个问题只出现老项目升级到 vue2.5+的时候, 提示就是 scope 现在要用 slot-scope 来代替,但是 scope 暂时可以用,以后会移除

**Q42：Uncaught ReferenceError : Vue is not defined!**

依次排除:

> Vue是否正确引入!
> Vue是否正确实例化!
> Vue 用的姿势是否正确(比如你直接一个 Vue 的变量!!!刚好又没定义,,具体问题具体分析吧)

**Q43：ERROR in static/js/xxxxxxx.js from UglifyJs**

我知道其中一种情况会报这种情况,就是你引入的 js,是直接引入压缩版本后的 js(xxx.min.js);然后 webpack 内又启用了 UglifyJs(压缩 JS的), 二重压缩大多都会报错!!

解决方案:引入标准未压缩的 JS

**Q44：props不使用:(v-bind)可以传递值么!**

可以,只是默认传递的类型会被解析成字符串!若是要传递其他类型,该绑定还是绑定。

**Q45：Uncaught TypeError : Cannot set property xxx which has only a getter**

这个问题就是你要操作的属性只允许 getter,不允许 setter;

解决方案? 用了别人的东西就要遵循别人的套路来,不然就只能自己动手丰衣足食了!

**Q46：单组件中里面的 import xxx from ‘@/components/layout/xxx’中的@是什么鬼!**

这是 webpack 方面的知识,看到了也说下吧...webpack可以配置alias(也就是路径别名),玩过 linux 或者 mac 都知道。

依旧如上,会自己搭脚手架的不用我说了...看看 vue-cli 里面的;

文件名: build -> webpack.base.conf.js
```js
resolve: {
    extensions: [".js", ".vue", ".json"], // 可以导入的时候忽略的拓展名范围
    alias: {
      vue$: "vue/dist/vue.esm.js",  
      "@": resolve("src"),  // 这里就是别名了,比如@就代表直接从/src 下开始找起!!!
      "~": resolve("src/components")
    }
},
```

**Q47：SCSS(SASS) 还是 less,stylus 好!**

三者都是预处理器;

scss 出现最久,能做的功能比较多,但是若是普通的嵌套写法,继承,mixin 啊，这三个都差不多..会其中一个其他两个的粗浅用法基本也会了，不过写法有些差异:-

> scss: 写法上是像 css 靠齐
> sass : 其实也就是 scss , 只是写法不一样...靠的是缩进
> less : 跟 css 基本靠齐
> stylus : 一样,靠缩进..跟pug(Jade)一样

使用环境的差异:

> scss 可以借助 ruby 或者 node-sass 编译
> less 可以用 less.js 或者对应的 loader 解析
> stylus 只能借助 loader 解析,它的出现就是基于 node 的

也有一个后起之秀,主打解耦,插件化的!!! 那就是PostCSS,这个是后处理器! 有兴趣的可以自行去了解,上面的写法都能借助插件实现!

**Q48：Failed to compile with x errors : This dependency was not found !**

编译错误,对应的依赖没找到! 解决如下:

知道缺少对应的模块,直接装进去，若是一个你已经安装的大模块(比如 axios)里面的子模块(依赖包)出了问题,卸载重装整个大模块.因为你补全不一定有用!

**Q49：SyntaxError: Unexpected identifier;**

语法错误,看错误信息去找到对应的页面排查！

**Q50：为什么我的 npm 或者 yarn 安装依赖会生成 lock文件,有什么用!**

lock 文件的作用是统一版本号,这对团队协作有很大的作用;

若是没有 lock 锁定,根据package.json里面的^,~这些.-

不同人,不同时间安装出来的版本号不一定一致;-

有些包甚至有一些breaking change(破坏性的更新),造成开发很难顺利进行!

**Q51：组件可以缓存么?**

可以,用keep-alive;

不过是有代码的..占有内存会多了...所以无脑的缓存所有组件!!!别说性能好了..切换几次,有些硬件 hold不住的,浏览器直接崩溃或者卡死..

所以keep-alive一般缓存都是一些列表页,不会有太多的操作,更多的只是结果集的更换..给路由的组件meta增加一个标志位,结合v-if就可以按需加上缓存了!

**Q52：package.json里面的dependencies 和devDependencies的差异!**

其实不严格的话,没有特别的差异;若是严格,遵循官方的理解;

dependencies : 存放线上或者业务能访问的核心代码模块,比如 vue,vue-router;

devDependencies: 处于开发模式下所依赖的开发模块,也许只是用来解析代码,转义代码,但是不产生额外的代码到生产环境, 比如什么babel-core这些 如何把包安装到对应的依赖下呢?

```
npm install --save xxxx // dependencies
npm install --save-dev xxxx // devDependencies

//也能用简易的写法(i:install,-S:save,-D:save-dev)

npm i -S xxxx // npm install --save xxxx
npm i -D xxxx // npm install --save-dev xxxx
``` 

**Q53：安装chromedriver报错!!姿势没错啊npm i -D chromedriver**

恩,伟大的 GFW.....解决方案:指定国内的源安装就可以了

 

 

 

    npm install --save-dev chromedriver --chromedriver_cdnurl=http://cdn.npm.taobao.org/dist/chromedriver 

**Q54：Vue ,react, Angular学习哪个好?哪个工作比较好找!**

Vue属于渐进式开发,传统开发过渡 MVVM 模式的小伙伴,Vue 比较好上手,学习成本比较低。

基础比较好的,有折腾精神的,可以选择NG5或者react16;-

NG5需要学习typescript和rxjs,还用到比较多的新东西,比如装饰器,后端的注入概念.ng有自己的一整套 MVVM 流程;-

而Vue和React核心只是view,可以搭配自己喜欢的-

React的写法偏向函数式写法,还有 jsx,官方自己有 flow,当然也能搭配ts,我也没怎么接触..所以也有一定的学习成本;-

至于哪个比较好找工作!!!告诉你..若是只会一个框架,那不是一个合格的前端;-

人家要的是动手能力,解决能力!!!!技术和待遇是成正比的!!

颜值和背景,学历,口才可以加分..但是这些条件你必须要有的基础下才能考虑这些!!!

**Q55：我有个复杂组件需要有新增和编辑的功能同时存在,但是字段要保持不变性怎么破**

字段保持不变性怎么理解呢? 就是说比如新增和编辑同时共享一份 data;

有一种就是路由变了,组件渲染同一个(不引起组件的重新渲染和销毁!),但是功能却不同(新增和编译)..

比如从编辑切到新增,data必须为空白没有赋值的,等待我们去赋值;

这时候有个东西就特别适合了,那就是immutable-js;

这个东西可以模拟数据的唯一性!或者叫做不变性!

**Q56：“首屏加载比较慢!!怎么破!打包文件文件比较大”**

依次排除和确认:

减少第三方库的使用,比如jquey这些都可以不要了,很少操作 dom,而且原生基本满足开发。

若是引入moment这些,webpack 排除国际化语言包。

webpack 常规压缩js,css, 愿意折腾的还可以引入 dll 这些。

路由组件采用懒加载。

加入路由过渡和加载等待效果,虽然不能解决根本,但起码让人等的舒心一点不是么!!!

整体下来,打包之后一般不会太大;

但是倘若想要更快?那就只能采用服务端渲染(SSR)了,可以避免浏览器去解析模板和指令这些;

直接返回一个 html ....还能seo...

**Q57：Vue SPA 没法做优化(SEO)!有解决方案么**

可以的,SSR(服务端渲染就能满足你的需求),因为请求回来就是一个处理完毕的 html，现在 vue 的服务端开发框架有这么个比较流行,如下Nuxt.js。

**Q58：Vue可以写 hybird App 么!**

当然可以,两个方向.
```
codorva + nativescript
Weex
```

**Q59：Vue可以写桌面端么?**

当然可以,有electron和node-webkit(nw); 我只了解过electron;
```
electron
electron-vue: Vue-cli 针对 electron 的脚手架模板
```

**Q60：Vue开发,项目中还需要 jQuery么**

分情况探讨:

若是老项目,只是单纯引入 Vue 简化开发的,依旧用吧…
重构项目?或者发起新项目的,真心没必要了.开发思路不一样,很多以前用 DOM 操作的现在基本可以数据驱动实现,而少量迫不得已的DOM 操作原生就能搞定…而且能小打包体积,速度又快,何乐而不为!
