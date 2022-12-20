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
    component: () =>
      import("@/views/Essentials/TemplateSyntax/TemplateSyntax.vue"),
  },
  /**
   * Reactivity Fundamentals
   */
  {
    path: "/Essentials/ReactivityFundamentals/ReactivityFundamentals",
    name: "Essentials-ReactivityFundamentals-ReactivityFundamentals",
    component: () =>
      import(
        "@/views/Essentials/ReactivityFundamentals/ReactivityFundamentals.vue"
      ),
  },
  {
    path: "/Essentials/ReactivityFundamentals/setup",
    name: "Essentials-ReactivityFundamentals-setup",
    component: () =>
      import("@/views/Essentials/ReactivityFundamentals/setup.vue"),
  },
  /**
   * Computed Properties
   */
  {
    path: "/Essentials/ComputedProperties/ComputedProperties",
    name: "Essentials-ComputedProperties-ComputedProperties",
    component: () =>
      import("@/views/Essentials/ComputedProperties/ComputedProperties.vue"),
  },
  /**
   * Class and Style Bindings
   */
  {
    path: "/Essentials/ClassStyleBindings/ClassStyleBindings",
    name: "Essentials-ClassStyleBindings-ClassStyleBindings",
    component: () =>
      import("@/views/Essentials/ClassStyleBindings/ClassStyleBindings.vue"),
  },
  /**
   * Conditional Rendering
   */
  {
    path: "/Essentials/ConditionalRendering/ConditionalRendering",
    name: "Essentials-ConditionalRendering-ConditionalRendering",
    component: () =>
      import("@/views/Essentials/ConditionalRendering/ConditionalRendering.vue"),
  },
  /**
   * List Rendering
   */
  {
    path: "/Essentials/ListRendering/ListRendering",
    name: "Essentials-ListRendering-ListRendering",
    component: () =>
      import("@/views/Essentials/ListRendering/ListRendering.vue"),
  },
  /**
   * Event Handling
   */
  {
    path: "/Essentials/EventHandling/EventHandling",
    name: "Essentials-EventHandling-EventHandling",
    component: () =>
      import("@/views/Essentials/EventHandling/EventHandling.vue"),
  },
  /**
   * Form Input Bindings
   */
  {
    path: "/Essentials/FormInputBindings/FormInputBindings",
    name: "Essentials-FormInputBindings-FormInputBindings",
    component: () =>
      import("@/views/Essentials/FormInputBindings/FormInputBindings.vue"),
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
