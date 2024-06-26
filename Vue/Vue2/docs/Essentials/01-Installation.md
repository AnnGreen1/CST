# 安装

#### 兼容性

Vue 不支持 IE8 及以下版本，因为 Vue 使用了 IE8 无法模拟的 ECMAScript 5 特性。但它支持所有兼容 ECMAScript 5 的浏览器。

#### 语义化版本控制

Vue 在其所有项目中公布的功能和行为都遵循[语义化版本控制](https://semver.org/lang/zh-CN/)。对于未公布的或内部暴露的行为，其变更会描述在[发布说明](https://github.com/vuejs/vue/releases)中。

#### 更新日志

最新稳定版本：2.7.14

每个版本的更新日志见 [GitHub](https://github.com/vuejs/vue/releases)。

### Vue Devtools

在使用 Vue 时，我们推荐在你的浏览器上安装 [Vue Devtools](https://github.com/vuejs/vue-devtools#vue-devtools)。它允许你在一个更友好的界面中审查和调试 Vue 应用。

### 直接用 `<script>` 引入

观看本节视频讲解
直接下载并用 `<script>` 标签引入，Vue 会被注册为一个全局变量。

> 在开发环境下不要使用压缩版本，不然你就失去了所有常见错误相关的警告!

[开发版本](https://v2.cn.vuejs.org/js/vue.js)：包含完整的警告和调试模式

[生产版本](https://v2.cn.vuejs.org/js/vue.min.js)：删除了警告，37.51KB min+gzip

#### CDN

对于制作原型或学习，你可以这样使用最新版本：

```html
<script src="https://cdn.jsdelivr.net/npm/vue@2.7.14/dist/vue.js"></script>
```

对于生产环境，我们推荐链接到一个明确的版本号和构建文件，以避免新版本造成的不可预期的破坏：

```html
<script src="https://cdn.jsdelivr.net/npm/vue@2.7.14"></script>
```

如果你使用原生 ES Modules，这里也有一个兼容 ES Module 的构建文件：

```html
<script type="module">
    import Vue from 'https://cdn.jsdelivr.net/npm/vue@2.7.14/dist/vue.esm.browser.js'
</script>
```

你可以在 [cdn.jsdelivr.net/npm/vue](cdn.jsdelivr.net/npm/vue) 浏览 NPM 包的源代码。

Vue 也可以在 [unpkg](https://unpkg.com/vue@2.7.14/dist/vue.js) 和 [cdnjs](https://cdnjs.cloudflare.com/ajax/libs/vue/2.7.14/vue.js) 上获取 (cdnjs 的版本更新可能略滞后)。

请确认了解[不同构建版本]()并在你发布的站点中使用**生产环境版本**，把 `vue.js`  ` 换成 ` vue.min.js`。这是一个更小的构建，可以带来比开发环境下更快的速度体验。

#### NPM

在用 Vue 构建大型应用时推荐使用 NPM 安装[1]。NPM 能很好地和诸如 [webpack]() 或 [Browserify]() 模块打包器配合使用。同时 Vue 也提供配套工具来开发[单文件组件]()。

```
# 最新稳定版
$ npm install vue@^2
```

#### 命令行工具 (CLI)

Vue 提供了一个[官方的 CLI](https://github.com/vuejs/vue-cli)，为单页面应用 (SPA) 快速搭建繁杂的脚手架。它为现代前端工作流提供了开箱即用的构建设置。只需要几分钟的时间就可以运行起来并带有热重载、保存时 lint 校验，以及生产环境可用的构建版本。更多详情可查阅 [Vue CLI 的文档](https://cli.vuejs.org/)。

> CLI 工具假定用户对 Node.js 和相关构建工具有一定程度的了解。如果你是新手，我们强烈建议先在不用构建工具的情况下通读指南，在熟悉 Vue 本身之后再使用 CLI。

#### 对不同构建版本的解释

在 [NPM 包的 dist/ 目录](https://cdn.jsdelivr.net/npm/vue@2.7.14/dist/)你将会找到很多不同的 Vue.js 构建版本。这里列出了它们之间的差别：

|   | UMD |	CommonJS |	ES Module (基于构建工具使用) |	ES Module (直接用于浏览器) |
| --- | --- | --- | --- | --- |
| 完整版	| vue.js　| vue.common.js |	vue.esm.js |	vue.esm.browser.js |
| 只包含运行时版	 | vue.runtime.js |	vue.runtime.common.js |	vue.runtime.esm.js	| - |
| 完整版 (生产环境) |	vue.min.js | 	- |	- |	vue.esm.browser.min.js |
| 只包含运行时版 (生产环境)	 | vue.runtime.min.js |	- |	- |	- |

##### 术语

* 完整版：同时包含编译器和运行时的版本。

* 编译器：用来将模板字符串编译成为 JavaScript 渲染函数的代码。

* 运行时：用来创建 Vue 实例、渲染并处理虚拟 DOM 等的代码。基本上就是除去编译器的其它一切。

* [UMD](https://github.com/umdjs/umd)：UMD 版本可以通过 `<script>` 标签直接用在浏览器中。jsDelivr CDN 的 [https://cdn.jsdelivr.net/npm/vue@2.7.14](https://cdn.jsdelivr.net/npm/vue@2.7.14) 默认文件就是运行时 + 编译器的 UMD 版本 (`vue.js``)。

* [CommonJS](https://wiki.commonjs.org/wiki/Modules/1.1)：CommonJS 版本用来配合老的打包工具比如 [Browserify]() 或 [webpack 1](https://webpack.github.io/)。这些打包工具的默认文件 (`pkg.main`) 是只包含运行时的 CommonJS 版本 (`vue.runtime.common.js`)。

* [ES Module](http://exploringjs.com/es6/ch_modules.html)：从 2.6 开始 Vue 会提供两个 ES Modules (ESM) 构建文件：

    - 为打包工具提供的 ESM：为诸如 webpack 2 或 Rollup 提供的现代打包工具。ESM 格式被设计为可以被静态分析，所以打包工具可以利用这一点来进行“tree-shaking”并将用不到的代码排除出最终的包。为这些打包工具提供的默认文件 (`pkg.module`) 是只有运行时的 ES Module 构建 (`vue.runtime.esm.js`)。

为浏览器提供的 ESM (2.6+)：用于在现代浏览器中通过 `<script type="module">` 直接导入。

##### 运行时 + 编译器 vs. 只包含运行时

如果你需要在客户端编译模板 (比如传入一个字符串给 `template` ` 选项，或挂载到一个元素上并以其 DOM 内部的 HTML 作为模板)，就将需要加上编译器，即完整版：

```js
// 需要编译器
new Vue({
    template: '<div>{{ hi }}</div>'
})

// 不需要编译器
new Vue({
    render(h) {

        return h('div', this.hi)

    }
})
```

当使用 `vue-loader` 或 `vueify` 的时候， `*.vue` 文件内部的模板会在构建时预编译成 JavaScript。你在最终打好的包里实际上是不需要编译器的，所以只用运行时版本即可。

因为运行时版本相比完整版体积要小大约 30%，所以应该尽可能使用这个版本。如果你仍然希望使用完整版，则需要在打包工具里配置一个别名：

**webpack**

```js
module.exports = {
    // ...
    resolve: {

        alias: {
            'vue$': 'vue/dist/vue.esm.js' // 用 webpack 1 时需用 'vue/dist/vue.common.js'
        }

    }
}
```

**Rollup**

```js
const alias = require('rollup-plugin-alias')

rollup({
    // ...
    plugins: [

        alias({
            'vue': require.resolve('vue/dist/vue.esm.js')
        })

    ]
})
```

**Browserify**
添加到你项目的 `package.json` ：

```js
{
    // ...
    "browser": {

        "vue": "vue/dist/vue.common.js"

    }
}
```

**Parcel**
在你项目的 `package.json` 中添加：

```js
{
    // ...
    "alias": {

        "vue": "./node_modules/vue/dist/vue.common.js"

    }
}
```

##### 开发环境 vs. 生产环境模式

对于 UMD 版本来说，开发环境/生产环境模式是硬编码好的：开发环境下用未压缩的代码，生产环境下使用压缩后的代码。

CommonJS 和 ES Module 版本是用于打包工具的，因此我们不提供压缩后的版本。你需要自行将最终的包进行压缩。

CommonJS 和 ES Module 版本同时保留原始的 `process.env. NODE_ENV` 检测，以决定它们应该运行在什么模式下。你应该使用适当的打包工具配置来替换这些环境变量以便控制 Vue 所运行的模式。把 `process.env. NODE_ENV` 替换为字符串字面量同时可以让 UglifyJS 之类的压缩工具完全丢掉仅供开发环境的代码块，以减少最终的文件尺寸。

**webpack**
在 webpack 4+ 中，你可以使用 `mode` 选项：

```js
module.exports = {
    mode: 'production'
}
```

但是在 webpack 3 及其更低版本中，你需要使用 [DefinePlugin](https://webpack.js.org/plugins/define-plugin/)：

```js
var webpack = require('webpack')

module.exports = {
    // ...
    plugins: [

        // ...
        new webpack.DefinePlugin({
            'process.env': {
                NODE_ENV: JSON.stringify('production')
            }
        })

    ]
}
```

**Rollup**
使用 [rollup-plugin-replace]()：

```js
const replace = require('rollup-plugin-replace')

rollup({
    // ...
    plugins: [

        replace({
            'process.env.NODE_ENV': JSON.stringify('production')
        })

    ]
}).then(...)
```

**Browserify**
为你的包应用一次全局的 [envify](https://github.com/hughsk/envify) 转换。

```shell
NODE_ENV=production browserify -g envify -e main.js | uglifyjs -c -m > build.js
```

也可以移步[生产环境部署](https://v2.cn.vuejs.org/v2/guide/deployment.html)。

##### CSP 环境

有些环境，如 Google Chrome Apps，会强制应用内容安全策略 (CSP)，不能使用 `new Function()` 对表达式求值。这时可以用 CSP 兼容版本。完整版本依赖于该功能来编译模板，所以无法在这些环境下使用。

另一方面，运行时版本则是完全兼容 CSP 的。当通过 webpack + vue-loader 或者 Browserify + vueify 构建时，模板将被预编译为 `render` 函数，可以在 CSP 环境中完美运行。

#### 开发版本

**重要**：GitHub 仓库的 `/dist` 文件夹只有在新版本发布时才会提交。如果想要使用 GitHub 上 Vue 最新的源码，你需要自己构建！

```shell
git clone https://github.com/vuejs/vue.git node_modules/vue
cd node_modules/vue
npm install
npm run build
```

#### Bower

Bower 只提供 UMD 版本。

```shell
# 最新稳定版本
$ bower install vue
```

#### AMD 模块加载器

所有 UMD 版本都可以直接用作 AMD 模块。
