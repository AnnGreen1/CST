# 安装
### 直接下载 / CDN 引用
https://unpkg.com/vuex@4

Unpkg.com 提供了基于 npm 的 CDN 链接。以上的链接会一直指向 npm 上发布的最新版本。您也可以通过 `https://unpkg.com/vuex@4.0.0/dist/vuex.global.js` 这样的方式指定特定的版本。

在 Vue 之后引入 `vuex` 会进行自动安装：
```js
<script src="/path/to/vue.js"></script>
<script src="/path/to/vuex.js"></script>
```
### npm
```
npm install vuex@next --save
```
### Yarn
```
yarn add vuex@next --save
```
### 自己构建
如果需要使用 dev 分支下的最新版本，您可以直接从 GitHub 上克隆代码并自己构建。
```
git clone https://github.com/vuejs/vuex.git node_modules/vuex
cd node_modules/vuex
yarn
yarn build
```