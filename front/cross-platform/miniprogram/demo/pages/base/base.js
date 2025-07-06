Component({
  data: {
    count: 0,
    latitude: '',
    longitude: ''
  },
  methods: {
    changeCount(event) {
      console.log(event)
      const res = this.data.count + 1
      this.setData({
        count: res
      })
    },
    markertap() {
      console.log('markertap...')
    },
    getLocation() {
      wx.getLocation({
        type: 'wgs84',
        success: (res) => {
          console.log(res)
          this.latitude = res.latitude
          this.longitude = res.longitude
        }
      })
    },
    wxNavgiateTo() {
      wx.navigateTo({
        url: '/pages/test/test',
      })
    }
  },
  onLoad() {
    console.log('onload')

    wx.getUserProfile({
      desc: '展示用户信息', // 声明获取用户个人信息后的用途，后续会展示在弹窗中，请谨慎填写
      success: (res) => {
        console.log(res)
      }
    })

    this.getLocation()
  }
})