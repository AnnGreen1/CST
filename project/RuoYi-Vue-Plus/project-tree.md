> ts-comment 分支

```
plus-ui
├─ .editorconfig
├─ .env.development
├─ .env.production
├─ .eslintignore
├─ .eslintrc-auto-import.json
├─ .eslintrc.js
├─ .git
│  ├─ COMMIT_EDITMSG
│  ├─ config
│  ├─ description
│  ├─ FETCH_HEAD
│  ├─ HEAD
│  ├─ hooks
│  │  ├─ applypatch-msg.sample
│  │  ├─ commit-msg.sample
│  │  ├─ fsmonitor-watchman.sample
│  │  ├─ post-update.sample
│  │  ├─ pre-applypatch.sample
│  │  ├─ pre-commit.sample
│  │  ├─ pre-merge-commit.sample
│  │  ├─ pre-push.sample
│  │  ├─ pre-rebase.sample
│  │  ├─ pre-receive.sample
│  │  ├─ prepare-commit-msg.sample
│  │  ├─ push-to-checkout.sample
│  │  ├─ sendemail-validate.sample
│  │  └─ update.sample
│  ├─ index
│  ├─ info
│  │  └─ exclude
│  ├─ logs
│  │  ├─ HEAD
│  │  └─ refs
│  │     ├─ heads
│  │     │  ├─ dev
│  │     │  ├─ ts
│  │     │  ├─ ts-comments
│  │     │  └─ ts-simplify
│  │     └─ remotes
│  │        └─ origin
│  │           ├─ HEAD
│  │           ├─ ts
│  │           ├─ ts-comments
│  │           └─ ts-simplify
│  ├─ objects
│  │  ├─ 5a
│  │  │  └─ 36af7585000c163e6b6a4996ac3454b5b5f327
│  │  ├─ 73
│  │  │  └─ e14a0cf4b31847999b8810435ed2599c460cd7
│  │  ├─ 9a
│  │  │  └─ e1d6b7acec3b71eb2a8490243d43589c05b9d5
│  │  ├─ info
│  │  └─ pack
│  │     ├─ pack-f0f58516616d350ea025955a64117f4b7dd82b0d.idx
│  │     ├─ pack-f0f58516616d350ea025955a64117f4b7dd82b0d.pack
│  │     └─ pack-f0f58516616d350ea025955a64117f4b7dd82b0d.rev
│  ├─ ORIG_HEAD
│  ├─ packed-refs
│  └─ refs
│     ├─ heads
│     │  ├─ dev
│     │  ├─ ts
│     │  ├─ ts-comments
│     │  └─ ts-simplify
│     ├─ remotes
│     │  └─ origin
│     │     ├─ HEAD
│     │     ├─ ts
│     │     ├─ ts-comments
│     │     └─ ts-simplify
│     └─ tags
├─ .gitignore
├─ .husky
│  └─ _
│     ├─ .gitignore
│     └─ husky.sh
├─ .prettierignore
├─ .prettierrc.cjs
├─ bin
│  ├─ build.bat
│  ├─ package.bat
│  └─ run-web.bat
├─ commitlint.config.js
├─ html
│  └─ ie.html
├─ index.html
├─ LICENSE
├─ package.json
├─ public
│  └─ favicon.ico
├─ README.md
├─ src
│  ├─ animate.ts
│  ├─ api                                                                       ✅ api及其类型（都使用 interface 定义）
│  │  ├─ demo
│  │  │  ├─ demo
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  └─ tree
│  │  │     ├─ index.ts
│  │  │     └─ types.ts
│  │  ├─ login.ts
│  │  ├─ menu.ts
│  │  ├─ monitor
│  │  │  ├─ cache
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ loginInfo
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ online
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  └─ operlog
│  │  │     ├─ index.ts
│  │  │     └─ types.ts
│  │  ├─ system
│  │  │  ├─ client
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ config
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ dept
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ dict
│  │  │  │  ├─ data
│  │  │  │  │  ├─ index.ts
│  │  │  │  │  └─ types.ts
│  │  │  │  └─ type
│  │  │  │     ├─ index.ts
│  │  │  │     └─ types.ts
│  │  │  ├─ menu
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ notice
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ oss
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ ossConfig
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ post
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ role
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ social
│  │  │  │  └─ auth.ts
│  │  │  ├─ tenant
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  ├─ tenantPackage
│  │  │  │  ├─ index.ts
│  │  │  │  └─ types.ts
│  │  │  └─ user
│  │  │     ├─ index.ts
│  │  │     └─ types.ts
│  │  ├─ tool
│  │  │  └─ gen
│  │  │     ├─ index.ts
│  │  │     └─ types.ts
│  │  ├─ types.ts
│  │  └─ workflow
│  │     ├─ category
│  │     ├─ definitionConfig
│  │     ├─ formManage
│  │     ├─ leave
│  │     ├─ model
│  │     ├─ nodeConfig
│  │     ├─ processDefinition
│  │     ├─ processInstance
│  │     ├─ task
│  │     ├─ workflowCommon
│  │     └─ workflowUser
│  ├─ App.vue
│  ├─ assets
│  │  ├─ 401_images
│  │  │  └─ 401.gif
│  │  ├─ 404_images
│  │  │  ├─ 404.png
│  │  │  └─ 404_cloud.png
│  │  ├─ icons
│  │  │  └─ svg
│  │  │     ├─ 404.svg
│  │  │     ├─ bug.svg
│  │  │     ├─ build.svg
│  │  │     ├─ button.svg
│  │  │     ├─ cascader.svg
│  │  │     ├─ chart.svg
│  │  │     ├─ checkbox.svg
│  │  │     ├─ clipboard.svg
│  │  │     ├─ code.svg
│  │  │     ├─ color.svg
│  │  │     ├─ company.svg
│  │  │     ├─ component.svg
│  │  │     ├─ dashboard.svg
│  │  │     ├─ date-range.svg
│  │  │     ├─ date.svg
│  │  │     ├─ dict.svg
│  │  │     ├─ documentation.svg
│  │  │     ├─ download.svg
│  │  │     ├─ drag.svg
│  │  │     ├─ druid.svg
│  │  │     ├─ edit.svg
│  │  │     ├─ education.svg
│  │  │     ├─ email.svg
│  │  │     ├─ example.svg
│  │  │     ├─ excel.svg
│  │  │     ├─ exit-fullscreen.svg
│  │  │     ├─ eye-open.svg
│  │  │     ├─ eye.svg
│  │  │     ├─ form.svg
│  │  │     ├─ fullscreen.svg
│  │  │     ├─ gitee.svg
│  │  │     ├─ github.svg
│  │  │     ├─ guide.svg
│  │  │     ├─ icon.svg
│  │  │     ├─ input.svg
│  │  │     ├─ international.svg
│  │  │     ├─ job.svg
│  │  │     ├─ language.svg
│  │  │     ├─ link.svg
│  │  │     ├─ list.svg
│  │  │     ├─ lock.svg
│  │  │     ├─ log.svg
│  │  │     ├─ logininfor.svg
│  │  │     ├─ maxkey.svg
│  │  │     ├─ message.svg
│  │  │     ├─ money.svg
│  │  │     ├─ monitor.svg
│  │  │     ├─ nested.svg
│  │  │     ├─ number.svg
│  │  │     ├─ online.svg
│  │  │     ├─ password.svg
│  │  │     ├─ pdf.svg
│  │  │     ├─ people.svg
│  │  │     ├─ peoples.svg
│  │  │     ├─ phone.svg
│  │  │     ├─ post.svg
│  │  │     ├─ qq.svg
│  │  │     ├─ question.svg
│  │  │     ├─ radio.svg
│  │  │     ├─ rate.svg
│  │  │     ├─ redis-list.svg
│  │  │     ├─ redis.svg
│  │  │     ├─ row.svg
│  │  │     ├─ search.svg
│  │  │     ├─ select.svg
│  │  │     ├─ server.svg
│  │  │     ├─ shopping.svg
│  │  │     ├─ size.svg
│  │  │     ├─ skill.svg
│  │  │     ├─ slider.svg
│  │  │     ├─ star.svg
│  │  │     ├─ swagger.svg
│  │  │     ├─ switch.svg
│  │  │     ├─ system.svg
│  │  │     ├─ tab.svg
│  │  │     ├─ table.svg
│  │  │     ├─ textarea.svg
│  │  │     ├─ theme.svg
│  │  │     ├─ time-range.svg
│  │  │     ├─ time.svg
│  │  │     ├─ tool.svg
│  │  │     ├─ tree-table.svg
│  │  │     ├─ tree.svg
│  │  │     ├─ upload.svg
│  │  │     ├─ user.svg
│  │  │     ├─ validCode.svg
│  │  │     ├─ wechat.svg
│  │  │     └─ zip.svg
│  │  ├─ images
│  │  │  ├─ dark.svg
│  │  │  ├─ light.svg
│  │  │  ├─ login-background.jpg
│  │  │  └─ profile.jpg
│  │  ├─ logo
│  │  │  └─ logo.png
│  │  └─ styles
│  │     ├─ btn.scss
│  │     ├─ element-ui.scss
│  │     ├─ index.scss
│  │     ├─ mixin.scss
│  │     ├─ ruoyi.scss
│  │     ├─ sidebar.scss
│  │     ├─ transition.scss
│  │     └─ variables.module.scss
│  ├─ components
│  │  ├─ Breadcrumb                                                             // ✅ 面包屑导航，和 ruoyi-vue 逻辑相同，但是换用了组合式                                                 
│  │  │  └─ index.vue
│  │  ├─ BuildCode
│  │  │  ├─ index.vue
│  │  │  └─ render.vue
│  │  ├─ DictTag
│  │  │  └─ index.vue
│  │  ├─ Editor
│  │  │  └─ index.vue
│  │  ├─ FileUpload
│  │  │  └─ index.vue
│  │  ├─ Hamburger
│  │  │  └─ index.vue                                                           // ✅ 切换 sidebar 的图片，通过旋转 svg 图片实现切换
│  │  ├─ HeaderSearch
│  │  │  └─ index.vue
│  │  ├─ IconSelect
│  │  │  ├─ index.vue
│  │  │  └─ requireIcons.ts
│  │  ├─ iFrame
│  │  │  └─ index.vue
│  │  ├─ ImagePreview
│  │  │  └─ index.vue
│  │  ├─ ImageUpload
│  │  │  └─ index.vue
│  │  ├─ LangSelect
│  │  │  └─ index.vue
│  │  ├─ Pagination
│  │  │  └─ index.vue
│  │  ├─ ParentView
│  │  │  └─ index.vue
│  │  ├─ Process
│  │  ├─ RightToolbar
│  │  │  └─ index.vue
│  │  ├─ RoleSelect
│  │  ├─ RuoYiDoc
│  │  │  └─ index.vue
│  │  ├─ RuoYiGit
│  │  │  └─ index.vue
│  │  ├─ Screenfull
│  │  │  └─ index.vue
│  │  ├─ SizeSelect
│  │  │  └─ index.vue
│  │  ├─ SvgIcon
│  │  │  └─ index.vue
│  │  ├─ TopNav
│  │  │  └─ index.vue
│  │  ├─ TreeSelect
│  │  │  └─ index.vue
│  │  └─ UserSelect
│  ├─ directive
│  │  ├─ common
│  │  │  └─ copyText.ts
│  │  ├─ index.ts
│  │  └─ permission
│  │     └─ index.ts
│  ├─ enums
│  │  ├─ bpmn
│  │  ├─ layout
│  │  │  └─ LayoutEnum.ts
│  │  ├─ MenuTypeEnum.ts
│  │  ├─ RespEnum.ts
│  │  ├─ SettingTypeEnum.ts
│  │  └─ SideThemeEnum.ts
│  ├─ lang
│  │  ├─ en_US.ts
│  │  ├─ index.ts
│  │  └─ zh_CN.ts
│  ├─ layout
│  │  ├─ components
│  │  │  ├─ AppMain.vue
│  │  │  ├─ IframeToggle
│  │  │  │  └─ index.vue
│  │  │  ├─ index.ts
│  │  │  ├─ InnerLink
│  │  │  │  └─ index.vue
│  │  │  ├─ Navbar.vue                                                          // 导航栏
│  │  │  ├─ notice                                                              // 通知公告组件
│  │  │  │  └─ index.vue
│  │  │  ├─ Settings
│  │  │  │  └─ index.vue                                                        // 布局设置组件 
│  │  │  ├─ Sidebar
│  │  │  │  ├─ index.vue                                                        // 使用 logo 组件和 el-menu 实现侧边栏
│  │  │  │  ├─ Link.vue
│  │  │  │  ├─ Logo.vue                                                         // ✅ sidebar 的 logo 组件部分
│  │  │  │  └─ SidebarItem.vue                                                  // 使用递归，实现多层菜单，使用了 Link 组件
│  │  │  ├─ SocialCallback
│  │  │  │  └─ index.vue
│  │  │  ├─ TagsView
│  │  │  │  ├─ index.vue
│  │  │  │  └─ ScrollPane.vue
│  │  │  └─ TopBar
│  │  │     └─ search.vue                                                       // 全局搜索组件，在 Navbar.vue 组件中使用
│  │  └─ index.vue                                                              // layout 组件，使用了 Sidebar、Navbar、TagsView、AppMain、Settings
│  ├─ main.ts
│  ├─ permission.ts                                                             // ✅ 一个全局的 router.beforeEach() 
│  ├─ plugins
│  │  ├─ auth.ts
│  │  ├─ cache.ts
│  │  ├─ download.ts
│  │  ├─ index.ts
│  │  ├─ modal.ts
│  │  ├─ svgicon.ts
│  │  └─ tab.ts
│  ├─ router
│  │  └─ index.ts
│  ├─ settings.ts                                                               // ✅ 默认配置对象
│  ├─ store
│  │  ├─ index.ts
│  │  └─ modules
│  │     ├─ app.ts
│  │     ├─ dict.ts
│  │     ├─ notice.ts
│  │     ├─ permission.ts                                                       // ✅ 核心，生成路由及权限
│  │     ├─ settings.ts
│  │     ├─ tagsView.ts
│  │     └─ user.ts
│  ├─ types
│  │  ├─ axios.d.ts
│  │  ├─ bpmn
│  │  │  └─ editor
│  │  ├─ element.d.ts
│  │  ├─ env.d.ts
│  │  ├─ global.d.ts
│  │  ├─ module.d.ts
│  │  ├─ router.d.ts
│  │  ├─ setting.d.ts
│  │  └─ vform3-builds.d.ts
│  ├─ utils
│  │  ├─ auth.ts
│  │  ├─ crypto.ts
│  │  ├─ dict.ts
│  │  ├─ dynamicTitle.ts
│  │  ├─ errorCode.ts
│  │  ├─ i18n.ts
│  │  ├─ index.ts
│  │  ├─ jsencrypt.ts
│  │  ├─ permission.ts
│  │  ├─ propTypes.ts
│  │  ├─ request.ts
│  │  ├─ ruoyi.ts
│  │  ├─ scroll-to.ts
│  │  ├─ theme.ts
│  │  ├─ validate.ts
│  │  └─ websocket.ts
│  └─ views
│     ├─ demo
│     │  ├─ demo
│     │  │  └─ index.vue
│     │  └─ tree
│     │     └─ index.vue
│     ├─ error
│     │  ├─ 401.vue
│     │  └─ 404.vue
│     ├─ index.vue                                                              // ✅ 首页
│     ├─ login.vue                                                              // ✅ 登录页
│     ├─ monitor
│     │  ├─ admin
│     │  │  └─ index.vue
│     │  ├─ cache
│     │  │  └─ index.vue
│     │  ├─ easyretry
│     │  ├─ logininfor
│     │  │  └─ index.vue
│     │  ├─ online
│     │  │  └─ index.vue
│     │  ├─ operlog
│     │  │  └─ index.vue
│     │  └─ powerjob
│     │     └─ index.vue
│     ├─ redirect
│     │  └─ index.vue
│     ├─ register.vue                                                           // ✅ 注册页
│     ├─ system
│     │  ├─ client
│     │  │  └─ index.vue
│     │  ├─ config
│     │  │  └─ index.vue
│     │  ├─ dept
│     │  │  └─ index.vue
│     │  ├─ dict
│     │  │  ├─ data.vue
│     │  │  └─ index.vue
│     │  ├─ menu
│     │  │  └─ index.vue                                                        // ✅
│     │  ├─ notice
│     │  │  └─ index.vue
│     │  ├─ oss
│     │  │  ├─ config.vue
│     │  │  └─ index.vue
│     │  ├─ post
│     │  │  └─ index.vue
│     │  ├─ role
│     │  │  ├─ authUser.vue                                                     // ✅
│     │  │  ├─ index.vue                                                        // ✅
│     │  │  └─ selectUser.vue                                                   // ✅
│     │  ├─ tenant
│     │  │  └─ index.vue
│     │  ├─ tenantPackage
│     │  │  └─ index.vue
│     │  └─ user
│     │     ├─ authRole.vue                                                     // ✅
│     │     ├─ index.vue                                                        // ✅
│     │     └─ profile
│     │        ├─ index.vue                                                     // ✅
│     │        ├─ resetPwd.vue                                                  // ✅
│     │        ├─ thirdParty.vue                                                // ✅
│     │        ├─ userAvatar.vue                                                // ✅
│     │        └─ userInfo.vue                                                  // ✅
│     ├─ tool
│     │  ├─ build
│     │  │  └─ index.vue
│     │  └─ gen
│     │     ├─ basicInfoForm.vue
│     │     ├─ editTable.vue
│     │     ├─ genInfoForm.vue
│     │     ├─ importTable.vue
│     │     └─ index.vue
│     └─ workflow
│        ├─ category
│        ├─ formManage
│        ├─ leave
│        ├─ model
│        ├─ processDefinition
│        │  └─ components
│        ├─ processInstance
│        └─ task
├─ tsconfig.json
├─ vite
│  └─ plugins
│     ├─ auto-import.ts
│     ├─ components.ts
│     ├─ compression.ts
│     ├─ icons.ts
│     ├─ index.ts
│     ├─ setup-extend.ts
│     ├─ svg-icon.ts
│     └─ unocss.ts
└─ vite.config.ts

```