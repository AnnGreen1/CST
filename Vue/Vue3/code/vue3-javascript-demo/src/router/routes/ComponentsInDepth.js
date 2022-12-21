const ComponentsInDepth = [
  {
    path: "/ComponentsInDepth",
    name: "ComponentsInDepth",
    component: () => import("@/views/ComponentsInDepth/ComponentsInDepth.vue"),
  },
  /**
   * Registration
   */
  {
    path: "/ComponentsInDepth/Registration/Registration",
    name: "ComponentsInDepth-Registration-Registration",
    component: () => import("@/views/ComponentsInDepth/Registration/Registration.vue"),
  },
  /**
   * Props
   */
  {
    path: "/ComponentsInDepth/Props/Props",
    name: "ComponentsInDepth-Props-Props",
    component: () => import("@/views/Props/Props.vue"),
  },
];
export default ComponentsInDepth;
