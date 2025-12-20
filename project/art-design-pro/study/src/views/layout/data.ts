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
    name: "Element Plus 组件",
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
    path: "/font-face",
    name: "font-face"
  },
  {
    path: "/media-variable",
    name: "媒体查询变量"
  },
  {
    name: "Sass",
    children: [
      { path: "/sass/at-use", name: "@use" }
    ]
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