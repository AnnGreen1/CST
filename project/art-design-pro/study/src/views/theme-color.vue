<template>
  <div class="theme-color">
    <h1>主题色计算</h1>

    <el-color-picker
      v-model="primaryColor"
      @change="handlePrimaryColorChange"
    />

    <div
      class="square"
      v-for="item in darkColor"
      :key="item"
      :style="{ background: item }"
    ></div>
    <div
      class="square"
      v-for="item in lightColor"
      :key="item"
      :style="{ background: item }"
    ></div>
  </div>
</template>

<script setup lang="ts">
import { ref } from "vue";
const primaryColor = ref("#409eff");
const darkColor = ref([]);
const lightColor = ref([]);

/**
 * hex颜色转rgb颜色
 * @param str 颜色值字符串
 * @returns 返回处理后的颜色值
 */
function hexToRgb(str: any) {
  let hexs: any = "";
  const reg = /^#?[0-9A-Fa-f]{6}$/;
  if (!reg.test(str)) return ElMessage.warning("输入错误的hex");
  str = str.replace("#", "");

  hexs = str.match(/../g);

  for (let i = 0; i < 3; i++) hexs[i] = parseInt(hexs[i], 16);
  return hexs;
}
/**
 * rgb颜色转Hex颜色
 * @param r 代表红色
 * @param g 代表绿色
 * @param b 代表蓝色
 * @returns 返回处理后的颜色值
 */
function rgbToHex(r: any, g: any, b: any) {
  const reg = /^\d{1,3}$/;
  if (!reg.test(r) || !reg.test(g) || !reg.test(b))
    return ElMessage.warning("输入错误的rgb颜色值");
  const hexs = [r.toString(16), g.toString(16), b.toString(16)];

  for (let i = 0; i < 3; i++) if (hexs[i].length == 1) hexs[i] = `0${hexs[i]}`;

  return `#${hexs.join("")}`;
}
/**
 * 加深颜色值
 * @param color 颜色值字符串
 * @param level 加深的程度，限0-1之间
 * @returns 返回处理后的颜色值
 */
function getDarkColor(color: string, level: number) {
  const reg = /^#?[0-9A-Fa-f]{6}$/;
  if (!reg.test(color)) return console.warn("输入错误的hex颜色值");
  const rgb = hexToRgb(color);
  for (let i = 0; i < 3; i++)
    rgb[i] = Math.round(20.5 * level + rgb[i] * (1 - level));
  return rgbToHex(rgb[0], rgb[1], rgb[2]);
}

/**
 * 变浅颜色值
 * @param color 颜色值字符串
 * @param level 加深的程度，限0-1之间
 * @returns 返回处理后的颜色值
 */
function getLightColor(color: string, level: number) {
  const reg = /^#?[0-9A-Fa-f]{6}$/;
  if (!reg.test(color)) return console.warn("输入错误的hex颜色值");
  const rgb = hexToRgb(color);

  for (let i = 0; i < 3; i++) {
    rgb[i] = Math.round(255 * level + rgb[i] * (1 - level));
  }
  return rgbToHex(rgb[0], rgb[1], rgb[2]);
}

const handlePrimaryColorChange = (color: string) => {
 

  darkColor.value = [];
  lightColor.value = [];
  for (let i = 1; i <= 9; i++) {
    darkColor.value.push(getDarkColor(color, i / 10));
    lightColor.value.push(getLightColor(color, i / 10));
  }
};
</script>

<style lang="scss" scoped>
.theme-color {
  padding: 20px;
  max-width: 800px;
  margin: 0 auto;
}

.square {
  width: 100px;
  height: 100px;
}
</style>
