1. wxml、wxss、js、json

2.

```js
wx.request({
  url: "https://way.jd.com/jisuapi/get",
  data: {
    channel: this.data.current_item,
    num: this.data.requestPara.num,
    start: this.data.requestPara.start,
    appkey: this.data.requestPara.appkey,
  },
  dataType: "json",
  success: (res) => {
    console.log(res.data.result.result.list);
    this.setData({
      newsList: [...this.data.newsList, ...res.data.result.result.list],
    });
  },
});
```

3. `this.setData({xxxx:xxxx})`

4.

```js
/**
   * 生命周期函数--监听页面加载
   */
  onLoad: function (options) {

  },

  /**
   * 生命周期函数--监听页面初次渲染完成
   */
  onReady: function () {

  },

  /**
   * 生命周期函数--监听页面显示
   */
  onShow: function () {

  },

  /**
   * 生命周期函数--监听页面隐藏
   */
  onHide: function () {

  },

  /**
   * 生命周期函数--监听页面卸载
   */
  onUnload: function () {

  },

  /**
   * 页面相关事件处理函数--监听用户下拉动作
   */
  onPullDownRefresh: function () {

  },

  /**
   * 页面上拉触底事件的处理函数
   */
  onReachBottom: function () {

  },

  /**
   * 用户点击右上角分享
   */
  onShareAppMessage: function () {

  }
```
4. 属性用`{{}}`语法，
5、是单向绑定的