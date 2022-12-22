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
  {
    path: "/ComponentsInDepth/Registration/RegistrationWithoutSetup",
    name: "ComponentsInDepth-Registration-RegistrationWithoutSetup",
    component: () => import("@/views/ComponentsInDepth/Registration/RegistrationWithoutSetup.vue"),
  },
  /**
   * Props
   */
  {
    path: "/ComponentsInDepth/Props/Props",
    name: "ComponentsInDepth-Props-Props",
    component: () => import("@/views/ComponentsInDepth/Props/Props.vue"),
  },
  /**
   * Events
   */
  {
    path: "/ComponentsInDepth/Events/Parent",
    name: "ComponentsInDepth-Events-Parent",
    component: () => import("@/views/ComponentsInDepth/Events/Parent.vue"),
  },
];
export default ComponentsInDepth;
