# 安装
本文介绍 TypeScript 环境的安装。

我们需要使用到 npm 工具安装，如果你还不了解 npm，可以参考我们的NPM 使用介绍。

### NPM 安装 TypeScript
如果你的本地环境已经安装了 npm 工具，可以使用以下命令来安装。

使用国内镜像：
```
npm config set registry https://registry.npmmirror.com
```
安装 typescript：
```
npm install -g typescript
```
安装完成后我们可以使用 `tsc` 命令来执行 TypeScript 的相关代码，以下是查看版本号：
```
$ tsc -v
Version 3.2.2
```
然后我们新建一个 app.ts 的文件，代码如下：
```ts
var message:string = "Hello World" 
console.log(message)
```
通常我们使用 `.ts` 作为 TypeScript 代码文件的扩展名。

然后执行以下命令将 TypeScript 转换为 JavaScript 代码：
```
tsc app.ts
```
![](../imgs/typescript_compiler.png)
这时候在当前目录下（与 app.ts 同一目录）就会生成一个 app.js 文件，代码如下：
```js
var message = "Hello World";
console.log(message);
```
使用 node 命令来执行 app.js 文件：
```
$ node app.js 
Hello World
```
TypeScript 转换为 JavaScript 过程如下图：
![](../imgs/ts-2020-12-01-1.png)