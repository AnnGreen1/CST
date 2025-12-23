import { createRouter, createWebHistory, createWebHashHistory } from "vue-router";


const routes = [
    {
        path: "/",
        component: () => import("@/views/layout/index.vue"),
        redirect: "/index",
        children: [
            {
                path: "index",
                component: () => import("@/views/index.vue")
            },
            // element-plus
            {
                path: "element-plus/el-config-provider",
                component: () => import("@/views/element-plus/el-config-provider.vue")
            },
            {
                path: "element-plus/el-form",
                component: () => import("@/views/element-plus/el-form.vue")
            },
            // sass
            {
                path: "sass/at-use",
                component: () => import("@/views/sass/at-use.vue")
            },
            {
                path: "font-face",
                component: () => import("@/views/font-face.vue")
            },
            // vue
            {
                path: "vue/bind-style",
                component: () => import("@/views/vue/bind-style.vue")
            },
            {
                path: "media-variable",
                component: () => import("@/views/media-variable.vue")
            },
            {
                path: "svg-icon",
                component: () => import("@/views/svg-icon.vue")
            },
            {
                path: "assets",
                component: () => import("@/views/assets.vue")
            },
            {
                path: "theme-color",
                component: () => import("@/views/theme-color.vue")
            },
        ]
    },
];

const router = createRouter({
    // createWebHashHistory:hash模式; createWebHistory:历史模式; createMemoryHistory:ssr
    history: createWebHashHistory(),
    routes: routes
});
export default router