# 2023 年了，还有前端人不知道 commit 规范 ？

[juejin.cn](https://juejin.cn/post/7212597327579037756)喜欢哆肉 2023-03-20 22:19 17873

## 一个开发人员需要知道的 commit 规范

## 什么是约定式提交

约定式提交（Conventional Commits）是一种用于代码版本控制的规范，旨在通过明确和标准化提交信息来提高代码协作质量和效率。其基本原则是通过规定提交信息的结构和语义来提高代码版本控制的可读性、可维护性和自动化程度。

约定式提交规范通常要求提交信息包括一个描述性的"类型"、一个可选的"作用域"、一个用于简洁说明的"主题"，以及可选的"正文"和"尾部"等组成部分。这些组成部分的格式和语义都是根据规范要求进行约定的，比如使用"feat"来表示新功能、"fix"表示修复错误、"docs"表示文档变更等。

通过遵循约定式提交规范，开发人员可以更容易地理解和管理代码的变更历史，同时也为自动化工具提供了更多可靠的信息，例如自动生成版本号、发布日志和代码库更新等操作。

提交说明的结构如下所示:

* * *

原文：

```
<type>[optional scope]: <description>
        ​
[optional body]
        ​
[optional footer(s)]
```

译文：
```
<类型>[可选 范围]: <描述>
    ​
[可选 正文]
    ​
[可选 脚注]
```

* * *

提交说明包含了下面的结构化元素，以向类库使用者表明其意图：

0. **fix:** _类型_ 为 `fix` 的提交表示在代码库中修复了一个 bug（这和语义化版本中的 [`PATCH`](https://semver.org/lang/zh-CN/) 相对应）。
1. **feat:** _类型_ 为 `feat` 的提交表示在代码库中新增了一个功能（这和语义化版本中的 [`MINOR`](https://semver.org/lang/zh-CN/#%E6%91%98%E8%A6%81) 相对应）。
2. **BREAKING CHANGE:** 在脚注中包含 `BREAKING CHANGE:` 或 <类型>(范围) 后面有一个 `!` 的提交，表示引入了破坏性 API 变更（这和语义化版本中的 [`MAJOR`](https://semver.org/lang/zh-CN/#%E6%91%98%E8%A6%81) 相对应）。 破坏性变更可以是任意 _类型_ 提交的一部分。
3. 除 `fix:` 和 `feat:` 之外，也可以使用其它提交 _类型_ ，例如 [@commitlint/config-conventional](https://github.com/conventional-changelog/commitlint/tree/master/%40commitlint/config-conventional)（基于 [Angular 约定](https://github.com/angular/angular/blob/22b96b9/CONTRIBUTING.md#-commit-message-guidelines)）中推荐的 `build:`、`chore:`、 `ci:`、`docs:`、`style:`、`refactor:`、`perf:`、`test:`，等等。
4. 脚注中除了 `BREAKING CHANGE: <description>` ，其它条目应该采用类似 [git trailer format](https://git-scm.com/docs/git-interpret-trailers) 这样的惯例。

其它提交类型在约定式提交规范中并没有强制限制，并且在语义化版本中没有隐式影响（除非它们包含 BREAKING CHANGE）。 可以为提交类型添加一个围在圆括号内的范围，以为其提供额外的上下文信息。例如 `feat(parser): adds ability to parse arrays.`。

### 示例

包含了描述并且脚注中有破坏性变更的提交说明
```
feat: allow provided config object to extend other configs
    ​
BREAKING CHANGE: `extends` key in config file is now used for extending other config files
```

包含了 `!` 字符以提醒注意破坏性变更的提交说明
```
feat!: send an email to the customer when a product is shipped
```

包含了范围和破坏性变更 `!` 的提交说明
```
feat(api)!: send an email to the customer when a product is shipped
```

包含了 `!` 和 BREAKING CHANGE 脚注的提交说明
```
chore!: drop support for Node 6
    ​
BREAKING CHANGE: use JavaScript features not available in Node 6.
```

不包含正文的提交说明
```
docs: correct spelling of CHANGELOG
```

包含范围的提交说明
```
feat(lang): add polish language
```

包含多行正文和多行脚注的提交说明
```
fix: prevent racing of requests
    ​
Introduce a request id and a reference to latest request. Dismiss
    incoming responses other than from latest request.
    ​
Remove timeouts which were used to mitigate the racing issue but are
    obsolete now.
    ​
Reviewed-by: Z
Refs: #123
```

### type 类型概览

|   值  |  描述   |
| --- | --- |
|   feat  |  新增一个功能   |
|   fix  |   修复一个Bug  |
|   docs  |  文档变更   |
|   style  |  代码格式（不影响功能，例如空格、分号等格式修正）   |
|  refactor   |   代码重构  |
|  perf   |  改善性能   |
|  test   |  测试   |
|  build   |  变更项目构建或外部依赖（例如scopes: webpack、gulp、npm等）   |
|  ci   |   更改持续集成软件的配置文件和package中的scripts命令，例如scopes: Travis, Circle等  |
|  chore   |   变更构建流程或辅助工具  |
|  revert   |   代码回退  |


## 为什么需要约定式提交？

Git提交信息需要遵循Angular约定是为了使提交信息格式清晰、易于阅读和理解，从而提高代码协作的效率。Angular约定包括以下三个部分：

1. 标题（header）：用一行简短的描述来总结更改内容，并使用特殊关键字指定更改类型和影响范围。
2. 正文（body）：提供更详细的更改描述，包括更改原因、影响和解决方案等信息。
3. 页脚（footer）：提供一些附加信息，如相关链接、关联的BUG编号等。

通过遵循Angular约定，可以使提交信息更加规范化和易于管理，从而方便其他团队成员阅读和理解更改的含义，从而提高团队协作效率。此外，遵循Angular约定的提交信息还可以更好地与许多自动化工具进行集成，如自动化版本控制、代码审查工具等。

## 如何遵守约定式提交？

### 第一步：Commitizen -> 自动生成提交说明的工具

> Commitizen是一个基于命令行的交互式工具，它可以帮助开发者规范化提交Git提交信息，符合Angular Commit Message Conventions的规范，从而更好地管理代码变更历史。

Commitizen提供了一个友好的命令行交互界面，让开发者根据规范选择提交信息的类型、影响范围等内容，自动生成符合规范的Git提交信息。

Commitizen可以与Git结合使用，使得开发者可以使用commitizen命令代替git commit命令提交代码变更，并且生成的提交信息格式更加规范化和易于管理。

**这里我建议您全局安装**
```
pnpm install -g commitizen 
pnpm install -g cz-conventional-changelog
```

随后在电脑用户根目录创建`.czrc`文件，不然使用的时候会进入命令行（笔者的系统为Ubuntu20.04）
```shell
echo '{ "path": "cz-conventional-changelog" }' > ~/.czrc
```

随后使用**commitizen**生成符合AngularJS规范的**提交说明**
```
commitizen init cz-conventional-changelog --save --save-exact
```

随后你就可以使用以下命令获得中规中距的commit信息了。
```
git cz 
```

### 第二步：Cz-customizable -> 客制化自动提交信息

> **cz-customizable 是 Commitizen的一个插件**，可以帮助开发者自定义符合Angular Commit Message Conventions的提交信息格式和内容。

**拜托，人又不是机器！别那么死板。和代码打交道最重要的事情就是懂得如何苦中作乐，在遇到挑战和困难时，优秀的人能够采取积极的心态，并且能够寻找解决问题的方式和方法。**

cz-customizable提供了一些配置选项，让开发者可以根据项目的需要自定义提交信息的格式和内容。

cz-customizable的配置选项包括：

1. `types`: 定义提交信息的类型，如feat（新功能）、fix（修复Bug）等。
2. `scopes`: 定义提交信息的影响范围，如模块、组件等。
3. `allowCustomScopes`: 是否允许自定义影响范围。
4. `scopeOverrides`: 定义不同类型的提交信息对影响范围的要求。
5. `messages`: 定义提交信息的模板，包括标题、正文、页脚等内容。
6. `allowBreakingChanges`: 是否允许提交破坏性变更。

#### 1\. 安装 cz-customizable
```
npm install cz-customizable --save-dev
```

#### 2\. 添加以下配置到`package.json`中
```
"config": {
    "commitizen": {
    "path": "node_modules/cz-customizable"
    }
}
```

#### 3.项目根目录下创建`.cz-config.js`文件来自定义提示
```
    ├── CHANGELOG.md
    ├── commitlint.config.js
    ├── index.html
    ├── node_modules
    ├── package.json
    ├── pnpm-lock.yaml
    ├── public
    ├── README.md
    ├── src
    ├── tsconfig.json
    ├── tsconfig.node.json
    ├── vite.config.ts
    └── .cz-config.js  // 创建
```

#### 以下是我的一些参考配置
```js
    module.exports = {
      // 可选类型
      types: [
        {
          value: ':sparkles: feat',
          name: '✨ feat:      新功能'
        },
        {
          value: ':bug: fix',
          name: '🐛 fix:      修复'
        },
        {
          value: ':memo: docs',
          name: '📝 docs:      文档变更'
        },
        {
          value: ':lipstick: style',
    ​
          name: '💄 style:     代码格式(不影响代码运行的变动)'
        },
        {
          value: ':recycle: refactor',
    ​
          name: '♻️  refactor:    重构 (既不增加feature, 也不是修复bug)'
        },
        {
          value: ':zap: perf',
          name: '⚡️ perf:      性能优化'
        },
        {
          value: ':white_check_mark: test',
          name: '✅ test:      增加测试'
        },
        {
          value: ':wrench: chore',
          name: '🔧 chore:     构建过程或辅助工具的变动'
        },
        {
          value: ':rewind: revert',
          name: '⏪ revert:     回退'
        },
        {
          value: ':rocket: build',
          name: '🚀 build:     打包'
        }
      ],
    ​
      // 步骤
    ​
      messages: {
        type: '请选择提交的类型：',
        customScope: '情输入修改的范围(可选)',
        subject: '请简要描述提交(必填)',
        body: '请输入详细描述(可选)',
        footer: '请输入要关闭的issus(可选)',
        confirmCommit: '确认要使用以上信息提交？(y/n)'
      },
      // 默认长度72
      subjectLimit: 72
    };
```

此时再次运行 `git cz`时就可以看到
```
    ? 请选择提交的类型： (Use arrow keys)
    ❯ ✨ feat:      新功能 
      🐛 fix:      修复 
      📝 docs:      文档变更 
      💄 style:     代码格式(不影响代码运行的变动) 
      ♻️  refactor:    重构 (既不增加feature, 也不是修复bug) 
      ⚡️ perf:      性能优化 
      ✅ test:      增加测试 
```

### 第三步：Commitlint -> 对自动生成 commit 信息的校验

> 有时候你的队友可能是傻逼？请你注意防范

**很遗憾的是，上面的操作并没有任何校验功能，你的队友仍然可以提交 trash 在 commit 信息中。如果不敲你是队伍中的审核人员，那么我想你需要设置一些规范**

Commitlint 帮助你进行`git commit -m "提交说明"`操作时，对提交说明会按照`commitlint.config.js` 配置的规则进行校验，不通过则不能提交 这里我们分情况讨论：

若您**没有使用 cz-customizable**适配器**做了破坏Angular风格的提交说明配置**，则可以使用以下配置方案

1.安装 `@commitlint/config-conventional`
```
npm i @commitlint/config-conventional @commitlint/cli -D
```

2.在根目录创建`commitlint.config.js`文件，配置`commitlint`
```
    module.exports = {
      extends: ['@commitlint/config-conventional']
    }
```

若您使用 **cz-customizable** 了则需要使用以下配置方案
```
    npm install commitlint-config-cz --save-dev
```

然后加入`commitlint`校验规则配置：
```
    module.exports = {
      extends: [
        'cz'
      ]
    };
```

这里我说明一下：`cz` 实际上是 `commitlint-config-cz` 的简写，这个简写是在 `commitlint` 中预定义的。`cz` 配置文件本身并不存在，它实际上是通过扩展 `commitlint-config-cz` 配置文件来实现的。`commitlint-config-cz` 在规范 Git 提交信息的时候，会读取 `cz-config.js` 中的配置信息。

### commitizen、cz-customizable、commitlint 三者之间的关系

> 到这里可能已经分不清 谁和谁的关系了，这里笔者在帮大家理清一下

* `commitizen` 就像是生产线上的模板，它定义了产品的外观和结构，提供了一种易于理解和使用的模板来生成规范化的提交信息。
* `cz-customizable` 就像是生产线上的调整机器，你可以给产品换个颜色，换个包装等等。它可以根据不同的需求对模板进行定制，适应不同的项目需求。
* `commitlint` 就像是生产线上的检测设备，这意味着不管你如何去 DIY 这个产品，他总要有一个审核标准来说明他是一个合格产品。而`commitlint` 支持多种规范配置文件，其中就包括 `commitlint-config-cz`，它继承了 `commitlint-config-conventional` 的基础规范，并增加了对 `commitizen` 规范的支持。

## 最后的一些补充

### husky: 最后的帮手

> 是一个可以在 Git hooks 中使用的 npm 包，它可以帮助你在特定的 Git 事件发生时执行命令，例如提交代码之前进行代码格式化、测试等操作.

"husky"是一个为了方便使用Git hooks的工具，它能够帮助你在项目中自动化地执行一些Git相关的操作。使用husky，你可以在Git的一些关键操作（例如提交、推送、合并等）前或后，执行一些脚本或命令，比如代码格式化、自动化测试、打包发布等。

**他可以帮助我们额外拦截一些如`git commit`等指令**。需要注意的是，husky只在Git仓库中才能正常工作，所以在使用之前请确保你的项目已经初始化为Git仓库

#### 1.安装 husky

1. 在项目中安装 husky，可以使用 npm或者 yarn 进行安装：
```
pnpm install husky --save-dev
```

或者
```
yarn add husky --dev
```

#### 2.在package.json中定义需要执行的Git hooks和对应的脚本

例如，在提交代码前执行代码格式化和自动化测试：
```
    jsonCopy code{
      "husky": {
        "hooks": {
          "pre-commit": "npm run lint && npm run test"
        }
      }
    }
```

这样，每次在执行`git commit`命令时，都会自动执行npm中定义的`lint`和`test`命令。

除了`pre-commit`钩子，husky还支持其他一些Git hooks，比如`pre-push`、`post-merge`、`post-checkout`等，可以根据实际需求进行配置。

需要注意的是，husky只在Git仓库中才能正常工作，所以在使用之前请确保你的项目已经初始化为Git仓库。

当然 除了在`pageage.json`中设置之外，还可以使用

`npx husky add .husky/pre-commit`来生成一个 hook 的文件

随后你也可以在相应的文件中书写要执行的脚本了
```
    ./.husky/
    ├── _
    │   └── husky.sh
    ├── commit-msg
    └── pre-commit // 再此写入
```

#### 3.使用lint-staged, 对暂存区代码进行eslint校验和prettier格式化

现在我们已经约束了提交规范，但是我们希望在提交前对当前的代码进行格式验证和修复，此时需要使用到`lint-staged`

1. 安装 `npm i lint-staged --save-dev`

2. 在`package.json`中新增配置，以上操作可以实现，每次进行`git commit` 操作，将执行`pre-commit`钩子里面的代码，从而执行`lint-staged`配置项的命令
```
        "lint-staged": {
          "**/*.scss": "stylelint --syntax scss",
          "**/*.{js,jsx, tsx,ts }": "npm run lint-staged:js",
          "**/*.{js,jsx,tsx,ts,less,scss,md,json}": [
            "prettier --write"
          ]
        }
```
3. 在`package.json`中新增 `lint-staged` 和 `lint-staged.js` 命令
```
        "scripts": {
            "lint-staged": "lint-staged",
            "lint-staged:js": "eslint --ext .js,.jsx,.ts,.tsx "
        }
```
4. 最后在 `pre-commit`中新增脚本
```
        npm run lint-staged
```

## ChatGpt: commit 生成器

我在发布这篇文章的20天内收到了很多掘金小友的建议:“ 2023 年了，把这些交给 ChatGpt 去做！”。好吧，也许是我太迟钝了。这里我也更新这一小节。以下是我搜集到的一些利用 ChatGpt 做 Commit 的方式：-
**方式一**：最低门槛的方式 利用预设的 prompt 对 chatgpt 设定角色。这里我也贴出我收集到提示词：-
`I want you to act as a commit message generator. I will provide you with information about the task and the prefix for the task code, and I would like you to generate an appropriate commit message using the conventional commit format. Do not write any explanations or other words, just reply with the commit message.`-
`我想让你充当一个提交信息生成器。我将为你提供任务的信息和任务代码的前缀，我希望你能用常规的提交格式生成一条合适的提交信息。不要写任何解释或其他文字，只需回复提交信息。`-
**方式二**：使用`commitgpt`。这应该是小伙伴们最希望看到的方式，集成在项目中而不需要切换到网页上对着一个机器人发问。但很遗憾作者在原文中提到

> OpenAI added additional Cloudflare protections that make it more difficult to access the unofficial API. The tool is not working temporary until I find a way to workaround it.-
> OpenAI增加了Cloudflare的额外保护措施，使得访问非官方API变得更加困难。目前该工具暂时无法使用，直到我找到解决办法。

但您如果感兴趣仍然可以进行尝试,这里放上连接：[commitgpt](https://github.com/RomanHotsiy/commitgpt)

## 送给读者的话

在我第一次接触到规范这类繁杂且" 无意义 "的行为时，我也和很多人一样觉得这是一些无关紧要的东西。但使用 commit 规范可以帮助自己更好地记录和追踪代码的变化。通过规范的 commit message，可以清晰地记录下每次提交代码所做的更改和原因。这有助于你在以后回顾代码时更好地理解代码的变化和背后的原因。最重要的是提交规范不仅是代码开发中的工具，更是一种生活态度和价值观。遵循规范，能够让我们更加专业和高效地处理事物，建立更加和谐和美好的人际关系。-
_如果您想转载我的文章，无需特地向我咨询是否可以转载。只需在转载的地方注明文章的出处即可，非常感谢您对我的文章的赏识。