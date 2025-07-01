<template>
  <div>about view</div>
  <div>{{ store.count }}</div>
  <button @click="increment">count++</button>
</template>

<script>
import { useOptionCounterStore } from "@/stores/index";
export default {
  setup() {
    const store = useOptionCounterStore(); // 在setup中获取store

    return {
      store,
    };
  },
  computed: {
    // ...mapGetters(["countGetter"]),
  },
  methods: {
    increment() {
      this.store.increment();
      console.log(this.store);
    },
  },
};
</script>

<script setup></script>

<style lang="scss" scoped></style>
