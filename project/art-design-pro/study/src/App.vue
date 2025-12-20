<script setup lang="ts">
import { ref } from 'vue';
const elSize = ref('large');
</script>

<template><el-config-provider :size="elSize">
  <router-view></router-view>
</el-config-provider></template>

<style scoped></style>
