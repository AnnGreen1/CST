<template>
  <div>store.count:{{ count }}</div>
  <div>store.count的别名:{{ myOwnName }}</div>
  <!-- <div>store.countGetter{{ store.countGetter }}</div>
  -->
  <div>
    <button @click="changeStoreState">
      尝试一下能否像组合式一样直接修改state
    </button>
    <button @click="incrementActionFun">
      通过action改变store state
    </button>

    <button @click="go">go /pinia/composition</button>
  </div>
</template>

<script>
import { mapActions, mapState, mapWritableState } from "pinia";
import { useOptionsCounterStore } from "@/stores/pinia";
export default {
  data() {
    return {};
  },
  computed: {
    // 可以访问组件中的 this.count
    // 与从 store.count 中读取的数据相同
    ...mapState(useOptionsCounterStore, ["count"]),
    // 与上述相同，但将其注册为 this.myOwnName
    ...mapState(useOptionsCounterStore, {
      myOwnName: "count",
      // 你也可以写一个函数来获得对 store 的访问权
      double: (store) => store.count * 2,
      // 它可以访问 `this`，但它没有标注类型...
      magicValue(store) {
        return this.count + 9;
      },
    }),

  },
  methods: {
    changeStoreState() {
      this.count = 666;
      console.log(
        "不可以直接修改state，因为这里的count只是一个辅助函数映射的计算属性"
      );
    },
    ...mapActions(useOptionsCounterStore, ['increment']),
    incrementActionFun() {
      this.increment()
    }
  },
  mounted() {
    console.log(this.count);
    console.log(this.myOwnName);
    console.log(this.double);
    console.log(this.magicValue);

  },
};
</script>

<style lang="scss" scoped></style>
