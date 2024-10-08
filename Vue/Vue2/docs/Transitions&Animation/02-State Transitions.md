# 状态过渡

Vue 的过渡系统提供了非常多简单的方法设置进入、离开和列表的动效。那么对于数据元素本身的动效呢，比如：

* 数字和运算
* 颜色的显示
* SVG 节点的位置
* 元素的大小和其他的 property

这些数据要么本身就以数值形式存储，要么可以转换为数值。有了这些数值后，我们就可以结合 Vue 的响应式和组件系统，使用第三方库来实现切换元素的过渡状态。

### 状态动画与侦听器

通过侦听器我们能监听到任何数值 property 的数值更新。可能听起来很抽象，所以让我们先来看看使用 [GreenSock](https://greensock.com/) 一个例子：

```html
<script src="https://cdnjs.cloudflare.com/ajax/libs/gsap/3.2.4/gsap.min.js"></script>

<div id="animated-number-demo">
    <input v-model.number="number" type="number" step="20">
    <p>{{ animatedNumber }}</p>
</div>
```

```js
new Vue({
    el: '#animated-number-demo',
    data: {
        number: 0,
        tweenedNumber: 0
    },
    computed: {
        animatedNumber: function() {
            return this.tweenedNumber.toFixed(0);
        }
    },
    watch: {
        number: function(newValue) {
            gsap.to(this.$data, {
                duration: 0.5,
                tweenedNumber: newValue
            });
        }
    }
})
```

当你把数值更新时，就会触发动画。这个是一个不错的演示，但是对于不能直接像数字一样存储的值，比如 CSS 中的 color 的值，通过下面的例子我们来通过 [Tween.js](https://github.com/tweenjs/tween.js) 和 [Color.js](https://github.com/brehaut/color-js) 实现一个例子：

```html
<script src="https://cdn.jsdelivr.net/npm/tween.js@16.3.4"></script>
<script src="https://cdn.jsdelivr.net/npm/color-js@1.0.3"></script>

<div id="example-7">
    <input v-model="colorQuery" v-on:keyup.enter="updateColor" placeholder="Enter a color">
    <button v-on:click="updateColor">Update</button>
    <p>Preview:</p>
    <span v-bind:style="{ backgroundColor: tweenedCSSColor }" class="example-7-color-preview"></span>
    <p>{{ tweenedCSSColor }}</p>
</div>
```

```js
var Color = net.brehaut.Color

new Vue({
    el: '#example-7',
    data: {
        colorQuery: '',
        color: {
            red: 0,
            green: 0,
            blue: 0,
            alpha: 1
        },
        tweenedColor: {}
    },
    created: function() {
        this.tweenedColor = Object.assign({}, this.color)
    },
    watch: {
        color: function() {
            function animate() {
                if (TWEEN.update()) {
                    requestAnimationFrame(animate)
                }
            }

            new TWEEN.Tween(this.tweenedColor)
                .to(this.color, 750)
                .start()

            animate()
        }
    },
    computed: {
        tweenedCSSColor: function() {
            return new Color({
                red: this.tweenedColor.red,
                green: this.tweenedColor.green,
                blue: this.tweenedColor.blue,
                alpha: this.tweenedColor.alpha
            }).toCSS()
        }
    },
    methods: {
        updateColor: function() {
            this.color = new Color(this.colorQuery).toRGB()
            this.colorQuery = ''
        }
    }
})
```

```css
.example-7-color-preview {
    display: inline-block;
    width: 50px;
    height: 50px;
}
```

### 动态状态过渡
就像 Vue 的过渡组件一样，数据背后状态过渡会实时更新，这对于原型设计十分有用。当你修改一些变量，即使是一个简单的 SVG 多边形也可实现很多难以想象的效果。

上述 demo 背后的代码可以通过[这个示例](https://codesandbox.io/s/github/vuejs/v2.vuejs.org/tree/master/src/v2/examples/vue-20-dynamic-state-transitions)进行详阅。

### 把过渡放到组件里
管理太多的状态过渡会很快的增加 Vue 实例或者组件的复杂性，幸好很多的动画可以提取到专用的子组件。我们来将之前的示例改写一下：
```html
<script src="https://cdn.jsdelivr.net/npm/tween.js@16.3.4"></script>

<div id="example-8">
  <input v-model.number="firstNumber" type="number" step="20"> +
  <input v-model.number="secondNumber" type="number" step="20"> =
  {{ result }}
  <p>

    <animated-integer v-bind:value="firstNumber"></animated-integer> +
    <animated-integer v-bind:value="secondNumber"></animated-integer> =
    <animated-integer v-bind:value="result"></animated-integer>

  </p>
</div>
```
```js
// 这种复杂的补间动画逻辑可以被复用
// 任何整数都可以执行动画
// 组件化使我们的界面十分清晰
// 可以支持更多更复杂的动态过渡
// 策略。
Vue.component('animated-integer', {
  template: '<span>{{ tweeningValue }}</span>', 
  props: {

    value: {
      type: Number,
      required: true
    }

  }, 
  data: function () {

    return {
      tweeningValue: 0
    }

  }, 
  watch: {

    value: function (newValue, oldValue) {
      this.tween(oldValue, newValue)
    }

  }, 
  mounted: function () {

    this.tween(0, this.value)

  }, 
  methods: {

    tween: function (startValue, endValue) {
      var vm = this
      function animate () {
        if (TWEEN.update()) {
          requestAnimationFrame(animate)
        }
      }

      new TWEEN.Tween({ tweeningValue: startValue })
        .to({ tweeningValue: endValue }, 500)
        .onUpdate(function () {
          vm.tweeningValue = this.tweeningValue.toFixed(0)
        })
        .start()

      animate()
    }

  }
})

// 所有的复杂度都已经从 Vue 的主实例中移除！
new Vue({
  el: '#example-8', 
  data: {

    firstNumber: 20,
    secondNumber: 40

  }, 
  computed: {

    result: function () {
      return this.firstNumber + this.secondNumber
    }

  }
})
```

我们能在组件中结合使用这一节讲到各种过渡策略和 Vue 内建的过渡系统。总之，对于完成各种过渡动效几乎没有阻碍。

### 赋予设计以生命
只要一个动画，就可以带来生命。不幸的是，当设计师创建图标、logo 和吉祥物的时候，他们交付的通常都是图片或静态的 SVG。所以，虽然 GitHub 的章鱼猫、Twitter 的小鸟以及其它许多 logo 类似于生灵，它们看上去实际上并不是活着的。

Vue 可以帮到你。因为 SVG 的本质是数据，我们只需要这些动物兴奋、思考或警戒的样例。然后 Vue 就可以辅助完成这几种状态之间的过渡动画，来制作你的欢迎页面、加载指示、以及更加带有情感的提示。

Sarah Drasner 展示了下面这个 demo，这个 demo 结合了时间和交互相关的状态改变：

查看 CodePen 上 Sarah Drasner (@sdras) 的例子 Vue-controlled Wall-E.
