#include <stdio.h>
#include <stdlib.h>

// 定义广义表节点类型
typedef enum {
    Atom,  // 原子节点
    List   // 子表节点
} NodeType;

// 广义表节点结构
typedef struct GLNode {
    NodeType tag;  // 标志域：0表示原子，1表示子表
    union {
        int atom;                    // 原子值
        struct GLNode* ptr;          // 指向子表的指针
    } data;
    struct GLNode* next;  // 指向下一个节点的指针
} GLNode, *GList;

/**
 * 创建一个原子节点
 * @param value 原子的值
 * @return 新创建的原子节点
 */
GLNode* CreateAtom(int value) {
    GLNode* node = (GLNode*)malloc(sizeof(GLNode));
    if (node == NULL) {
        printf("内存分配失败\n");
        return NULL;
    }
    
    node->tag = Atom;
    node->data.atom = value;
    node->next = NULL;
    
    return node;
}

/**
 * 创建一个子表节点
 * @param sublist 子表的头节点
 * @return 新创建的子表节点
 */
GLNode* CreateList(GList sublist) {
    GLNode* node = (GLNode*)malloc(sizeof(GLNode));
    if (node == NULL) {
        printf("内存分配失败\n");
        return NULL;
    }
    
    node->tag = List;
    node->data.ptr = sublist;
    node->next = NULL;
    
    return node;
}

/**
 * 创建一个空的广义表
 * @return 空的广义表
 */
GList CreateEmptyList() {
    return NULL;
}

/**
 * 判断广义表是否为空
 * @param list 广义表
 * @return 1表示为空，0表示非空
 */
int IsEmpty(GList list) {
    return list == NULL;
}

/**
 * 取广义表的表头
 * @param list 广义表
 * @return 表头节点
 */
GLNode* GetHead(GList list) {
    if (IsEmpty(list)) {
        printf("错误：空表没有表头\n");
        return NULL;
    }
    return list;
}

/**
 * 取广义表的表尾
 * @param list 广义表
 * @return 表尾节点（是一个子表）
 */
GList GetTail(GList list) {
    if (IsEmpty(list)) {
        printf("错误：空表没有表尾\n");
        return NULL;
    }
    return list->next;
}

/**
 * 在广义表头部插入一个节点
 * @param list 广义表
 * @param node 要插入的节点
 * @return 插入后的广义表
 */
GList InsertFirst(GList list, GLNode* node) {
    if (node == NULL) {
        return list;
    }
    
    node->next = list;
    return node;
}

/**
 * 计算广义表的长度
 * @param list 广义表
 * @return 广义表的长度
 */
int Length(GList list) {
    int count = 0;
    GLNode* current = list;
    
    while (current != NULL) {
        count++;
        current = current->next;
    }
    
    return count;
}

/**
 * 深度遍历打印广义表
 * @param list 广义表
 */
void PrintGList(GList list) {
    if (list == NULL) {
        printf("()");
        return;
    }
    
    printf("(");
    GLNode* current = list;
    
    while (current != NULL) {
        if (current->tag == Atom) {
            printf("%d", current->data.atom);
        } else {
            printf("(");
            PrintGList(current->data.ptr);  // 递归打印子表
            printf(")");
        }
        
        if (current->next != NULL) {
            printf(",");
        }
        
        current = current->next;
    }
    printf(")");
}

/**
 * 销毁广义表，释放内存
 * @param list 广义表
 */
void DestroyGList(GList list) {
    if (list == NULL) {
        return;
    }
    
    GLNode* current = list;
    while (current != NULL) {
        GLNode* next = current->next;
        
        if (current->tag == List) {
            // 如果是子表，递归销毁子表
            DestroyGList(current->data.ptr);
        }
        
        free(current);
        current = next;
    }
}

/**
 * 复制广义表
 * @param list 要复制的广义表
 * @return 复制后的广义表
 */
GList CopyGList(GList list) {
    if (list == NULL) {
        return NULL;
    }
    
    // 创建新节点
    GLNode* new_node = (GLNode*)malloc(sizeof(GLNode));
    if (new_node == NULL) {
        printf("内存分配失败\n");
        return NULL;
    }
    
    new_node->tag = list->tag;
    
    if (list->tag == Atom) {
        // 复制原子值
        new_node->data.atom = list->data.atom;
    } else {
        // 递归复制子表
        new_node->data.ptr = CopyGList(list->data.ptr);
    }
    
    // 递归复制剩余部分
    new_node->next = CopyGList(list->next);
    
    return new_node;
}

// 测试函数
int main() {
    printf("广义表操作演示\n");
    printf("==================\n");
    
    // 创建一个广义表 (1, (2, 3), 4)
    // 步骤1: 创建子表 (2, 3)
    GLNode* node2 = CreateAtom(2);
    GLNode* node3 = CreateAtom(3);
    GList sublist = InsertFirst(NULL, node3);
    sublist = InsertFirst(sublist, node2);
    
    // 步骤2: 创建子表节点
    GLNode* sublist_node = CreateList(sublist);
    
    // 步骤3: 创建原子节点
    GLNode* node1 = CreateAtom(1);
    GLNode* node4 = CreateAtom(4);
    
    // 步骤4: 组合整个广义表
    GList mylist = InsertFirst(NULL, node4);
    mylist = InsertFirst(mylist, sublist_node);
    mylist = InsertFirst(mylist, node1);
    
    printf("创建的广义表: ");
    PrintGList(mylist);
    printf("\n");
    
    printf("广义表长度: %d\n", Length(mylist));
    
    // 测试取表头
    GLNode* head = GetHead(mylist);
    if (head != NULL) {
        printf("表头是: ");
        if (head->tag == Atom) {
            printf("%d (原子)\n", head->data.atom);
        } else {
            printf("(");
            PrintGList(head->data.ptr);
            printf(") (子表)\n");
        }
    }
    
    // 测试取表尾
    GList tail = GetTail(mylist);
    if (tail != NULL) {
        printf("表尾是: ");
        PrintGList(tail);
        printf("\n");
    } else {
        printf("表尾为空\n");
    }
    
    // 创建另一个广义表 (5, 6)
    GLNode* node5 = CreateAtom(5);
    GLNode* node6 = CreateAtom(6);
    GList list2 = InsertFirst(NULL, node6);
    list2 = InsertFirst(list2, node5);
    
    printf("\n另一个广义表: ");
    PrintGList(list2);
    printf("\n");
    
    // 测试复制功能
    GList copied_list = CopyGList(mylist);
    printf("复制的广义表: ");
    PrintGList(copied_list);
    printf("\n");
    
    // 验证表头表尾操作
    printf("\n验证表头表尾操作:\n");
    printf("原表: ");
    PrintGList(mylist);
    printf("\n");
    
    GLNode* h = GetHead(mylist);
    GList t = GetTail(mylist);
    
    printf("表头: ");
    if (h->tag == Atom) {
        printf("%d\n", h->data.atom);
    } else {
        PrintGList(h->data.ptr);
        printf("\n");
    }
    
    printf("表尾: ");
    PrintGList(t);
    printf("\n");
    
    // 释放内存
    DestroyGList(mylist);
    DestroyGList(list2);
    DestroyGList(copied_list);
    
    printf("\n内存已释放\n");
    
    return 0;
}