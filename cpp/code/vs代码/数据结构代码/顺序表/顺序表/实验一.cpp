#include <stdio.h>
#include <malloc.h> //添加malloc函数的头文件
#include <windows.h>

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define LIST_INIT_SIZE 100 //线性表的存储空间的初始分配量
#define LISTINCREMENT 10 //线性表的存储空间的的分配增量
typedef int Status;
typedef int ElemType;

typedef struct {
	ElemType *elem;
	int length;
	int listsize;
}SqList;
//初始化线性表，主要是初始化结构体参数，主要是为线性表的存放 申请内容
Status InitList_Sq(SqList &L) {
	//构造一个线性表L
	L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));
	if (!L.elem) exit(OVERFLOW); //存储分配失败，退出程序
	L.length = 0;               //空表的长度为0
	L.listsize = LIST_INIT_SIZE;//初始存储容量
	return OK;
}
// 创建线性表，主要的功能是 为初始化函数线性表 所申请的内存，初始化数据
Status CreateList_Sq(SqList &L, int n)
{
	ElemType *newbase;
	int i;
	if (n<0)
	{
		return ERROR;
	}
	if (n>L.listsize)
	{
		newbase = (ElemType*)realloc(L.elem, (L.listsize + n)*sizeof(ElemType));
		if (!newbase) exit(OVERFLOW);
		L.elem = newbase;
		L.listsize += n;
	}
	L.length = n;
	printf("请输入数据，用空格分隔:\n");
	for (i = 0; i<n; i++)
	{
		scanf_s("%d", &(L.elem[i]));
	}
	return OK;
}
//在线性表 指定位置插入一个数据
Status ListInsert_Sq(SqList &L, int i, ElemType e)
{
	ElemType * newbase, *q, *p;
	if (i<1 || i>L.length) return ERROR;
	if (L.length > L.listsize)
	{
		newbase = (ElemType*)realloc(L.elem, (L.listsize + LISTINCREMENT)*sizeof(ElemType));
		if (!newbase) exit(OVERFLOW);
		L.elem = newbase;
		L.listsize += LISTINCREMENT;
	}
	q = &(L.elem[i - 1]);
	for (p = &(L.elem[L.length - 1]); p >= q; --p)
	{
		*(p + 1) = *p;
	}
	*q = e;
	++L.length;
	return OK;
}
//删除线性表指定位置的数值，并且返回删除的数据，保存在 e.
Status ListDelete_Sq(SqList &L, int i, ElemType &e)
{
	ElemType *p, *q;
	if ((i<1) || (i>L.length)) return ERROR;
	p = &(L.elem[i - 1]);
	e = *p;
	q = L.elem + L.length - 1;
	for (++p; p <= q; ++p)
	{
		*(p - 1) = *p;
	}
	--L.length;
	return OK;
}


//打印函数，功能是将线性表中的数据 输出到屏幕
Status ShowList_Sq(SqList &L)
{
	int i;
	if (L.length <= 0)
	{
		return ERROR;
	}
	for (i = 0; i<L.length; i++)
	{
		printf("%d\t", L.elem[i]);
	}
	printf("\n");
	return OK;
}
int main()
{
	//测试函数
	SqList L;

	//测试初始化函数
	InitList_Sq(L);
	printf("%d\t%d\n", L.length, L.listsize);

	//添加函数，并显示出来
	CreateList_Sq(L, 5);
	ShowList_Sq(L);

	//测试插入函数
	ListInsert_Sq(L, 2, 88);
	printf("插入后的线性表\n");
	ShowList_Sq(L);

	//测试删除函数
	int e;
	ListDelete_Sq(L, 3, e);
	printf("删除后的线性表\n");
	ShowList_Sq(L);
	printf("删除的数据是%d\n", e);

	return 0;
}