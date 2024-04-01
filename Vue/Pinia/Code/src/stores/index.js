import { defineStore } from "pinia";

export const useOptionCounterStore = defineStore("optioncounter", {
  state: () => ({ count: 1 }),
  getters: {
    double: (state) => state.count * 2,
  },
  actions: {
    increment() {
      this.count++;
    },
  },
});

export const useSetupCounterStore = defineStore("setupcounter", () => {
  const count = ref(0);
  const doubleCount = computed(() => count.value * 2);
  function increment() {
    count.value++;
  }

  return { count, doubleCount, increment };
});
