<template>
  <div class="menu">
    <template v-for="item in links" :key="item.path || item.name">
      <!-- 如果有children，则显示为可展开的菜单组 -->
      <div v-if="item.children && item.children.length > 0" class="menu-group">
        <div class="menu-title" @click="toggleMenu(item.name)">
          {{ item.name }}
          <span class="arrow" :class="{ expanded: expandedMenus.has(item.name) }">▼</span>
        </div>
        <div v-show="expandedMenus.has(item.name)" class="submenu">
          <div v-for="child in item.children" :key="child.path" class="submenu-item">
            <router-link :to="child.path!">{{ child.name }}</router-link>
          </div>
        </div>
      </div>
      
      <!-- 普通菜单项 -->
      <div v-else class="menu-item">
        <router-link :to="item.path!">{{ item.name }}</router-link>
      </div>
    </template>
  </div>
</template>

<script setup lang="ts">
import { ref, reactive } from 'vue';
import { links, type MenuItem } from "@/views/layout/data";

const expandedMenus = reactive(new Set<string>());

function toggleMenu(name: string) {
  if (expandedMenus.has(name)) {
    expandedMenus.delete(name);
  } else {
    expandedMenus.add(name);
  }
}
</script>

<style scoped>
.menu {
  width: 100%;
}

.menu-group {
  border-bottom: 1px solid #eee;
}

.menu-title {
  padding: 12px 16px;
  cursor: pointer;
  display: flex;
  justify-content: space-between;
  align-items: center;
  font-weight: 500;
}

.menu-title:hover {
  background-color: #f5f5f5;
}

.arrow {
  transition: transform 0.3s ease;
  font-size: 12px;
}

.arrow.expanded {
  transform: rotate(180deg);
}

.submenu {
  background-color: #fafafa;
}

.submenu-item {
  padding: 8px 16px 8px 32px;
  border-left: 2px solid #ddd;
}

.submenu-item:hover {
  background-color: #f0f0f0;
}

.menu-item {
  padding: 12px 16px;
  border-bottom: 1px solid #eee;
}

.menu-item:hover {
  background-color: #f5f5f5;
}

.router-link-active {
  color: #42b883;
  font-weight: bold;
}

a {
  text-decoration: none;
  color: #333;
  display: block;
  width: 100%;
}
</style>