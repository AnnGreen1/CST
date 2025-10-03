##### 1、怎么在github网页显示图片？用cdn加速，怎么用？

##### 2、git merge和git rebase的区别？
相同点：

1. git merge和git rebase两个命令都⽤于从⼀个分⽀获取内容并合并到当前分⽀。

不同点：

1. git merge会⾃动创建⼀个新的commit，如果合并时遇到冲突的话，只需要修改后重新commit。
- 优点：能记录真实的commit情况，包括每个分⽀的详情
- 缺点：由于每次merge会⾃动产⽣⼀个commit，因此在使用⼀些可视化的 git 工具时会看到这些自动产生的commit，这些commit对于程序员来说没有什么特别的意义，多了反而会影响阅读。
2. git rebase会合并之前的commit历史。
- 优点：可以得到更简洁的提交历史，去掉了 merge 产生的commit
- 缺点：因为合并而产生的代码问题，就不容易定位，因为会重写提交历史信息
场景：

- 当需要保留详细的合并信息，建议使⽤git merge, 尤其是要合并到master上
- 当发现⾃⼰修改某个功能时提交比较频繁，并觉得过多的合并记录信息对自己来说没有必要，那么可尝试使用git rebase

##### 3、对 GitFlow 的理解？
GitFlow 重点解决的是由于源代码在开发过程中的各种冲突导致开发活动混乱的问题。重点是对各个分支的理解。

- master：主分支。
- develop：主开发分支，平行于master分支。
- feature：功能分支，必须从develop分支建立，开发完成后合并到develop分支。
- release：发布分支，发布的时候用，一般测试时候发现的 bug 在该分支进行修复。从develop分支建立，完成后合并回develop与master分支。
- hotfix：紧急修复线上 bug 使用，必须从master分支建立，完成后合并回develop与master分支。

4. 当前分支合并到当前分支与解决冲突提交的区别？

5. 如何跟踪文件夹的变化？包括空文件夹，不至于切换分支后多了许多空文件夹？