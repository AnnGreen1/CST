1、进入`/ann`目录
```
cd ann
```
2、返回上一级目录
```
cd ..
```
3、返回上两级目录
```
cd ../..
```
4、进入个人主目录
```
cd
```
5、查看目录中的文件
```
ls
```
6、显示文件和目录的详细资料
```
ls -l
```
7、列出全部文件，包含隐藏文件
```
ls -a
```
8、连同子目录的内容一起列出
```
ls -R
```
9、使用指令 cp 将当前目录 test/ 下的所有文件复制到新目录 newtest 下
```
cp –r test/ newtest        
```
10、删除文件或目录
```
rm ann.c
// 就是force的意思，忽略不存在的文件，不会出现警告消息
rm -f
// 互动模式，在删除前会询问用户是否操作
rm -i
// 递归删除，最常用于目录删除，它是一个非常危险的参数
rm -r
```
11、cat
```
cat file1 从第一个字节开始正向查看文件的内容
tac file1 从最后一行开始反向查看一个文件的内容
cat -n file1 标示文件的行数
```
12、关机与重启
```
shutdown -h now 立即关机
shutdown -r now 立即重启
shutdown -h 10:00 10点关机
shutdown -r 10:00 10点重启
shutdown –h +10 十分钟后关机
shutdown –r +10 系统十分钟后重启
```


VMware虚拟机连不上网络，最详细排查解决方案
https://blog.csdn.net/weixin_45416439/article/details/127809817


https://developer.aliyun.com/article/760687