# API
### 全局配置
Vue.config 是一个对象，包含 Vue 的全局配置。可以在启动应用之前修改下列 property：

##### silent
- 类型：boolean
- 默认值：false
- 用法：
```js
Vue.config.silent = true
```
取消 Vue 所有的日志与警告。

##### optionMergeStrategies
- 类型：{ [key: string]: Function }
- 默认值：{}
- 用法：
```js
Vue.config.optionMergeStrategies._my_option = function (parent, child, vm) {
  return child + 1
}

const Profile = Vue.extend({
  _my_option: 1
})

// Profile.options._my_option = 2
```
自定义合并策略的选项。

合并策略选项分别接收在父实例和子实例上定义的该选项的值作为第一个和第二个参数，Vue 实例上下文被作为第三个参数传入。

- 参考[自定义选项的混入策略]()

##### devtools
- 类型：boolean

- 默认值：true (生产版为 false)

- 用法：
```js
// 务必在加载 Vue 之后，立即同步设置以下内容
Vue.config.devtools = true
```
配置是否允许 [vue-devtools](https://github.com/vuejs/devtools) 检查代码。开发版本默认为 `true`，生产版本默认为 `false`。生产版本设为 `true` 可以启用检查。

##### errorHandler

##### warnHandler


##### ignoredElements


##### keyCodes

##### performance


##### productionTip

### 全局 API

##### Vue.directive( id, [definition] )
- 参数：
    - `{string} id`
    - `{Function | Object} [definition]`
- 用法：

    注册或获取全局指令。
```js
// 注册
Vue.directive('my-directive', {
  bind: function () {},
  inserted: function () {},
  update: function () {},
  componentUpdated: function () {},
  unbind: function () {}
})

// 注册 (指令函数)
Vue.directive('my-directive', function () {
  // 这里将会被 `bind` 和 `update` 调用
})

// getter，返回已注册的指令
var myDirective = Vue.directive('my-directive')
```
- 参考：[自定义指令]()


##### Vue.use( plugin )
- 参数：
  - {Object | Function} plugin
- 用法：

  安装 Vue.js 插件。如果插件是一个对象，必须提供 install 方法。如果插件是一个函数，它会被作为 install 方法。install 方法调用时，会将 Vue 作为参数传入。

该方法需要在调用 new Vue() 之前被调用。

当 install 方法被同一个插件多次调用，插件将只会被安装一次。

参考：[插件]()

### 选项/数据


### 选项/DOM


### 选项/声明周期钩子


### 选项/资源


### 选项/组合


### 选项/其他


### 实例property


### 实例方法/数据


### 实例方法/事件


### 实例方法/声明周期


### 指令


### 特殊attribute


### 内置的组件


### VNode接口


### 服务端渲染