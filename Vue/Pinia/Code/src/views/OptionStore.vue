<template>
    <div>
        store.count{{ store.count }}
    </div>
    <div>
        store.double{{ store.double }}
    </div>
    <div>
        <button @click="incrementFun">increment</button>
    </div>
    <div>
        store count{{ count }}
    </div>
    <div>
        store doubleCount{{ double }}
    </div>
    <div>
        <button @click="increment">store increment</button>
    </div>
</template>

<script setup>
import { storeToRefs } from "pinia"

import { useOptionCounterStore } from '@/stores/index'
const store = useOptionCounterStore()
console.log(store.count);
console.log(store.double);
function incrementFun() {
    store.increment()
}

const { count, double } = storeToRefs(store)
// 作为 action 的 increment 可以直接解构
const { increment } = store
</script>

<style lang="scss" scoped></style>