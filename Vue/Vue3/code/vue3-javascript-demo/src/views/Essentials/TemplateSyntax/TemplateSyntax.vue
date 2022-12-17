<template>
    <div>
        <div class="demo-item">
            文本插值，“Mustache”语法 (即双大括号){{ Essentials }}
        </div>
        <div class="demo-item">
            原始 HTML， 使用<span v-html="rawHtml"></span>指令 
        </div>
        <div class="demo-item">
            Attribute 绑定，使用<button :disabled="isButtonDisabled">v-bind</button>
        </div>
    </div>
</template>

<script setup>
import { ref } from 'vue'
const Essentials = ref('即双大括号')
const rawHtml = "<span style='color:pink;'>v-html</span>"
const isButtonDisabled = ref(true)
</script>