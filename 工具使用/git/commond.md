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

20、统计代码行数

```
// 不限时间
git log --format='%aN' | sort -u | while read name; do echo -en "$name\t"; git log --author="$name" --pretty=tformat: --numstat | awk '{ add += $1; subs += $2; loc += $1 - $2 } END { printf "added lines: %s, removed lines: %s, total lines: %s\n", add, subs, loc }' -; done

// 限制起始日期
git log --format='%aN' | sort -u | while read name; do echo -en "$name\t"; git log --author="$name" --since="2023-01-01" --until="2023-12-31" --pretty=tformat: --numstat | awk '{ add += $1; subs += $2; loc += $1 - $2 } END { printf "added lines: %s, removed lines: %s, total lines: %s\n", add, subs, loc }' -; done
```

21、配置git不忽略文件名大小写

```
git config core.ignorecase false 
```

22、删除本地分支并同步到远程仓库，把远程分支也删了
```
// 1、删除本地分支
git branch -d branch_name

// 2、删除远程分支
git push origin --delete branch_name
```

其他还未整理

```
git branch 查看本地所有分支
git status 查看当前状态 
git commit 提交 
git branch -a 查看所有的分支
git branch -r 查看远程所有分支
git commit -am "init" 提交并且加注释 
git remote add origin git@192.168.1.119:ndshow
git push origin master 将文件给推到服务器上 
git remote show origin 显示远程库origin里的资源 
git push origin master:develop
git push origin master:hb-dev 将本地库与服务器上的库进行关联 
git checkout --track origin/dev 切换到远程dev分支
git branch -D master develop 删除本地库develop
git checkout -b dev 建立一个新的本地分支dev
git merge origin/dev 将分支dev与当前分支进行合并
git checkout dev 切换到本地dev分支
git remote show 查看远程库
git add .
git rm 文件名(包括路径) 从git中删除指定文件
git clone git://github.com/schacon/grit.git 从服务器上将代码给拉下来
git config --list 看所有用户
git ls-files 看已经被提交的
git rm [file name] 删除一个文件
git commit -a 提交当前repos的所有的改变
git add [file name] 添加一个文件到git index
git commit -v 当你用－v参数的时候可以看commit的差异
git commit -m "This is the message describing the commit" 添加commit信息
git commit -a -a是代表add，把所有的change加到git index里然后再commit
git commit -a -v 一般提交命令
git log 看你commit的日志
git diff 查看尚未暂存的更新
git rm a.a 移除文件(从暂存区和工作区中删除)
git rm --cached a.a 移除文件(只从暂存区中删除)
git commit -m "remove" 移除文件(从Git中删除)
git rm -f a.a 强行移除修改后文件(从暂存区和工作区中删除)
git diff --cached 或 $ git diff --staged 查看尚未提交的更新
git stash push 将文件给push到一个临时空间中
git stash pop 将文件从临时空间pop下来
```
