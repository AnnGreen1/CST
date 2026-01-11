#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// 定义链栈节点结构
typedef int SElemType;  // 定义栈中元素的类型

typedef struct StackNode {
    SElemType data;                 // 数据域
    struct StackNode* next;         // 指向下一个节点的指针
} StackNode, *LinkStackPtr;        // 节点指针类型

// 定义链栈结构
typedef struct LinkStack {
    LinkStackPtr top;               // 栈顶指针
    int count;                      // 栈中元素个数
} *LinkStack;

// 构造一个空栈
LinkStack InitStack() {
    LinkStack s = (LinkStack)malloc(sizeof(struct LinkStack));
    if (s == NULL) {
        return NULL;
    }
    s->top = NULL;
    s->count = 0;
    return s;
}

// 销毁栈
void DestroyStack(LinkStack s) {
    if (s == NULL) {
        return;
    }
    
    LinkStackPtr temp;
    while (s->top != NULL) {
        temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
    free(s);
}

// 清空栈（将栈恢复为空栈状态）
void ClearStack(LinkStack s) {
    if (s == NULL) {
        return;
    }
    
    LinkStackPtr temp;
    while (s->top != NULL) {
        temp = s->top;
        s->top = s->top->next;
        free(temp);
    }
    s->count = 0;
}

// 判断栈是否为空
bool StackEmpty(LinkStack s) {
    if (s == NULL) {
        return true;
    }
    return s->top == NULL;
}

// 获取栈的长度
int StackLength(LinkStack s) {
    if (s == NULL) {
        return 0;
    }
    return s->count;
}

// 获取栈顶元素
bool GetTop(LinkStack s, SElemType* e) {
    if (s == NULL || s->top == NULL) {
        return false;  // 栈为空，无法获取栈顶元素
    }
    *e = s->top->data;
    return true;
}

// 入栈操作
bool Push(LinkStack s, SElemType e) {
    if (s == NULL) {
        return false;
    }
    
    LinkStackPtr p = (LinkStackPtr)malloc(sizeof(StackNode));
    if (p == NULL) {
        return false;  // 内存分配失败
    }
    
    p->data = e;
    p->next = s->top;      // 新节点指向原来的栈顶
    s->top = p;            // 更新栈顶指针
    s->count++;            // 栈元素个数加1
    
    return true;
}

// 出栈操作
bool Pop(LinkStack s, SElemType* e) {
    if (s == NULL || s->top == NULL) {  // 栈空
        return false;
    }
    
    LinkStackPtr p = s->top;
    *e = p->data;
    s->top = s->top->next;  // 栈顶指针指向下一个节点
    free(p);                // 释放原栈顶节点
    s->count--;             // 栈元素个数减1
    
    return true;
}

// 遍历栈中所有元素（用于测试）
void StackTraverse(LinkStack s) {
    if (s == NULL) {
        printf("Stack is NULL\n");
        return;
    }
    if (s->top == NULL) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack elements from top to bottom: ");
    LinkStackPtr current = s->top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// 反转栈
void ReverseStack(LinkStack s) {
    if (s == NULL || s->top == NULL || s->top->next == NULL) {
        return;  // 如果栈为空或只有一个元素，无需反转
    }
    
    // 将栈中所有元素出栈并存入一个数组
    SElemType* tempArray = (SElemType*)malloc(s->count * sizeof(SElemType));
    if (tempArray == NULL) {
        return;  // 内存分配失败
    }
    
    int index = 0;
    SElemType temp;
    while (!StackEmpty(s)) {
        Pop(s, &temp);
        tempArray[index++] = temp;
    }
    
    // 将数组中的元素重新入栈
    for (int i = 0; i < index; i++) {
        Push(s, tempArray[i]);
    }
    
    free(tempArray);
}

// 主函数用于测试
int main() {
    LinkStack s = InitStack();
    
    if (StackEmpty(s)) {
        printf("Stack is empty\n");
    }
    
    // 入栈操作
    printf("Pushing elements: 1, 2, 3, 4, 5\n");
    Push(s, 1);
    Push(s, 2);
    Push(s, 3);
    Push(s, 4);
    Push(s, 5);
    
    printf("Stack length: %d\n", StackLength(s));
    StackTraverse(s);
    
    // 获取栈顶元素
    SElemType top;
    if (GetTop(s, &top)) {
        printf("Top element: %d\n", top);
    }
    
    // 出栈操作
    SElemType popElem;
    if (Pop(s, &popElem)) {
        printf("Popped element: %d\n", popElem);
    }
    
    printf("Stack after pop: ");
    StackTraverse(s);
    
    // 反转栈
    ReverseStack(s);
    printf("Stack after reverse: ");
    StackTraverse(s);
    
    // 清空栈
    ClearStack(s);
    if (StackEmpty(s)) {
        printf("After clear, stack is empty\n");
    }
    
    // 销毁栈
    DestroyStack(s);
    
    return 0;
}