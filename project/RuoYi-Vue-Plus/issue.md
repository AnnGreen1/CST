# issue
01. unocss 是什么东西？有什么用？要不要用？
（虽然是大佬开源的，但是我感觉有点鸡肋。。。。）

```
plus-ui/src/main.ts line 3
```

02. 这个项目用到了 `import 'virtual:svg-icons-register';` ，这是什么？
Vue3+vite使用svg图标
https://blog.csdn.net/qq_45651984/article/details/126619468

```
plus-ui/src/main.ts line 23
```

03. Object.entries() 和 Object.keys() 有什么区别？

```
plus-ui/src/plugins/svgicon.ts line 11
```

04. RouteOption 和之前了解到的 RouteRecordRaw 有什么区别？

```
plus-ui/src/router/index.ts line 32
```

05. 空字符串的 path 会匹配什么路由？

```
plus-ui/src/router/index.ts line 70
```

06. 如何在项目中定义全局的类型type、interface等？

07. SASS 的 @mixin、@include是什么语法？

```
plus-ui/src/assets/styles/btn.scss
```

08. route.path.startsWith('/redirect/')，有这个方法吗？

```
plus-ui/src/components/Breadcrumb/index.vue line 44
```

09. RouteLocationMatched 是什么类型？

```
plus-ui/src/components/Breadcrumb/index.vue line 14
```

10. types目录 xxx.d.td 文件的有什么用？怎么使用的？有没有特殊之处？
在 tsconfig.json 中，include 属性指定了要编译的ts文件，如此这些文件中的类型就会变成全局类型。

11. 空字符串的 path 会匹配什么路由？ 
空字符串的 path 会匹配 '/' 路由（也就是说和 '/' 效果相同）

```
plus-ui/src/router/index.ts line 70
```

12. 如何通过 scrollBehavior 来控制路由中滚动条位置？

```
plus-ui/src/router/index.ts line 179
```

13. 在脚手架项目中使用 import 引入的项目中的某个文件还是某个依赖，是如何区分的？是什么语法？

```
plus-ui/src/main.ts line 3 - 5
```

14. 项目中的 tsconfig.json 是怎么生效的？tsconfig.json 使得 types 文件夹的类型生效的吗？

15. await-to-js 的基本使用
https://www.npmjs.com/package/await-to-js
使用参考：https://juejin.cn/post/7010213752242962439

```
plus-ui/src/views/login.vue line 74
```

16. 可以在安装有依赖库的项目中随意使用依赖库中的样式吗（例如直接在一个不是组件库内部组件的标签上直接使用组件库中的类名）？可以实现预期效果吗？为什么？有什么有优缺点？
可以
```
plus-ui/src/views/login.vue line 9
```

17. SvgIcon 组件到底是怎么实现的？

前端工程化之SvgIcon组件：https://juejin.cn/post/7063415079928070157

18. storeToRefs 是什么？

```
plus-ui/src/layout/components/NavBar.vue line 105
```

19. `const newNotice = ref(<number>0);`与`const newNotice = ref<number>(0)`有什么区别？
GPT回答：这两种方式本质上是相同的，都是使用泛型指定了 ref 中存储的数据类型为 number 。在现代的TypeScript版本中，这两种写法都是合法且等效的，没有区别。第一种写法是TypeScript中的类型断言，用于明确告诉编译器变量的类型，而第二种写法则是直接使用泛型指定类型。选择哪种写法取决于个人喜好和代码风格。

```
plus-ui/src/layout/components/NavBar.vue line 106
```

20. 这是什么语法？

```js
const searchMenuRef = ref < InstanceType < typeof SearchMenu >> ();
```

```
plus-ui/src/layout/components/NavBar.vue line 118
```

21. 为什么看到这个项目的单文件组件 script 标签上可以写 name 属性？从来没听说过 Vue3 有这种语法？
参考  Vue3 setup 如何添加name：https://juejin.cn/post/7171343547495350302

22. 如何实现不引入也能使用`ref`、`computed`、`onMounted`、`useRoute`、`getCurrentInstance`、`defineEmits`、`watch` 等 api ？甚至包括 element-plus 的一部分内容及 VueUse 的一部分内容？
vite 自动导入组件、API，包括element-plus、icon
https://juejin.cn/post/7130123453947969573

23. 标注类型是如何取舍的？哪些需要标注？哪些不需要标注？

24. `:export`是什么语法？（其实有英文注释）
```
plus-ui/src/assets/styles/variabls.module.scss line 77
plus-ui/src/layout/components/Sidebar/index.vue line 26
```

25. 这个 IframeToggele 组件有什么作用？
```
plus-ui/src/layout/components/IframeToggle/index.vue
plus-ui/src/layout/components/AppMain.vue line 10
```

26. 如何使用 `unplugin-vue-components` 实现的全局注册组件？
vite 自动导入组件、API，包括element-plus、icon
https://juejin.cn/post/7130123453947969573
```
plus-ui/vite/plugins/components.ts line 15
plus-ui/src/types/components.d.ts
```

27. vit项目中`.d.ts`与`.ts`文件有什么区别？types 目录下文件又有什么特殊之处？

TS的.d.ts和declare用法
https://juejin.cn/post/7219189313723154489

d.ts 类型声明文件（阮一峰关于 d.ts 详解，**查看 typescript 依赖源代码可以发现很多 lib.xxx.s.ts 命名的文件，这些文件里详细列出了各种常用的类型 interface**）
https://typescript.p6p.net/typescript-tutorial/d.ts.html

这篇文章系详细讲解了它们之间的关系，配合 unpligin-vue-components 的使用理解，就可以实现在 types 目录下定义全局的类型。
通过观察，整个项目的类型定义大致可以分为以下几种：
1、api 文件夹下每个 index.ts 对应一个 types.ts，types.ts 中使用 interface 定义类型，并在 index.ts 中引入，标注了请求的 Request、Response。
2、单文件组件中 ref、computed 等 api 的使用时；单文件组件中的函数参数（也不是所有的类型都进行了标注）。
3、也存在在单文件组件中使用 type 关键字定义一个简单类型标注 ref 的情况。
4、大部分使用的就是断言和基本类型标注、函数形参类型标注（并不是所有的都进行了类型标注，是如何区分哪些进行标注，哪些不进行标注的呢？）。
5、在不少地方会使用开发者可能根本不知道的类型，比如自定义指令时这个指令是什么类型？（是 Directive 类型，vue 内部定义的一种类型，在使用到的地方从 vue 中导出）
6、HTMLElement、MouseEvent、WheelEvent、Function 类型是哪里来的？可以直接使用？
7、从外部库导入的类型，比如 axios、element-plus、vue-types
8、使用 instanceof 从原生类型获取到类型
9、在某个页面导入 api 文件夹下的某个 types.ts 文件里的 interface 类型使用



能够熟练判断各种依赖中可以导出哪种类型也非常重要（比如 vue-router 中可以导出 RouteOption, TagView, RouteLocationRaw 类型，每个分别是什么知道吗？）
```
plus-ui/src/layout/components/TagsView/index.vue line 39
```

28. `const newsList =ref([]) as any` 是什么语法？这标注了 newsList 的类型还是 newsList.value 的类型？
标注 newsList 的类型而非 newsList.value 的类型
```
plus-ui/src/layout/components/notice/index.vue line 44
```

29. 创建路由器的时候配置滚动条刷新时还原，只在部分页面实现了刷新滚动条还原的效果？为什么？
```
plus-ui/src/router/index.ts line 179
```

30. 从 vue 中导出的 ref 和 Ref 有什么区别？

31. vue-types 的使用，“简化”了 props 的定义方式（创造了一种定义 props 的方法）
https://www.npmjs.com/package/vue-types

32、为什么这个项目要使用 await-to-js 这个库，有什么用？有必要吗？
https://juejin.cn/post/7010213752242962439
https://juejin.cn/post/7119253480170061855

33、图片的路径上拼接时间戳的做法真的有用吗？
```
plus-ui/src/views/error/401.vue line 16、23、27
```

34、有没有标注类型有什么区别？编码提示方面？本地运行方面？编译打包方面？如果没有区别那 ts 的作用体现到哪里了呢？

35、在 RuoYi-Vue 和 plus-ui 单文件组件中没有看到太多 CSS 代码（不像自己写的复杂甚至几百行，整个单文件接近千行），是因为它们的页面样式比较简单，还是说它们有这更好的组织方式和 CSS 能力？
以下几点是否是原因
1. 使用了 element-plus 的栅格系统自组织布局
2. 布局比较简单，相较实际开发过程中的UI设计来说。
3. 样式也比较简单，都是都使用了组件的默认样式。

36、为什么要使用 toRef 或 toRefs ？直接使用 ref 不就能避免它们的使用场景了吗？
```
plus-ui/src/views/user/index.vue line 315
plus-ui/src/views/system/role/index.vue line 252
```

37、使用 Object.assign() 和直接赋值有什么区别？
```
plus-ui/src/views/system/user/authRole.vue line 112
```


https://blog.csdn.net/michelle_zhong/category_11109741_2.html

38. SVGIcon 组件的构建与使用
https://segmentfault.com/a/1190000041720143
https://github.com/AnnGreen1/article/issues/54

39. 为什么不直接使用 ref ，要使用 toRefs 多此一举？项目里普遍使用了 toRefs

40. unocss 在项目中的使用、过程、生效原理，自己会从头到尾完整使用吗？