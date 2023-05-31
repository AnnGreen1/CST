1、创建分支
```
git branch (branchname)
```
2、查看本地分支
```
git branch
```
3、切换分支
```
git checkout (branchname)
```
4、删除分支
```
git branch -d (branchname)
```
5、列出文件
```
git ls
```
6、写入内容
```
echo 'string' -> file.xxx
```
7、添加到暂存区
```
git add .
```
8、提交到HEAD
```
git commit -m '代码提交信息'
```
9、推送到远端仓库  
```
git push 分支名
```
10、检出仓库
```
git clone

//git clone with HTTPS
git clone url

//git clone with SSH
git clone git@git.github.com:username/xxx.git

//克隆指定分支代码
git clone -b elementui https://github.com/AnnGreen1/vue2-javascript-demo
```
10、获取当前登录的用
```
git config user.name
```
11、获取当前登录用户的邮箱
```
git config user.email
```
12、从远程获取代码并合并本地的版本
```
git pull
```
13、查看远程仓库地址
```
git remote -v
```
14、删除某个文件
```
rm filename.xxx

// 强制删除，即使内含其他文件
rm -r 

// 删除空文件夹
rm -d
```
15、合并分支
```
// 在main分支操作，想把dev分支合并到main分支
git merge dev

// 合并后可能存在冲突，需要解决冲突
```
16、初始化一个仓库
```
git init
```
17、查看当前工作目录和暂存区的状态
```
git status
```
18、查看提交的日志记录
```
git log
```
19、将当前分支带动保存到堆栈中
```
git stash
```