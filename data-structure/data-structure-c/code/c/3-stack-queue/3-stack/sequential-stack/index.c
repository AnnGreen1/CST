#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 100
typedef int SElemType;  // 定义栈中元素的类型

// 定义顺序栈结构
typedef struct {
    SElemType data[MAXSIZE];  // 存储栈中元素的数组
    int top;                  // 栈顶指针
} SqStack;

// 构造一个空栈
SqStack* InitStack() {
    SqStack* s = (SqStack*)malloc(sizeof(SqStack));
    if (s == NULL) {
        return NULL;
    }
    s->top = -1;  // 初始化栈顶指针为-1，表示空栈
    return s;
}

// 销毁栈
void DestroyStack(SqStack* s) {
    if (s != NULL) {
        free(s);
    }
}

// 清空栈
void ClearStack(SqStack* s) {
    if (s != NULL) {
        s->top = -1;  // 将栈顶指针重置为-1，表示空栈
    }
}

// 判断栈是否为空
bool StackEmpty(SqStack* s) {
    if (s == NULL) {
        return true;
    }
    return s->top == -1;
}

// 获取栈的长度
int StackLength(SqStack* s) {
    if (s == NULL) {
        return 0;
    }
    return s->top + 1;
}

// 获取栈顶元素
bool GetTop(SqStack* s, SElemType* e) {
    if (s == NULL || s->top == -1) {
        return false;  // 栈为空，无法获取栈顶元素
    }
    *e = s->data[s->top];
    return true;
}

// 入栈操作
bool Push(SqStack* s, SElemType e) {
    if (s == NULL) {
        return false;
    }
    if (s->top == MAXSIZE - 1) {  // 栈满
        return false;
    }
    s->top++;                    // 栈顶指针加1
    s->data[s->top] = e;         // 将元素e放入栈顶
    return true;
}

// 出栈操作
bool Pop(SqStack* s, SElemType* e) {
    if (s == NULL || s->top == -1) {  // 栈空
        return false;
    }
    *e = s->data[s->top];        // 获取栈顶元素
    s->top--;                    // 栈顶指针减1
    return true;
}

// 遍历栈中所有元素（用于测试）
void StackTraverse(SqStack* s) {
    if (s == NULL) {
        printf("Stack is NULL\n");
        return;
    }
    if (s->top == -1) {
        printf("Stack is empty\n");
        return;
    }
    
    printf("Stack elements from top to bottom: ");
    for (int i = s->top; i >= 0; i--) {
        printf("%d ", s->data[i]);
    }
    printf("\n");
}

// 反转栈
void ReverseStack(SqStack* s) {
    if (s == NULL || s->top <= 0) {
        return;  // 如果栈为空或只有一个元素，无需反转
    }
    
    // 使用辅助数组反转栈中元素
    SElemType temp[MAXSIZE];
    int size = s->top + 1;
    
    // 将栈中元素复制到临时数组中，顺序与原栈相反
    for (int i = 0; i < size; i++) {
        temp[i] = s->data[s->top - i];
    }
    
    // 将临时数组中的元素复制回栈中
    for (int i = 0; i < size; i++) {
        s->data[i] = temp[i];
    }
    
    // 栈顶指针位置不变
}

// 主函数用于测试
int main() {
    SqStack* s = InitStack();
    
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