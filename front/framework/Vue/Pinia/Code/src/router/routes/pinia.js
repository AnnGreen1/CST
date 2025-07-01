const pinia = [
    {
        path: "/pinia/options",
        name: "pinia-options",
        component: () => import("@/views/Pinia/OptionsView.vue"),
    },
    {
        path: "/pinia/composition",
        name: "pinia-composition",
        component: () => import("@/views/Pinia/CompositionView.vue"),
    },
];
export default pinia;
