<template>
<div class="layout">
    <div class="sidebar">
        <sidebar></sidebar>
    </div>
    <div class="main">
        <router-view></router-view>
    </div>
</div>
</template>

<script setup lang="ts">
import sidebar from './sidebar.vue';
import main from './main.vue';
</script>

<style scoped>
.layout {
    height: 100%;
    margin: 0;
    padding: 0;
    display: flex;
}

.sidebar {
    height: 100%;
    flex-grow: 0;
    /** 不扩展 */
    flex-shrink: 0;
    /** 不收缩 */
    width: var(--sidebar-width);
    background: rgb(246, 246, 247);
}

.main {
    height: 100%;
    flex: 1;
    background: #ffffff;
    overflow-y: auto;
}
</style>