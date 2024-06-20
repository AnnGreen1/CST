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
</template>

<script setup>
import { useSetupCounterStore } from '@/stores/index'
const store = useSetupCounterStore()
console.log(store.count);
console.log(store.double);
function incrementFun(){
    store.increment()
}
</script>

<style lang="scss" scoped></style>