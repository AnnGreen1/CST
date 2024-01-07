```
ruoyi-ui
├─ .editorconfig
├─ .env.development
├─ .env.production
├─ .env.staging
├─ .eslintignore
├─ .eslintrc.js
├─ .gitignore
├─ babel.config.js
├─ bin                                                          // 执行脚本
│  ├─ build.bat
│  ├─ package.bat
│  └─ run-web.bat
├─ build                                                        // 构建相关
│  └─ index.js
├─ package.json
├─ public                                                       // 公共文件
│  ├─ favicon.ico
│  ├─ html
│  │  └─ ie.html
│  ├─ index.html
│  └─ robots.txt
├─ README.md
├─ src
│  ├─ api                                                       // 接口 按模块划分目录
│  │  ├─ login.js
│  │  ├─ menu.js
│  │  ├─ monitor
│  │  │  ├─ cache.js                                            // @views/monitor/cache 文件夹下两个页面的接口
│  │  │  ├─ job.js
│  │  │  ├─ jobLog.js
│  │  │  ├─ logininfor.js
│  │  │  ├─ online.js
│  │  │  ├─ operlog.js
│  │  │  └─ server.js
│  │  ├─ system
│  │  │  ├─ config.js
│  │  │  ├─ dept.js
│  │  │  ├─ dict
│  │  │  │  ├─ data.js
│  │  │  │  └─ type.js
│  │  │  ├─ menu.js
│  │  │  ├─ notice.js
│  │  │  ├─ post.js
│  │  │  ├─ role.js
│  │  │  └─ user.js
│  │  └─ tool
│  │     └─ gen.js
│  ├─ App.vue
│  ├─ assets                                                    // 静态资源目录
│  │  ├─ 401_images
│  │  │  └─ 401.gif
│  │  ├─ 404_images
│  │  │  ├─ 404.png
│  │  │  └─ 404_cloud.png
│  │  ├─ icons
│  │  │  ├─ index.js
│  │  │  ├─ svg
│  │  │  │  ├─ 404.svg
│  │  │  │  ├─ bug.svg
│  │  │  │  ├─ build.svg
│  │  │  │  ├─ button.svg
│  │  │  │  ├─ cascader.svg
│  │  │  │  ├─ chart.svg
│  │  │  │  ├─ checkbox.svg
│  │  │  │  ├─ clipboard.svg
│  │  │  │  ├─ code.svg
│  │  │  │  ├─ color.svg
│  │  │  │  ├─ component.svg
│  │  │  │  ├─ dashboard.svg
│  │  │  │  ├─ date-range.svg
│  │  │  │  ├─ date.svg
│  │  │  │  ├─ dict.svg
│  │  │  │  ├─ documentation.svg
│  │  │  │  ├─ download.svg
│  │  │  │  ├─ drag.svg
│  │  │  │  ├─ druid.svg
│  │  │  │  ├─ edit.svg
│  │  │  │  ├─ education.svg
│  │  │  │  ├─ email.svg
│  │  │  │  ├─ example.svg
│  │  │  │  ├─ excel.svg
│  │  │  │  ├─ exit-fullscreen.svg
│  │  │  │  ├─ eye-open.svg
│  │  │  │  ├─ eye.svg
│  │  │  │  ├─ form.svg
│  │  │  │  ├─ fullscreen.svg
│  │  │  │  ├─ github.svg
│  │  │  │  ├─ guide.svg
│  │  │  │  ├─ icon.svg
│  │  │  │  ├─ input.svg
│  │  │  │  ├─ international.svg
│  │  │  │  ├─ job.svg
│  │  │  │  ├─ language.svg
│  │  │  │  ├─ link.svg
│  │  │  │  ├─ list.svg
│  │  │  │  ├─ lock.svg
│  │  │  │  ├─ log.svg
│  │  │  │  ├─ logininfor.svg
│  │  │  │  ├─ message.svg
│  │  │  │  ├─ money.svg
│  │  │  │  ├─ monitor.svg
│  │  │  │  ├─ nested.svg
│  │  │  │  ├─ number.svg
│  │  │  │  ├─ online.svg
│  │  │  │  ├─ password.svg
│  │  │  │  ├─ pdf.svg
│  │  │  │  ├─ people.svg
│  │  │  │  ├─ peoples.svg
│  │  │  │  ├─ phone.svg
│  │  │  │  ├─ post.svg
│  │  │  │  ├─ qq.svg
│  │  │  │  ├─ question.svg
│  │  │  │  ├─ radio.svg
│  │  │  │  ├─ rate.svg
│  │  │  │  ├─ redis-list.svg
│  │  │  │  ├─ redis.svg
│  │  │  │  ├─ row.svg
│  │  │  │  ├─ search.svg
│  │  │  │  ├─ select.svg
│  │  │  │  ├─ server.svg
│  │  │  │  ├─ shopping.svg
│  │  │  │  ├─ size.svg
│  │  │  │  ├─ skill.svg
│  │  │  │  ├─ slider.svg
│  │  │  │  ├─ star.svg
│  │  │  │  ├─ swagger.svg
│  │  │  │  ├─ switch.svg
│  │  │  │  ├─ system.svg
│  │  │  │  ├─ tab.svg
│  │  │  │  ├─ table.svg
│  │  │  │  ├─ textarea.svg
│  │  │  │  ├─ theme.svg
│  │  │  │  ├─ time-range.svg
│  │  │  │  ├─ time.svg
│  │  │  │  ├─ tool.svg
│  │  │  │  ├─ tree-table.svg
│  │  │  │  ├─ tree.svg
│  │  │  │  ├─ upload.svg
│  │  │  │  ├─ user.svg
│  │  │  │  ├─ validCode.svg
│  │  │  │  ├─ wechat.svg
│  │  │  │  └─ zip.svg
│  │  │  └─ svgo.yml
│  │  ├─ images
│  │  │  ├─ dark.svg
│  │  │  ├─ light.svg
│  │  │  ├─ login-background.jpg
│  │  │  ├─ pay.png
│  │  │  └─ profile.jpg
│  │  ├─ logo
│  │  │  └─ logo.png
│  │  └─ styles
│  │     ├─ btn.scss
│  │     ├─ element-ui.scss
│  │     ├─ element-variables.scss
│  │     ├─ index.scss
│  │     ├─ mixin.scss
│  │     ├─ ruoyi.scss
│  │     ├─ sidebar.scss
│  │     ├─ transition.scss
│  │     └─ variables.scss
│  ├─ components                                            // 封装组件
│  │  ├─ Breadcrumb                                         // 面包屑
│  │  │  └─ index.vue
│  │  ├─ Crontab                                            // Cron 表达式生成器（没完全看懂）
│  │  │  ├─ day.vue
│  │  │  ├─ hour.vue
│  │  │  ├─ index.vue
│  │  │  ├─ min.vue
│  │  │  ├─ month.vue
│  │  │  ├─ result.vue
│  │  │  ├─ second.vue
│  │  │  ├─ week.vue
│  │  │  └─ year.vue
│  │  ├─ DictData
│  │  │  └─ index.js
│  │  ├─ DictTag
│  │  │  └─ index.vue
│  │  ├─ Editor
│  │  │  └─ index.vue
│  │  ├─ FileUpload
│  │  │  └─ index.vue
│  │  ├─ Hamburger
│  │  │  └─ index.vue
│  │  ├─ HeaderSearch
│  │  │  └─ index.vue
│  │  ├─ IconSelect
│  │  │  ├─ index.vue
│  │  │  └─ requireIcons.js
│  │  ├─ iFrame
│  │  │  └─ index.vue
│  │  ├─ ImagePreview
│  │  │  └─ index.vue
│  │  ├─ ImageUpload
│  │  │  └─ index.vue
│  │  ├─ Pagination
│  │  │  └─ index.vue
│  │  ├─ PanThumb
│  │  │  └─ index.vue
│  │  ├─ ParentView
│  │  │  └─ index.vue
│  │  ├─ RightPanel
│  │  │  └─ index.vue
│  │  ├─ RightToolbar
│  │  │  └─ index.vue
│  │  ├─ RuoYi
│  │  │  ├─ Doc
│  │  │  │  └─ index.vue
│  │  │  └─ Git
│  │  │     └─ index.vue
│  │  ├─ Screenfull
│  │  │  └─ index.vue
│  │  ├─ SizeSelect
│  │  │  └─ index.vue
│  │  ├─ SvgIcon
│  │  │  └─ index.vue
│  │  ├─ ThemePicker
│  │  │  └─ index.vue
│  │  └─ TopNav
│  │     └─ index.vue
│  ├─ directive
│  │  ├─ dialog
│  │  │  ├─ drag.js
│  │  │  ├─ dragHeight.js
│  │  │  └─ dragWidth.js
│  │  ├─ index.js
│  │  ├─ module
│  │  │  └─ clipboard.js
│  │  └─ permission
│  │     ├─ hasPermi.js
│  │     └─ hasRole.js
│  ├─ layout
│  │  ├─ components
│  │  │  ├─ AppMain.vue
│  │  │  ├─ IframeToggle
│  │  │  │  └─ index.vue
│  │  │  ├─ index.js
│  │  │  ├─ InnerLink
│  │  │  │  └─ index.vue
│  │  │  ├─ Navbar.vue
│  │  │  ├─ Settings
│  │  │  │  └─ index.vue
│  │  │  ├─ Sidebar
│  │  │  │  ├─ FixiOSBug.js
│  │  │  │  ├─ index.vue
│  │  │  │  ├─ Item.vue
│  │  │  │  ├─ Link.vue
│  │  │  │  ├─ Logo.vue
│  │  │  │  └─ SidebarItem.vue
│  │  │  └─ TagsView
│  │  │     ├─ index.vue
│  │  │     └─ ScrollPane.vue
│  │  ├─ index.vue
│  │  └─ mixin
│  │     └─ ResizeHandler.js
│  ├─ main.js
│  ├─ permission.js                                             // 权限管理：利用vuex里
│  ├─ plugins                                                   // 通用方法
│  │  ├─ auth.js
│  │  ├─ cache.js
│  │  ├─ download.js
│  │  ├─ index.js
│  │  ├─ modal.js
│  │  └─ tab.js
│  ├─ router                                                    // 路由
│  │  └─ index.js
│  ├─ settings.js
│  ├─ store
│  │  ├─ getters.js
│  │  ├─ index.js
│  │  └─ modules
│  │     ├─ app.js
│  │     ├─ dict.js
│  │     ├─ permission.js                                       // 请求并处理（生成路由）后端返回的路由信息
│  │     ├─ settings.js
│  │     ├─ tagsView.js
│  │     └─ user.js
│  ├─ utils
│  │  ├─ auth.js
│  │  ├─ dict
│  │  │  ├─ Dict.js
│  │  │  ├─ DictConverter.js
│  │  │  ├─ DictData.js
│  │  │  ├─ DictMeta.js
│  │  │  ├─ DictOptions.js
│  │  │  └─ index.js
│  │  ├─ errorCode.js
│  │  ├─ generator
│  │  │  ├─ config.js
│  │  │  ├─ css.js
│  │  │  ├─ drawingDefault.js
│  │  │  ├─ html.js
│  │  │  ├─ icon.json
│  │  │  ├─ js.js
│  │  │  └─ render.js
│  │  ├─ index.js
│  │  ├─ jsencrypt.js
│  │  ├─ permission.js
│  │  ├─ request.js
│  │  ├─ ruoyi.js
│  │  ├─ scroll-to.js
│  │  └─ validate.js
│  └─ views
│     ├─ components
│     │  └─ icons
│     │     ├─ element-icons.js
│     │     ├─ index.vue
│     │     └─ svg-icons.js
│     ├─ dashboard
│     │  ├─ BarChart.vue
│     │  ├─ LineChart.vue
│     │  ├─ mixins
│     │  │  └─ resize.js
│     │  ├─ PanelGroup.vue
│     │  ├─ PieChart.vue
│     │  └─ RaddarChart.vue
│     ├─ error
│     │  ├─ 401.vue
│     │  └─ 404.vue
│     ├─ index.vue
│     ├─ index_v1.vue
│     ├─ login.vue
│     ├─ monitor
│     │  ├─ cache
│     │  │  ├─ index.vue                      // 系统监控 - 缓存监控 的页面  
│     │  │  └─ list.vue                      // 系统监控 - 缓存列表 的页面
│     │  ├─ druid
│     │  │  └─ index.vue
│     │  ├─ job
│     │  │  ├─ index.vue
│     │  │  └─ log.vue
│     │  ├─ logininfor
│     │  │  └─ index.vue
│     │  ├─ online
│     │  │  └─ index.vue
│     │  ├─ operlog
│     │  │  └─ index.vue
│     │  └─ server
│     │     └─ index.vue
│     ├─ redirect.vue
│     ├─ register.vue
│     ├─ system
│     │  ├─ config
│     │  │  └─ index.vue
│     │  ├─ dept
│     │  │  └─ index.vue
│     │  ├─ dict
│     │  │  ├─ data.vue
│     │  │  └─ index.vue
│     │  ├─ menu
│     │  │  └─ index.vue
│     │  ├─ notice
│     │  │  └─ index.vue
│     │  ├─ post
│     │  │  └─ index.vue
│     │  ├─ role
│     │  │  ├─ authUser.vue
│     │  │  ├─ index.vue
│     │  │  └─ selectUser.vue
│     │  └─ user
│     │     ├─ authRole.vue
│     │     ├─ index.vue
│     │     └─ profile
│     │        ├─ index.vue
│     │        ├─ resetPwd.vue
│     │        ├─ userAvatar.vue
│     │        └─ userInfo.vue
│     └─ tool
│        ├─ build
│        │  ├─ CodeTypeDialog.vue
│        │  ├─ DraggableItem.vue
│        │  ├─ IconsDialog.vue
│        │  ├─ index.vue
│        │  ├─ RightPanel.vue
│        │  └─ TreeNodeDialog.vue
│        ├─ gen
│        │  ├─ basicInfoForm.vue
│        │  ├─ editTable.vue
│        │  ├─ genInfoForm.vue
│        │  ├─ importTable.vue
│        │  └─ index.vue
│        └─ swagger
│           └─ index.vue
└─ vue.config.js
```