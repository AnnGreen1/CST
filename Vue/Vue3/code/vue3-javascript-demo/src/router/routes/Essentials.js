const Essentials = [
  {
    path: "/Essentials",
    name: "Essentials",
    component: () => import("@/views/Essentials/Essentials.vue"),
  },
  /**
   * Template Syntax
   */
  {
    path: "/Essentials/TemplateSyntax/TemplateSyntax",
    name: "Essentials-TemplateSyntax-TemplateSyntax",
    component: () => import("@/views/Essentials/TemplateSyntax/TemplateSyntax.vue"),
  },
  /**
   * Reactivity Fundamentals
   */
  {
    path: "/Essentials/ReactivityFundamentals/ReactivityFundamentals",
    name: "Essentials-ReactivityFundamentals-ReactivityFundamentals",
    component: () => import("@/views/Essentials/ReactivityFundamentals/ReactivityFundamentals.vue"),
  },
  {
    path: "/Essentials/ReactivityFundamentals/setup",
    name: "Essentials-ReactivityFundamentals-setup",
    component: () => import("@/views/Essentials/ReactivityFundamentals/setup.vue"),
  },
  /**
   * Computed Properties
   */
  {
    path: "/Essentials/ComputedProperties/ComputedProperties",
    name: "Essentials-ComputedProperties-ComputedProperties",
    component: () => import("@/views/Essentials/ComputedProperties/ComputedProperties.vue"),
  },
  /**
   * Components Basic
   */
  {
    path: "/Essentials",
    name: "Essentials",
    component: () => import("@/views/Essentials/Essentials.vue"),
  },
];
export default Essentials;
