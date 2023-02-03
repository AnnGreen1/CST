# 合并分支
1、先从`main/master`分支拉一个分支，比如是`dev`，之后在`dev`分支开发
```
git branch dev
```
2、之后把代码都提交到`dev`分支
```
git push --set-upstream origin dev
```
3、切换回`main`分支
```
git checkout main
```
4、在`main`分支把`dev`分支的合并过来
```
git merge dev
```
5、推到仓库