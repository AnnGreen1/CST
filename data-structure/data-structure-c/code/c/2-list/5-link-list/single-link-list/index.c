#include <stdio.h>
#include <stdlib.h>

// 定义单链表节点结构
typedef struct LNode
{
    int data;           // 数据域
    struct LNode *next; // 指针域
} LNode, *LinkList;     // LNode是结构体名，LinkList是指向LNode的指针类型

/**
 * 单链表的初始化操作
 * 操作逻辑：创建一个空的单链表，即只有头节点，next指针为NULL
 * @param L 用于接收链表头指针的指针
 * @return 成功返回1，失败返回0
 */
int InitList(LinkList *L)
{
    // 分配头节点内存空间
    *L = (LNode *)malloc(sizeof(LNode)); // 将malloc返回的void指针强制转换为LNode类型
    if (!(*L))
    { // 检查内存分配是否成功
        return 0;
    }
    // 将头节点的next指针设置为NULL，表示链表为空
    (*L)->next = NULL;
    return 1;
}

/**
 * 单链表的取值操作（按位查找）
 * 操作逻辑：从头节点开始遍历，找到第i个节点并返回其数据
 * @param L 链表头指针
 * @param i 位置索引（从1开始计数）
 * @param e 用于接收元素值的指针
 * @return 成功返回1，失败返回0
 */
int GetElem(LinkList L, int i, int *e)
{
    int j = 1;          // 计数器，从第1个节点开始
    LNode *p = L->next; // p指向第一个节点（不是头节点）

    // 检查位置是否合法
    if (i < 1)
    {
        return 0;
    }

    // 遍历到第i个节点
    while (p && j < i)
    {
        p = p->next;
        j++;
    }

    // 检查是否找到第i个节点
    if (!p || j > i)
    {
        return 0; // 未找到
    }

    *e = p->data; // 获取第i个节点的数据
    return 1;
}

/**
 * 单链表的查找操作（按值查找）
 * 操作逻辑：从第一个节点开始，依次比较节点数据域与给定值
 * @param L 链表头指针
 * @param e 要查找的元素值
 * @return 找到返回该节点指针，未找到返回NULL
 */
LNode *LocateElem(LinkList L, int e)
{
    LNode *p = L->next; // p指向第一个节点

    // 遍历链表
    while (p)
    {
        if (p->data == e)
        { // 找到匹配的节点
            return p;
        }
        p = p->next;
    }

    return NULL; // 未找到
}

/**
 * 单链表的插入操作（在第i个位置前插入元素）
 * 操作逻辑：找到第i-1个节点，修改指针完成插入
 * @param L 链表头指针
 * @param i 插入位置（从1开始计数）
 * @param e 要插入的元素值
 * @return 成功返回1，失败返回0
 */
int ListInsert(LinkList *L, int i, int e)
{
    int j = 0;     // 计数器，从头节点开始计为第0个
    LNode *p = *L; // p指向头节点，j=0
    LNode *s;      // 新节点指针

    // 查找第i-1个节点
    while (p && j < i - 1)
    {
        p = p->next;
        j++;
    }

    // 检查插入位置是否合法
    if (!p || j > i - 1)
    {
        return 0;
    }

    // 创建新节点
    s = (LNode *)malloc(sizeof(LNode));
    if (!s)
    { // 检查内存分配是否成功
        return 0;
    }

    s->data = e;       // 设置新节点数据
    s->next = p->next; // 新节点的next指向第i个节点
    p->next = s;       // 第i-1个节点的next指向新节点

    return 1;
}

/**
 * 单链表的删除操作（删除第i个位置的元素）
 * 操作逻辑：找到第i-1个节点，修改指针跳过第i个节点，并释放其内存
 * @param L 链表头指针
 * @param i 删除位置（从1开始计数）
 * @param e 用于接收被删除元素值的指针
 * @return 成功返回1，失败返回0
 */
int ListDelete(LinkList *L, int i, int *e)
{
    int j = 0;     // 计数器，从头节点开始计为第0个
    LNode *p = *L; // p指向头节点
    LNode *q;      // 要删除的节点指针

    // 查找第i-1个节点
    while (p->next && j < i - 1)
    {
        p = p->next;
        j++;
    }

    // 检查删除位置是否合法
    if (!(p->next) || j > i - 1)
    {
        return 0;
    }

    q = p->next;       // q指向第i个节点
    *e = q->data;      // 保存被删除节点的数据
    p->next = q->next; // 将第i-1个节点的next指向第i+1个节点
    free(q);           // 释放被删除节点的内存

    return 1;
}

/**
 * 单链表的创建操作（头插法）
 * 操作逻辑：从一个空表开始，每读入一个数据元素则创建一个新节点，
 *           使用头插法将新节点插入到当前链表的表头节点之后
 * @param L 用于接收链表头指针的指针
 * @param n 要创建的节点个数
 */
void CreateList_H(LinkList *L, int n)
{
    int i;
    int data;
    LNode *p;

    // 初始化空链表
    *L = (LNode *)malloc(sizeof(LNode));
    (*L)->next = NULL;

    printf("请输入%d个数据:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);

        // 创建新节点
        p = (LNode *)malloc(sizeof(LNode));
        p->data = data;

        // 头插法：将新节点插入到表头
        p->next = (*L)->next;
        (*L)->next = p;
    }
}

/**
 * 单链表的创建操作（尾插法）
 * 操作逻辑：从一个空表开始，每读入一个数据元素则创建一个新节点，
 *           使用尾插法将新节点插入到当前链表的表尾
 * @param L 用于接收链表头指针的指针
 * @param n 要创建的节点个数
 */
void CreateList_R(LinkList *L, int n)
{
    int i;
    int data;
    LNode *p, *r;

    // 初始化空链表
    *L = (LNode *)malloc(sizeof(LNode));
    (*L)->next = NULL;
    r = *L; // r始终指向链表尾节点

    printf("请输入%d个数据:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &data);

        // 创建新节点
        p = (LNode *)malloc(sizeof(LNode));
        p->data = data;
        p->next = NULL;

        // 尾插法：将新节点连接到表尾
        r->next = p;
        r = p; // r指向新的尾节点
    }
}

/**
 * 打印单链表的所有元素
 * @param L 链表头指针
 */
void PrintList(LinkList L)
{
    LNode *p = L->next; // p指向第一个节点

    printf("单链表内容：");
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

/**
 * 释放单链表的内存
 * @param L 链表头指针
 */
void FreeList(LinkList *L)
{
    LNode *p = *L;
    LNode *q;

    while (p)
    {
        q = p->next;
        free(p);
        p = q;
    }
    *L = NULL;
}

// 主函数，演示单链表的各种操作
int main()
{
    LinkList L;
    int result, value;

    // 初始化单链表
    if (InitList(&L))
    {
        printf("单链表初始化成功\n");
        printf("头结点地址：%p\n", &L);
    }
    else
    {
        printf("单链表初始化失败\n");
        return -1;
    }

    // 使用尾插法创建链表
    CreateList_R(&L, 5); // 创建包含5个元素的链表

    printf("\n--- 创建后的单链表 ---\n");
    PrintList(L);

    // 测试取值操作
    printf("\n--- 测试取值操作 ---\n");
    if (GetElem(L, 3, &value))
    {
        printf("第3个位置的元素是：%d\n", value);
    }
    else
    {
        printf("取值失败，位置不合法\n");
    }

    // 测试查找操作
    printf("\n--- 测试查找操作 ---\n");
    LNode *node = LocateElem(L, value);
    if (node != NULL)
    {
        printf("找到元素%d\n", node->data);
    }
    else
    {
        printf("未找到元素%d\n", value);
    }

    // 测试插入操作
    printf("\n--- 测试插入操作 ---\n");
    if (ListInsert(&L, 4, 99))
    {
        printf("在第4个位置插入99成功\n");
        PrintList(L);
    }
    else
    {
        printf("插入失败\n");
    }

    // 测试删除操作
    printf("\n--- 测试删除操作 ---\n");
    if (ListDelete(&L, 2, &value))
    {
        printf("删除第2个位置的元素成功，被删除的元素是：%d\n", value);
        PrintList(L);
    }
    else
    {
        printf("删除失败\n");
    }

    // 释放链表内存
    FreeList(&L);
    printf("\n链表内存已释放\n");

    return 0;
}