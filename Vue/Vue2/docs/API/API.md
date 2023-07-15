# API
### 全局配置
Vue.config 是一个对象，包含 Vue 的全局配置。可以在启动应用之前修改下列 property：

##### silent
类型：boolean

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
