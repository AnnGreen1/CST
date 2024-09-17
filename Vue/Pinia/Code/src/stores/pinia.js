import { defineStore } from "pinia";
import { ref, computed } from "vue";

export const useOptionsCounterStore = defineStore("optionsCounter", {
    persist: {
        enabled: false, // 这个配置代表存储生效，而且是整个store都存储
    },
    state: () => {
        return {
            count: 1,
        }
    },
    getters: {
        doubleCount: (state) => state.count * 2,
    },
    actions: {
        increment() {
            this.count++;
            return 'result'
        },
    },
});

export const useCompositionCounterStore = defineStore("compositionCounter", () => {
    const count = ref(0);
    const doubleCount = computed(() => count.value * 2);
    function increment() {
        count.value++;
    }

    return { count, doubleCount, increment };
});
