const vuex = [
  {
    path: "/vuex/vuexdemo",
    name: "vuex-vuexdemo",
    component: () => import("@/views/Vuex/VuexDemo.vue"),
  },
  /**
   * State
   */
  {
    path: "/vuex/vuexdemo",
    name: "vuex-vuexdemo",
    component: () => import("@/views/Vuex/VuexDemo.vue"),
  },
  /**
   * Getter
   */
  {
    path: "/vuex/Getter/GetterDemo",
    name: "vuex-Getter-GetterDemo",
    component: () => import("@/views/Vuex/Getter/GetterDemo.vue"),
  },
  /**
   * Mutation
   */
  {
    path: "/vuex/Mutation/MutationDemo",
    name: "vuex-Mutation-MutationDemo",
    component: () => import("@/views/Vuex/Mutation/MutationDemo.vue"),
  },
];
export default vuex;
