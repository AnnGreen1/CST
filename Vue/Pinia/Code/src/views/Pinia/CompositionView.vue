<template>
  <div>optionsCounterStore.count{{ optionsCounterStore.count }}</div>
  <div>optionsCounterStore.double{{ optionsCounterStore.doubleCount }}</div>
  <div>
    <button @click="incrementStateFun">直接修改store state</button>
    <button @click="incrementActionFun">通过action改变store state</button>
    <button @click="resetStore">store.$reset()重置store state</button>
    <button @click="changeStoreStateByPatch">通过$patch修改state</button>
    <button @click="go">go /pinia/options</button>
  </div>
</template>

<script>
// export default {
//   /** 如何在路由钩子中获取 pinia 数据 */
//   beforeRouteEnter(to, from) {
//     console.log("before router enter", to, from);
//   },
// };
</script>

<script setup>
import { onBeforeUnmount, ref, watch } from "vue";
import { useRouter } from "vue-router";

import { useOptionsCounterStore } from "@/stores/pinia";

const router = useRouter();
const optionsCounterStore = useOptionsCounterStore();

console.log(optionsCounterStore.count);

function incrementStateFun() {
  optionsCounterStore.count++;
}
function incrementActionFun() {
  optionsCounterStore.increment();
}

function resetStore() {
  optionsCounterStore.$reset();
}

function changeStoreStateByPatch() {
  optionsCounterStore.$patch({
    count: 666,
  });
}

watch(
  () => optionsCounterStore.count,
  (newValue, oldValue) => {
    console.log("单文件组件中侦听到store.count改变", newValue, oldValue);
  }
);

// 订阅 state
optionsCounterStore.$subscribe((mutation, state) => {
  console.log("store.$subscribe订阅到store的改变", mutation, state);
});

// 订阅 action
const unsubscribe = optionsCounterStore.$onAction(
  ({
    name, // action 名称
    store, // store 实例，类似 `someStore`
    args, // 传递给 action 的参数数组
    after, // 在 action 返回或解决后的钩子
    onError, // action 抛出或拒绝的钩子
  }) => {
    // 为这个特定的 action 调用提供一个共享变量
    const startTime = Date.now()
    // 这将在执行 "store "的 action 之前触发。
    console.log(`Start "${name}" with params [${args.join(', ')}].`)

    // 这将在 action 成功并完全运行后触发。
    // 它等待着任何返回的 promise
    after((result) => {
      console.log(
        `Finished "${name}" after ${Date.now() - startTime
        }ms.\nResult: ${result}.`
      )
    })

    // 如果 action 抛出或返回一个拒绝的 promise，这将触发
    onError((error) => {
      console.warn(
        `Failed "${name}" after ${Date.now() - startTime}ms.\nError: ${error}.`
      )
    })
  }
)

onBeforeUnmount(() => {
  // 手动删除监听器
  unsubscribe()
})

function go() {
  router.push({
    path: "/pinia/options",
  });
}
</script>

<style lang="scss" scoped></style>
