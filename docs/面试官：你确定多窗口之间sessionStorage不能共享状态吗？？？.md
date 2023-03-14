# 面试官：你确定多窗口之间sessionStorage不能共享状态吗？？？🤔

[juejin.cn](https://juejin.cn/post/7076767687828832286)不要秃头啊

#### 一、背景

> 面试官：说一说`localStorage`和`sessionStorage`区别呗？😊

我：巴拉巴拉。。。（这不是小case嘛，面经都背烂了）

> 面试官：那同域下多窗口间`localStorage`能共享吗？😯

我：可以呀，如果页面中出现了串数据的话，很大概率就是localStorage共享导致的呢。

> 面试官：`localStorage`既然可以，那`sessionStorage`在多窗口之间能共享状态吗？😎

我：当然不行，每一个窗口之间sessionStorage都是独立的，相互不影响，窗口关闭浏览器就自动销毁了！（斩钉截铁，认真脸）

> 面试官：你确定多窗口之间`sessionStorage`不能共享状态吗？？？🤔

我：这个。。。。不太确定。。。。待我去查查资料再来。。。😭

* * *

由此引出我们今天的主题：`sessionStorage`在同域下的多窗口之间能共享状态吗？

#### 二、查阅文档

根据MDN的说法：

`sessionStorage` 属性允许你访问一个，对应当前源的 session [`Storage`](https://link.juejin.cn/?target=https%3A%2F%2Fdeveloper.mozilla.org%2Fzh-CN%2Fdocs%2FWeb%2FAPI%2FStorage "https://developer.mozilla.org/zh-CN/docs/Web/API/Storage") 对象。它与 [`localStorage`](https://link.juejin.cn/?target=https%3A%2F%2Fdeveloper.mozilla.org%2Fzh-CN%2Fdocs%2FWeb%2FAPI%2FWindow%2FlocalStorage "https://developer.mozilla.org/zh-CN/docs/Web/API/Window/localStorage") 相似，不同之处在于 `localStorage` 里面存储的数据没有过期时间设置，而存储在 `sessionStorage` 里面的数据在页面会话结束时会被清除。

1.  页面会话在浏览器打开期间一直保持，并且重新加载或恢复页面仍会保持原来的页面会话。
2.  **在新标签或窗口打开一个页面时会复制顶级浏览会话的上下文作为新会话的上下文，** 这点和 session cookies 的运行方式不同。
3.  打开多个相同的 URL 的 Tabs 页面，会创建各自的 `sessionStorage`。
4.  关闭对应浏览器标签或窗口，会清除对应的 `sessionStorage`。

对于上面的说法，第134点相信都是符合大家认知的，那第二点是啥意思呢？

笔者为了搞懂第二点，接着继续查阅文档。。。

经过一系列的学习 (百度) 之后，笔者发现如果从本页面以新开页签的方式打开一个同域下的新页面，新开的页面会和之前的页面 `‘共享’ sessionStorage`。

举个实际一点的例子：现有页面A，在页面A中执行

    window.sessionStorage.setItem("pageA_1","123")
    复制代码

在页面中有个button按钮，点击按钮触发 `window.open("同源页面")`，现得到新开的页面B，在B中执行

    window.sessionStorage.getItem("pageA_1") //拿到的结果是 "123"
    复制代码

这里的B页面居然是能拿到值的！！！！

现在我终于能对面试官说：多窗口之间`sessionStorage`真的可以共享状态！！

> 此时面试官：再给你一次机会，好好组织一下语言🤔️

#### 三、真的是这样吗？

哎，等等，如果真的能共享数据，那 sessionStorage 不是也会出现串数据的情况吗，我怎么记得平时并不会。。。

接下来我们继续测试，在页面A中继续执行

    window.sessionStorage.setItem("pageA_1","456") (之前的pageA_1设置的值是 ‘123’ )
    window.sessionStorage.setItem("pageA_2","789")
    复制代码

在页面B中再次尝试获取：

    window.sessionStorage.getItem("pageA_1") //拿到的结果还是 "123" !!!
    window.sessionStorage.getItem("pageA_2") //拿到的结果是 null !!!
    复制代码

what??? 怎么回事？怎么现在又不‘共享’了呢？

我们现在再次回去理解一下MDN的说法：**在该标签或窗口打开一个新页面时会复制顶级浏览会话的上下文作为新会话的上下文**

哦～ 原来如此～ 原来只有在本页面中以新页签或窗口打开的同源页面会`‘临时共享’`之前页面的sessionStorage。

而且共享这个词似乎也并不怎么准确，准确来说应该叫`复制`更加专业！

现在我终于能再次对面试官说：`多窗口之间sessionStorage不可以共享状态！！！但是在某些特定场景下新开的页面会复制之前页面的sessionStorage！！`

> 此时面试官：嗯～小伙子看来理解的还不错嘛

#### 四、总结

其实不仅`window.open("同源页面")`这种方式新开的页面会复制之前的sessionStorage，通过`a标签`新开的页面同样也会，原理相同，在这就不赘述了。

#### 五、其他

这里可能有部分同学要问了：如果我就是不想要这种`复制`的效果怎么办呢？

这里笔者认为优雅一点的方式是先新建一个空白页面窗口，再将url设置到窗口中的地址栏中去。

最后，希望这篇文章能够帮助到你😁，如果文章中出现有纰漏的地方希望大家积极指正～。

[查看原网页: juejin.cn](https://juejin.cn/post/7076767687828832286)