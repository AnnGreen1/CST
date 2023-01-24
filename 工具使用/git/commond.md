```
// 创建分支
git branch (branchname)

//查看本地分支
git branch

//切换分支
git checkout (branchname)

//列出文件
ls

//写入内容
echo 'string' -> file.xxx

//添加到暂存区
git add .

//提交到HEAD
git commit -m '代码提交信息'

//推送到远端仓库  
git push 分支名

//检出仓库
git clone
    //git clone with HTTPS
    git clone url
    //git clone with SSH
    git clone git@git.github.com:username/xxx.git
    //克隆指定分支代码
    git clone -b elementui https://github.com/AnnGreen1/vue2-javascript-demo

//获取当前登录的用
git config user.name

//获取当前登录用户的邮箱
git config user.email

//从远程获取代码并合并本地的版本
git pull

//查看远程仓库地址
git remote -v
```