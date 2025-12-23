<template>
  <div>
    <div :style="{ color, fontSize}">样式绑定</div>
  </div>
</template>

<script setup lang="ts">
import { computed } from "vue";

const color = computed(() => {
  return "pink";
});

const fontSize = computed(() => {
  return "50px";
});
</script>