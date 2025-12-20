<template>
  <div class="svg-icon-example">
    <h1>SVG 图标使用示例</h1>
    
    <!-- 隐藏的 SVG Symbols 定义区 -->
    <svg xmlns="http://www.w3.org/2000/svg" style="display: none;">
      <symbol id="vue-icon" viewBox="0 0 256 198">
        <path fill="#41B883" d="M204.8 0H256L128 220.8L0 0h97.92L128 51.2L157.44 0h47.36Z"></path>
        <path fill="#41B883" d="m0 0l128 220.8L256 0h-51.2L128 132.48L50.56 0H0Z"></path>
        <path fill="#35495E" d="M50.56 0L128 133.12L204.8 0h-47.36L128 51.2L97.92 0H50.56Z"></path>
      </symbol>
      
      <symbol id="heart-icon" viewBox="0 0 24 24">
        <path d="M12 21.35l-1.45-1.32C5.4 15.36 2 12.28 2 8.5 2 5.42 4.42 3 7.5 3c1.74 0 3.41.81 4.5 2.09C13.09 3.81 14.76 3 16.5 3 19.58 3 22 5.42 22 8.5c0 3.78-3.4 6.86-8.55 11.54L12 21.35z"/>
      </symbol>
    </svg>
    
    <!-- 其他示例保持不变 -->
    <div class="section">
      <h2>1. 直接内联 SVG 代码</h2>
      <p>将 SVG 内容直接写在模板中</p>
      <div>
        <svg
          xmlns="http://www.w3.org/2000/svg"
          height="24"
          viewBox="0 0 24 24"
          width="24"
        >
          <path d="M0 0h24v24H0V0z" fill="none" />
          <path
            d="M18 20H4V6h9V4H4c-1.1 0-2 .9-2 2v14c0 1.1.9 2 2 2h14c1.1 0 2-.9 2-2v-9h-2v9zm-7.79-3.17l-1.96-2.36L5.5 18h11l-3.54-4.71zM20 4V1h-2v3h-3c.01.01 0 2 0 2h3v2.99c.01.01 2 0 2 0V6h3V4h-3z"
          />
        </svg>
      </div>
    </div>
    
    <div class="section">
      <h2>2. 作为图片资源引用</h2>
      <p>使用 img 标签引用 SVG 文件</p>
      <img :src="vueSvgUrl" alt="Vue Logo" class="svg-image" />
    </div>
    
    <div class="section">
      <h2>3. 直接 import 导入（Vite 原生支持）</h2>
      <p>Vite 原生支持直接导入图片资源</p>
      <img :src="vueSvgImported" alt="Vue Logo Imported" class="svg-image" />
      <p class="note">如果显示正常，说明 Vite 的图片导入功能正常工作</p>
    </div>
    
    <div class="section">
      <h2>4. 动态导入测试</h2>
      <p>测试动态导入图片资源</p>
      <img :src="dynamicSvg" alt="Dynamic SVG" class="svg-image" v-if="dynamicSvg" />
      <button @click="loadDynamicSvg" v-else>加载动态 SVG</button>
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
    
    <div class="section">
      <h2>7. 正确使用 SVG Symbol 方式</h2>
      <p>通过 symbol 和 use 标签实现 SVG 复用</p>
      
      <!-- 使用 SVG Symbol -->
      <div class="icon-examples">
        <svg class="icon">
          <use href="#vue-icon"></use>
        </svg>
        <svg class="icon icon-green">
          <use href="#vue-icon"></use>
        </svg>
        <svg class="icon icon-large">
          <use href="#vue-icon"></use>
        </svg>
        <svg class="icon icon-heart">
          <use href="#heart-icon"></use>
        </svg>
      </div>
      
      <div class="note">
        <p><strong>说明：</strong>SVG Symbol 方式需要：</p>
        <ol>
          <li>先定义 &lt;symbol&gt; 元素（通常放在隐藏的 SVG 中）</li>
          <li>通过 &lt;use&gt; 标签引用 symbol 的 id（如 #vue-icon）</li>
          <li>这种方式支持样式继承和变换</li>
        </ol>
        <p><strong>关键点：</strong></p>
        <ul>
          <li><code>href="#vue-icon"</code> 中的 <code>#vue-icon</code> 是一个 ID 选择器</li>
          <li>必须存在对应 ID 的 &lt;symbol&gt; 元素才能正常显示</li>
          <li>如果引用的 ID 不存在，则不会显示任何内容</li>
        </ul>
      </div>
    </div>
  </div>
</template>

<script setup lang="ts">
import { ref, onMounted } from 'vue';
 
// 方法1: 作为图片资源引用 - 使用 URL API
const vueSvgUrl = new URL('@/assets/vue.svg', import.meta.url).href;

// 方法2: 直接 import 导入（Vite 原生支持）
import vueSvgImported from '@/assets/vue.svg'

// 方法3: 动态导入测试
const dynamicSvg = ref('');
const loadDynamicSvg = async () => {
  try {
    const svgModule = await import('@/assets/vue.svg');
    dynamicSvg.value = svgModule.default;
  } catch (error) {
    console.error('动态导入失败:', error);
    dynamicSvg.value = vueSvgUrl; // 失败时使用备用方案
  }
};

// 动态 SVG Icon 示例
const currentIcon = ref('vue');
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

.icon-examples {
  display: flex;
  gap: 20px;
  align-items: center;
  margin: 10px 0;
}

.icon {
  width: 40px;
  height: 40px;
  fill: #42b883;
}

.icon-green {
  fill: green;
}

.icon-large {
  width: 60px;
  height: 60px;
}

.icon-heart {
  fill: red;
}

.icon-demo {
  display: flex;
  flex-direction: column;
  gap: 15px;
  align-items: flex-start;
}

.large-icon {
  width: 100px;
  height: 100px;
  margin-top: 10px;
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

.note ol, .note ul {
  margin: 10px 0;
  padding-left: 20px;
}

.note li {
  margin-bottom: 5px;
}
</style>