<template>
  <div>
    <FancyButton>
      Click me!
      <!-- 插槽内容 -->
    </FancyButton>
  </div>
</template>

<script setup>
import { ref } from "vue";
import FancyButton from "@/views/ComponentsInDepth/Slots/components/FancyButton.vue";
</script>
