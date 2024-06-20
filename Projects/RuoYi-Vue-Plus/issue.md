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

17. SvgIcon 组件到底是怎么实现的？

前端工程化之SvgIcon组件：https://juejin.cn/post/7063415079928070157

18. storeToRefs 是什么？

```
plus-ui/src/layout/components/NavBar.vue line 105
```

19. const newNotice = ref(<number>0);与const newNotice = ref<number>(0)有什么区别？
GPT回答：这两种方式本质上是相同的，都是使用泛型指定了ref中存储的数据类型为number。在现代的TypeScript版本中，这两种写法都是合法且等效的，没有区别。第一种写法是TypeScript中的类型断言，用于明确告诉编译器变量的类型，而第二种写法则是直接使用泛型指定类型。选择哪种写法取决于个人喜好和代码风格。

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
