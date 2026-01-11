#include <stdio.h>
#include <stdlib.h>

// 定义循环链表节点结构
typedef struct CLNode {
    int data;                   // 数据域
    struct CLNode *next;        // 指针域
} CLNode, *CLinkList;           // CLNode是结构体名，CLinkList是指向CLNode的指针类型

/**
 * 循环链表的初始化操作
 * 操作逻辑：创建一个空的循环链表，即只有头节点，next指针指向自己
 * @param L 用于接收链表头指针的指针
 * @return 成功返回1，失败返回0
 */
int InitList(CLinkList *L) {
    // 分配头节点内存空间
    *L = (CLNode *)malloc(sizeof(CLNode));
    if (!(*L)) {  // 检查内存分配是否成功
        return 0;
    }
    // 将头节点的next指针指向自己，形成循环
    (*L)->next = *L;
    return 1;
}

/**
 * 判断循环链表是否为空
 * @param L 链表头指针
 * @return 为空返回1，非空返回0
 */
int IsEmpty(CLinkList L) {
    // 如果头节点的next指针指向自己，则链表为空
    return L->next == L;
}

/**
 * 获取循环链表长度
 * 操作逻辑：从第一个节点开始遍历，直到回到头节点
 * @param L 链表头指针
 * @return 链表长度
 */
int ListLength(CLinkList L) {
    int count = 0;
    CLNode *p = L->next;    // p指向第一个数据节点
    
    // 遍历直到回到头节点
    while (p != L) {
        count++;
        p = p->next;
    }
    
    return count;
}

/**
 * 循环链表的取值操作（按位查找）
 * 操作逻辑：从头节点开始遍历，找到第i个节点并返回其数据
 * @param L 链表头指针
 * @param i 位置索引（从1开始计数）
 * @param e 用于接收元素值的指针
 * @return 成功返回1，失败返回0
 */
int GetElem(CLinkList L, int i, int *e) {
    int j = 1;              // 计数器，从第1个节点开始
    CLNode *p = L->next;    // p指向第一个数据节点
    
    // 检查位置是否合法
    if (i < 1) {
        return 0;
    }
    
    // 遍历到第i个节点
    while (p != L && j < i) {   // p != L 确保不会无限循环
        p = p->next;
        j++;
    }
    
    // 检查是否找到第i个节点
    if (p == L || j > i) {
        return 0;  // 未找到
    }
    
    *e = p->data;  // 获取第i个节点的数据
    return 1;
}

/**
 * 循环链表的查找操作（按值查找）
 * 操作逻辑：从第一个数据节点开始，依次比较节点数据域与给定值
 * @param L 链表头指针
 * @param e 要查找的元素值
 * @return 找到返回该节点指针，未找到返回头节点指针
 */
CLNode* LocateElem(CLinkList L, int e) {
    CLNode *p = L->next;  // p指向第一个数据节点
    
    // 遍历链表直到回到头节点
    while (p != L) {
        if (p->data == e) {  // 找到匹配的节点
            return p;
        }
        p = p->next;
    }
    
    return L;  // 未找到，返回头节点指针
}

/**
 * 循环链表的插入操作（在第i个位置前插入元素）
 * 操作逻辑：找到第i-1个节点，修改指针完成插入
 * @param L 链表头指针
 * @param i 插入位置（从1开始计数）
 * @param e 要插入的元素值
 * @return 成功返回1，失败返回0
 */
int ListInsert(CLinkList *L, int i, int e) {
    int j = 0;              // 计数器，从头节点开始计为第0个
    CLNode *p = *L;         // p指向头节点，j=0
    CLNode *s;              // 新节点指针
    
    // 查找第i-1个节点
    while (p->next != *L && j < i-1) {  // 防止越界
        p = p->next;
        j++;
    }
    
    // 检查插入位置是否合法
    if (j > i-1) {
        return 0;
    }
    
    // 创建新节点
    s = (CLNode *)malloc(sizeof(CLNode));
    if (!s) {  // 检查内存分配是否成功
        return 0;
    }
    
    s->data = e;      // 设置新节点数据
    s->next = p->next;  // 新节点的next指向第i个节点
    p->next = s;      // 第i-1个节点的next指向新节点
    
    return 1;
}

/**
 * 循环链表的删除操作（删除第i个位置的元素）
 * 操作逻辑：找到第i-1个节点，修改指针跳过第i个节点，并释放其内存
 * @param L 链表头指针
 * @param i 删除位置（从1开始计数）
 * @param e 用于接收被删除元素值的指针
 * @return 成功返回1，失败返回0
 */
int ListDelete(CLinkList *L, int i, int *e) {
    int j = 0;              // 计数器，从头节点开始计为第0个
    CLNode *p = *L;         // p指向头节点
    CLNode *q;              // 要删除的节点指针
    
    // 查找第i-1个节点
    while (p->next != *L && j < i-1) {  // 防止越界
        p = p->next;
        j++;
    }
    
    // 检查删除位置是否合法
    if (p->next == *L || j > i-1) {
        return 0;
    }
    
    q = p->next;            // q指向第i个节点
    *e = q->data;           // 保存被删除节点的数据
    p->next = q->next;      // 将第i-1个节点的next指向第i+1个节点
    free(q);                // 释放被删除节点的内存
    
    return 1;
}

/**
 * 循环链表的创建操作（尾插法）
 * 操作逻辑：从一个空表开始，每读入一个数据元素则创建一个新节点，
 *           使用尾插法将新节点插入到当前链表的表尾
 * @param L 用于接收链表头指针的指针
 * @param n 要创建的节点个数
 */
void CreateList(CLinkList *L, int n) {
    int i;
    int data;
    CLNode *p, *r;
    
    // 初始化空循环链表
    *L = (CLNode *)malloc(sizeof(CLNode));
    (*L)->next = *L;  // 头节点指向自己
    r = *L;           // r始终指向尾节点
    
    printf("请输入%d个数据:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        
        // 创建新节点
        p = (CLNode *)malloc(sizeof(CLNode));
        p->data = data;
        
        // 尾插法：将新节点连接到表尾
        p->next = r->next;  // 新节点指向头节点
        r->next = p;        // 原尾节点指向新节点
        r = p;              // r指向新的尾节点
    }
}

/**
 * 打印循环链表的所有元素
 * @param L 链表头指针
 */
void PrintList(CLinkList L) {
    CLNode *p = L->next;  // p指向第一个数据节点
    
    if (p == L) {  // 空链表
        printf("循环链表为空\n");
        return;
    }
    
    printf("循环链表内容：");
    while (p != L) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

/**
 * 释放循环链表的内存
 * @param L 链表头指针
 */
void FreeList(CLinkList *L) {
    CLNode *p = (*L)->next;
    CLNode *q;
    
    // 如果是空链表，直接释放头节点
    if (p == *L) {
        free(*L);
        *L = NULL;
        return;
    }
    
    // 释放所有数据节点
    while (p != *L) {
        q = p->next;
        free(p);
        p = q;
    }
    
    // 释放头节点
    free(*L);
    *L = NULL;
}

// 主函数，演示循环链表的各种操作
int main() {
    CLinkList L;
    int result, value;
    
    // 初始化循环链表
    if (InitList(&L)) {
        printf("循环链表初始化成功\n");
    } else {
        printf("循环链表初始化失败\n");
        return -1;
    }
    
    printf("链表是否为空: %s\n", IsEmpty(L) ? "是" : "否");
    
    // 创建包含5个元素的链表
    CreateList(&L, 5);
    
    printf("\n--- 创建后的循环链表 ---\n");
    PrintList(L);
    printf("链表长度: %d\n", ListLength(L));
    
    // 测试取值操作
    printf("\n--- 测试取值操作 ---\n");
    if (GetElem(L, 3, &value)) {
        printf("第3个位置的元素是：%d\n", value);
    } else {
        printf("取值失败，位置不合法\n");
    }
    
    // 测试查找操作
    printf("\n--- 测试查找操作 ---\n");
    CLNode *node = LocateElem(L, value);
    if (node != L) {
        printf("找到元素%d\n", node->data);
    } else {
        printf("未找到元素\n");
    }
    
    // 测试插入操作
    printf("\n--- 测试插入操作 ---\n");
    if (ListInsert(&L, 4, 99)) {
        printf("在第4个位置插入99成功\n");
        PrintList(L);
        printf("链表长度: %d\n", ListLength(L));
    } else {
        printf("插入失败\n");
    }
    
    // 测试删除操作
    printf("\n--- 测试删除操作 ---\n");
    if (ListDelete(&L, 2, &value)) {
        printf("删除第2个位置的元素成功，被删除的元素是：%d\n", value);
        PrintList(L);
        printf("链表长度: %d\n", ListLength(L));
    } else {
        printf("删除失败\n");
    }
    
    // 释放链表内存
    FreeList(&L);
    printf("\n链表内存已释放\n");
    
    return 0;
}