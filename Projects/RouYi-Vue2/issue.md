# issue
01. 登录页验证码是怎么实现的？
登录页验证码就是一张图片，不过 `src` 的值是图片 `base64` 编码。首次进入页面调用验证码图片接口 `captchaImage` ，返回一个 `base64` 编码及一个 `uuid` ，点击登录时把 `uuid` 和所填写的验证码内容返送给后端，通过校验验证码和 `uuid` 是否匹配检验验证码是否正确。同时点击验证码再次调用接口 `captchaImage` 。

```
RuoYi-Vue/ruoyi-ui/src/views/login.vue  line 114-127
```

02. `!=`运算符是什么情况？感觉从来没用过？

```
RuoYi-Vue/ruoyi-ui/src/views/register.vue   line 80
```

03. 记住密码功不能明文保存密码，使用 jsencrypt 实现加密，加密后存储在 Cookie 里
前端加密与 crypto-js 和 JSEncrypt 的使用 
https://juejin.cn/post/7128955031063101448

```
RuoYi-Vue/ruoyi-ui/src/views/login.vue  line 152
RuoYi-Vue/ruoyi-ui/src/utils/jsencrypt.js   line 22
```

04. 还有mapState()辅助函数？获取状态根本不需要使用getter，之前使用getter和mapGetter()真是多次一举。

05. vuex分模块后可以用`this.$store.dispatch('app/closeSideBar')`这种写法？
vuex文档提到这个：https://v3.vuex.vuejs.org/zh/guide/modules.html#%E5%91%BD%E5%90%8D%E7%A9%BA%E9%97%B4

```
RuoYi-Vue/ruoyi-ui/src/store/modules/app.js line 56 - 62
RuoYi-Vue/ruoyi-ui/src/layout/index.vue   line 74
```

06. vue路由的路径为空字符串什么意义？这和 `/` 有什么区别？
`''` 是默认路由， `/` 是根路径
Vue-router中path的值是空字符串，这是否等同与根目录？
https://segmentfault.com/q/1010000042578477

```
RuoYi-Vue/ruoyi-ui/src/router/index.js  line 68 - 85
```

07. `el-scrollbar`组件怎么从来没听说过？文档里也没写？
el-scrollbar 组件，elmentui 文档里是没有提到的，官方在 github 的 issues 中表示不会写在文档中，需要用的自己看源码进行调用
https://juejin.cn/post/6934900344346394661
 

```
RuoYi-Vue/ruoyi-ui/src/layout/components/Sidebar/index.vue  line 7
```

08. 每个页面的title是怎么改变的？metainfo是什么？
https://blog.csdn.net/qq_39047060/article/details/115209954
https://blog.csdn.net/ScreenshotOfSeed/article/details/98033144
https://juejin.cn/post/6844903551089524744

09. Vue内置组件component如何使用？为什么要用？用在什么场景？可以用 v-if 或 v-show 代替吗？
https://juejin.cn/post/7183584978972704805
https://www.cnblogs.com/jyk/p/14607676.html
https://juejin.cn/post/7183584978972704805

10. 父组件kebab case格式的props可以在子组件里使用camelCase小驼峰接收？？？？

```
RuoYi-Vue/ruoyi-ui/src/components/HeadSearch/index.vue  line 6
RuoYi-Vue/ruoyi-ui/src/components/SvgIcon/index.vue line 17
```

11. 绑定的样式对象的写法，使用一个 computed，属性值是函数使用模板字符串，属性名是带有连字符的使用''

```
RuoYi-Vue/ruoyi-ui/src/components/SvgIcon/index.vue line 45
```

12. `$listeners`是什么api？

```
RuoYi-Vue/ruoyi-ui/src/components/SvgIcon/index.vue line 1
```

13. vue2不是不支持多根节点的吗？为什么这个组件可以有一个div和一个svg？

```
RuoYi-Vue/ruoyi-ui/src/components/SvgIcon/index.vue line 1
```

14. 自定义指令`v-hasPremi`和v-if有什么区别？
自定义指令通过 `el.parentNode.removeChild(el)` 实现，这和 v-if 移除 dom 有什么区别？v-if 底层是怎么移除 dom 的？这可能直接去看 v-if 的源码更合适。

```
RuoYi-Vue/ruoyi-ui/src/directive/permission/hasPermi.js
```

15. 数组的`forEach`函数不止一个参数，可以直接拿到索引的。
https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Global_Objects/Array/forEach

```

RuoYi-Vue/ruoyi-ui/src/store/modules/permission.js line 136
```

16. router-link 是如何实现的，其内部是如何封装的？想要新标签页打开一个路由能使用 router-link 进行改造后实现吗？

```
RuoYi-Vue/ruoyi-ui/src/views/system/dict/index.vue line 20
```

17. 数据监控这个模块是怎么实现的？整个都没看懂。还没看。

18. elementUI 表格里开启 show-overflow-tooltip ，这里的tooltip是怎么实现的？需要 v-if 判断，之后还要手动截取这么麻烦吗？

19. Corn 表达式是什么？
前端必备的定时任务技能 - Cron + node-schedule
作者：TinssonTai
链接：https://juejin.cn/post/7163608389233147918
来源：稀土掘金
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

21. `:export`是什么语法？（其实有英文注释）

`:export {}` 不是 SCSS 的语法。实际上， `:export {}` 是 CSS Modules 的语法，用于导出模块中的样式规则。

在 CSS Modules 中，可以使用 `:export` 来导出模块中的样式规则，这样其他模块就可以引用这些样式规则。例如，一个包含了 `button` 样式规则的模块可以这样导出：

```css
:export {
    button: buttonClassName;
}
```

其他模块可以使用 `button` 样式规则，就像这样：

```css
@value button from './button.module.css';

.myButton {
    composes: button from global;
    /* 其他样式规则 */
}
```

在上面的例子中， `:export` 用于导出 `button` 样式规则，然后在另一个模块中使用 `@value` 来引用这个样式规则。

需要注意的是，CSS Modules 是一种用于管理 CSS 样式的技术，它允许你在项目中使用局部作用域的 CSS 样式，并且提供了一种模块化的方式来引用和重用样式规则。 `:export` 是 CSS Modules 提供的语法之一。

```
RuoYi-Vue/ruoyi-ui/src/assets/styles/variabls.scss line 43
RuoYi-Vue/ruoyi-ui/src/layout/components/Sidebar/index.vue line 33
```

22. SCSS混入（@mixin）从来没使用过
SCSS 混入语法
https://sass-lang.com/guide/#mixins

```
RuoYi-Vue/ruoyi-ui/src/assets/styles/btn.scss line 8
```

23. `~@`在SCSS中可以使用是为什么？SCSS文档有提到吗？是编译器的支持吗？直接使用一个`~`又是如何得到支持的呢？

```
RuoYi-Vue/ruoyi-ui/src/assets/styles/btn.scss line 27 & 29
```

24. text-rendering 是什么属性？
定义浏览器渲染引擎如何渲染字体。浏览器会在速度、清晰度、几何精度之间进行权衡。
https://developer.mozilla.org/zh-CN/docs/Web/CSS/text-rendering

25. SCSS 的 @if @else @else if ，又是从来没用过的。

```
RuoYi-Vue/ruoyi-ui/src/assets/styles/mixin.scss line 36 - 70
```

26. `!important` 之前不一定需要有空格隔开？

```
RuoYi-Vue/ruoyi-ui/src/assets/styles/ruoyi.scss line 274
```

27. `$route.matched`是什么？
https://v3.router.vuejs.org/zh/api/#%E8%B7%AF%E7%94%B1%E5%AF%B9%E8%B1%A1%E5%B1%9E%E6%80%A7

```
RuoYi-Vue/ruoyi-ui/src/components/Breadcrumb/index.vue line 41
```

28. https://quilljs.com/ 一个富文本框的使用？
https://quilljs.com/

```
RuoYi-Vue/ruoyi-ui/src/components/FileUpload/index.vue
```

29. 字符串的length属性表示的是什么长度？不同编码下字符串的字节长度有什么区别？输入框的length属性限制的又是什么长度？
字符串的length属性表示的是字符串的 UTF-16 码元长度（https://developer.mozilla.org/zh-CN/docs/Web/JavaScript/Reference/Global_Objects/String/length）。

```js
/**
 * @param {string} input value
 * @returns {number} output value
 * 这个函数主要用于计算字符串在 UTF-8 编码下的字节长度，特别适用于需要限制字符长度的场景，比如在输入框中限制字符长度或者在处理网络请求时需要限制传输数据的大小。
 */
export function byteLength(str) {
    // returns the byte length of an utf8 string
    let s = str.length
    for (var i = str.length - 1; i >= 0; i--) {
        const code = str.charCodeAt(i)
        if (code > 0x7f && code <= 0x7ff) s++
        else if (code > 0x7ff && code <= 0xffff) s += 2
        if (code >= 0xDC00 && code <= 0xDFFF) i--
    }
    return s
}
```

```
RuoYi-Vue/ruoyi-ui/src/utils/index.js line 89
```

30. 是怎么通过 KeepAlive 实现页面缓存的，和组件名有关系吗？

31. 总结权限角色系统的实现，对照之前微信收藏的一篇文章，分析一下。

32. 可以在安装有依赖库的项目中随意使用依赖库中的样式吗（例如直接在一个不是组件库内部组件的标签上直接使用组件库中的类名）？可以实现预期效果吗？为什么？有什么有优缺点？
可以，比如如下两个按钮会具有相同的样式。

```html
<template>
    <div>
        <el-button>按钮</el-button>
        <button class="el-button el-button-default">模拟按钮</button>
    </div>
</template>
```

33. 这个 IframeToggele 组件有什么作用？怎么使用？
```
RuoYi-Vue/ruoyi-ui/src/layout/components/IframeToggle/index.vue
RuoYi-Vue/ruoyi-ui/src/layout/components/AppMain.vue line 14
```

34. SVGIcon 组件的构建与使用
https://segmentfault.com/a/1190000041720143
https://github.com/AnnGreen1/article/issues/54