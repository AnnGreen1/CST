# inner
1. 登录页验证码是怎么实现的？
登录页验证码就是一张图片，不过`src`的值是图片`base64`编码。首次进入页面调用验证码图片接口`captchaImage`，返回一个`base64`编码及一个`uuid`，点击登录时把`uuid`和所填写的验证码内容返送给后端，通过校验验证码和`uuid`是否匹配检验验证码是否正确。同时点击验证码再次调用接口`captchaImage`。
```
RuoYi-Vue/ruoyi-ui/src/views/login.vue  line 114-127
```

2. `!=`运算符是什么情况？感觉从来没用过？
```
RuoYi-Vue/ruoyi-ui/src/views/register.vue   line 80
```

3. 记住密码功不能明文保存密码，使用 jsencrypt 实现加密，加密后存储在 Cookie 里
```
RuoYi-Vue/ruoyi-ui/src/views/login.vue  line 152
RuoYi-Vue/ruoyi-ui/src/utils/jsencrypt.js   line 22
```

4. 还有mapState()辅助函数？获取状态根本不需要使用getter，之前使用getter和mapGetter()真是多次一举。

5. vuex分模块后可以用`this.$store.dispatch('app/closeSideBar')`这种写法？
vuex文档提到这个：https://v3.vuex.vuejs.org/zh/guide/modules.html#%E5%91%BD%E5%90%8D%E7%A9%BA%E9%97%B4
```
RuoYi-Vue/ruoyi-ui/src/store/modules/app.js line 56 - 62
RuoYi-Vue/ruoyi-ui/src/layout/index.vue   line 74
```

6. vue路由的路径为空字符串什么意义？这和 `/` 有什么区别？
`''` 是默认路由，`/` 是根路径
```
RuoYi-Vue/ruoyi-ui/src/router/index.js  line 68 - 85
```