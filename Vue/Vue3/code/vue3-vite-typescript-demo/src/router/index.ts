import { createRouter, createWebHistory,createWebHashHistory, RouteRecordRaw } from "vue-router";

import commonRoute from "./routes/commonroute";
import typescriptaxios from "./routes/typescriptaxios";
import typescript from "./routes/TypeScript";

const router = createRouter({
     // createWebHashHistory:hash模式; createWebHistory:历史模式; createMemoryHistory:ssr
  history: createWebHashHistory(),
  routes: [ 
    ...commonRoute,
    ...typescriptaxios,
    ...typescript
  ] as unknown as RouteRecordRaw[]
});
export default router