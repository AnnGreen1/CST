<template>
<div class="container">
    <div class="box" v-for="item in list">{{ item }}</div>
</div>
</template>

<script setup lang="ts">
import { ref } from 'vue'
const list = ref([1, 2, 3, 4, 5, 6, 7, 8, 9, 10])
</script>

<style lang="scss" scoped>
.container {

    .box {
        width: 100px;
        height: 100px;
        /*
         * 不在此处设置背景色，避免覆盖后面的媒体查询
         * 所有背景色都在媒体查询中定义
         */
        margin: 10px;
    }
}

// 媒体查询-设备尺寸
// 超大屏幕（台式机、大型显示器等）
$device-desktop: 1600px;
// notebook
$device-notebook: 1400px;
// ipad pro
$device-ipad-pro: 1180px;
// ipad
$device-ipad: 800px;
// mobile
$device-phone: 500px;

/* 
 * 媒体查询按照从大到小的顺序设置背景色
 * 这样可以确保在不同屏幕尺寸下显示正确的背景色
 */

/* 超大屏幕设备 */
@media only screen and (min-width: $device-desktop) {

    /* 屏幕宽度 ≥ 1600px 时生效 */
    .box {
        background: pink;

        &::after {
            content: '超大屏幕设备';
        }
    }
}

/* notebook 尺寸 */
@media only screen and (max-width: $device-desktop) and (min-width: $device-notebook) {

    /* 1400px ≤ 屏幕宽度 < 1600px 时生效 */
    .box {
        background: hotpink;

        &::after {
            content: 'notebook 尺寸';
        }
    }
}

/* iPad Pro 尺寸 */
@media only screen and (max-width: $device-notebook) and (min-width: $device-ipad-pro) {

    /* 1180px ≤ 屏幕宽度 < 1400px 时生效 */
    .box {
        background: bisque;

        &::after {
            content: 'iPad Pro 尺寸';
        }
    }
}

/* iPad 尺寸 */
@media only screen and (max-width: $device-ipad-pro) and (min-width: $device-ipad) {

    /* 800px ≤ 屏幕宽度 < 1180px 时生效 */
    .box {
        background: lightblue;

        &::after {
            content: 'iPad 尺寸';
        }
    }
}

/* 手机尺寸 */
@media only screen and (max-width: $device-ipad) {

    /* 屏幕宽度 < 800px 时生效 */
    .box {
        background: honeydew;

        &::after {
            content: '手机尺寸';
        }
    }
}
</style>