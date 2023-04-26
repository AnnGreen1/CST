import { createStore } from 'vuex'

// 创建一个新的 store 实例
const store = createStore({
  state () {
    return {
      count: 0
    }
  },
  mutations: {
    increment (state) {
      state.count++
    },
    incrementPayload (state, n) {
      state.count += n
    },
    incrementPayloadObject (state, obj) {
      state.count = (state.count + obj.plus - obj.minus)*obj.multiple/obj.division;
    }
  }
})

export default store;