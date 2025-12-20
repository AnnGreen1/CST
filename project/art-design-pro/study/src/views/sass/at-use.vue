<template>
<div class="scss-example">
  <h1>@use 示例</h1>

  <div class="note">
    <h3>SCSS @use 工作原理：</h3>
    <ul>
      <li><strong>@use 会自动导入所有 SCSS 成员</strong>（变量、mixins、函数）</li>
      <li><strong>:export 块是 Vite 特性</strong>，用于将 SCSS 变量暴露给 JavaScript</li>
      <li>通过命名空间访问导入的内容，避免命名冲突</li>
    </ul>
  </div>

  <div class="section">
    <h2>基础变量使用</h2>
    <p class="description">
      通过 @use 引入 SCSS 文件中的变量，避免命名冲突
    </p>
    <div class="color-boxes">
      <div class="color-box primary">主色</div>
      <div class="color-box secondary">辅色</div>
    </div>
  </div>

  <div class="section">
    <h2>Mixins 使用</h2>
    <p class="description">
      使用 @use 引入并使用 mixins 创建一致的 UI 组件
    </p>
    <button class="btn-primary">主要按钮</button>
    <button class="btn-secondary">次要按钮</button>
  </div>

  <div class="section">
    <h2>函数使用</h2>
    <p class="description">
      使用 @use 引入自定义函数进行单位计算
    </p>
    <div class="font-sizes">
      <div class="font-large">大号字体</div>
      <div class="font-medium">中号字体</div>
      <div class="font-small">小号字体</div>
    </div>
  </div>

  <div class="section">
    <h2>卡片样式</h2>
    <p class="description">
      使用共享的卡片样式 mixin
    </p>
    <div class="card">
      <h3>卡片标题</h3>
      <p>这是一个使用共享样式的卡片组件。</p>
    </div>
  </div>

  <div class="section">
    <h2>JavaScript 与 SCSS 交互</h2>
    <p class="description">
      通过 :export 暴露的变量可以在 JavaScript 中使用（这是 Vite 的 CSS Modules 特性）
    </p>
    <div class="js-interaction">
      <p>主色值: {{ primaryColor }}</p>
      <p>辅色值: {{ secondaryColor }}</p>
      <button @click="logColors">在控制台输出颜色值</button>
    </div>
  </div>
</div>
</template>

<script setup lang="ts">
import { ref, onMounted } from 'vue';

// 这些变量将在 onMounted 中设置
const primaryColor = ref('');
const secondaryColor = ref('');

// 从 SCSS 文件中获取通过 :export 导出的变量
let sassVars: any = null;

onMounted(async () => {
  // 这是 Vite 的 CSS Modules 特性，不是标准的 Sass 功能
  sassVars = await import('@/views/sass/at-use.scss');
  console.log('SCSS 变量:', sassVars);
  primaryColor.value = sassVars.default.primaryColor;
  secondaryColor.value = sassVars.default.secondaryColor;
});

function logColors() {
  console.log('SCSS 变量值:');
  console.log('主色:', primaryColor.value);
  console.log('辅色:', secondaryColor.value);
}
</script>

<style scoped lang="scss">
@use 'at-use' as styles;

.scss-example {
  padding: 20px;
  max-width: 800px;
  margin: 0 auto;
}

.note {
  background: #e8f4fc;
  border-left: 4px solid styles.$primary-color;
  padding: 15px;
  margin-bottom: 20px;

  ul {
    margin: 10px 0;
    padding-left: 20px;
  }

  li {
    margin-bottom: 8px;
  }
}

.section {
  margin-bottom: 30px;
}

.description {
  color: #666;
  font-size: styles.$font-size-small;
  margin-bottom: 15px;
}

.color-boxes {
  display: flex;
  gap: 20px;
  margin-bottom: 20px;
}

.color-box {
  width: 100px;
  height: 100px;
  display: flex;
  align-items: center;
  justify-content: center;
  color: white;
  font-weight: bold;

  &.primary {
    background-color: styles.$primary-color;
  }

  &.secondary {
    background-color: styles.$secondary-color;
  }
}

.btn-primary {
  @include styles.button-style(styles.$primary-color);
  margin-right: 10px;
}

.btn-secondary {
  @include styles.button-style(styles.$secondary-color);
}

.font-sizes {
  div {
    margin-bottom: 10px;
  }

  .font-large {
    font-size: styles.calculate-rem(24px);
  }

  .font-medium {
    font-size: styles.calculate-rem(18px);
  }

  .font-small {
    font-size: styles.calculate-rem(14px);
  }
}

.card {
  @include styles.card-style;

  h3 {
    margin-top: 0;
    color: styles.$primary-color;
  }
}

.js-interaction {
  padding: 15px;
  border: 1px solid #ddd;
  border-radius: 4px;
  background-color: #f9f9f9;

  button {
    @include styles.button-style(#666, white);
    margin-top: 10px;
  }
}
</style>