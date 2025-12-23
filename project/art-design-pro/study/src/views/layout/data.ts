export interface MenuItem {
  path?: string;
  name: string;
  children?: MenuItem[];
}

export const links: MenuItem[] = [
  {
    path: "/index",
    name: "首页"
  },
  {
    name: "Element Plus",
    children: [
      {
        path: "/element-plus/el-config-provider",
        name: "el-config-provider"
      },
      {
        path: "/element-plus/el-form",
        name: "el-form"
      }
    ]
  },
  {
    name: "Sass",
    children: [
      { path: "/sass/at-use", name: "@use" }
    ]
  },
  {
    name: "Vue",
    children: [
      { path: "/vue/bind-style", name: "样式绑定" }
    ]
  },
  {
    path: "/font-face",
    name: "font-face"
  },
  {
    path: "/media-variable",
    name: "媒体查询变量"
  },

  {
    path: "/svg-icon",
    name: "SvgIcon"
  },
  {
    path: "/assets",
    name: "静态资源处理"
  },
  {
    path: "/theme-color",
    name: "主题色计算"
  },
];