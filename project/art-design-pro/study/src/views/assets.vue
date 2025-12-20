<template>
  <div class="svg-icon-example">
    <h1>vite 静态资源处理</h1>
    
    <div class="section">
      <h2>1. 作为图片资源引用</h2> 
      <img :src="vueSvgUrl" alt="Vue Logo" class="svg-image" />
    </div>
    
    <div class="section">
      <h2>3. 直接 import 导入（Vite 原生支持）</h2>
      <p>Vite 原生支持直接导入图片资源</p>
      <img :src="fullscreenImported" alt="Vue Logo Imported" class="svg-image" />
      <p class="note">如果显示正常，说明 Vite 的图片导入功能正常工作</p>
    </div>
    
    <div class="section">
      <h2>4. 动态导入测试</h2>
      <p>测试动态导入图片资源</p>
      <img :src="dynamicSvg" alt="Dynamic SVG" class="svg-image" v-if="dynamicSvg" />
      <button @click="loadDynamicSvg" v-else>加载动态</button>
    </div>
    
    <div class="section">
      <h2>5. Public 目录资源引用</h2>
      <p>将文件放在 public 目录下，使用根相对路径引用</p>
      <div class="note">
        <p><strong>说明：</strong>如果将 vue.svg 文件复制到 public 目录下，则可以使用以下方式引用：</p>
        <code>&lt;img src="/vue.svg" alt="Public Vue Logo" /&gt;</code>
        <p>但由于我们的文件在 src/assets 目录中，这种方式在此处不适用</p>
      </div>
    </div>
    
    <div class="section">
      <h2>6. 相对路径引用（Vite 同样支持）</h2>
      <p>Vite 和 webpack 一样支持相对路径引用</p>
      <img src="../assets/vue.svg" alt="Relative Path Vue Logo" class="svg-image" />
      <div class="note">
        <p><strong>说明：</strong>这种方式在 Vite 中是可以工作的，与 webpack 类似</p>
        <p>相对路径是相对于当前文件位置解析的</p>
      </div>
    </div>
  </div>
</template>

<script setup lang="ts">
import { ref, onMounted } from 'vue';

// 方法1: 作为图片资源引用 - 使用 URL API
const vueSvgUrl = new URL('@/assets/img/fullscreen.png', import.meta.url).href;

// 方法2: 直接 import 导入（Vite 原生支持）
import fullscreenImported from '@/assets/img/fullscreen.png'

// 方法3: 动态导入测试
const dynamicSvg = ref('');
const loadDynamicSvg = async () => {
  try {
    const svgModule = await import('@/assets/img/fullscreen.png');
    dynamicSvg.value = svgModule.default;
  } catch (error) {
    console.error('动态导入失败:', error);
    dynamicSvg.value = vueSvgUrl; // 失败时使用备用方案
  }
};
</script>

<style lang="scss" scoped>
.svg-icon-example {
  padding: 20px;
  max-width: 800px;
  margin: 0 auto;
}

.section {
  margin-bottom: 30px;
  padding: 20px;
  border: 1px solid #eee;
  border-radius: 8px;
}

.section h2 {
  margin-top: 0;
  color: #333;
}

.svg-image {
  width: 50px;
  height: 50px;
  display: block;
  margin: 10px 0;
}

.note {
  color: #4a5568;
  background-color: #f7fafc;
  padding: 10px;
  border-radius: 4px;
  font-size: 14px;
}

.note strong {
  color: #2d3748;
}

.note code {
  display: block;
  background-color: #edf2f7;
  padding: 5px;
  border-radius: 3px;
  margin: 5px 0;
  font-family: monospace;
}
</style>