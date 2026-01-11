#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 100

// 定义顺序栈结构
typedef struct {
    int data[MAXSIZE];  // 存储栈中元素的数组
    int top;            // 栈顶指针
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

// 入栈操作
bool Push(SqStack* s, int e) {
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
bool Pop(SqStack* s, int* e) {
    if (s == NULL || s->top == -1) {  // 栈空
        return false;
    }
    *e = s->data[s->top];        // 获取栈顶元素
    s->top--;                    // 栈顶指针减1
    return true;
}

// 判断栈是否为空
bool StackEmpty(SqStack* s) {
    if (s == NULL) {
        return true;
    }
    return s->top == -1;
}

// 数制转换函数：将十进制数转换为base进制数
void conversion(int decimal, int base) {
    SqStack* s = InitStack();
    if (s == NULL) {
        printf("内存分配失败！\n");
        return;
    }
    
    int remainder;  // 余数
    int quotient = decimal;  // 商
    
    // 当商不为0时，持续进行转换
    while (quotient != 0) {
        remainder = quotient % base;  // 计算余数
        Push(s, remainder);          // 将余数压入栈
        quotient = quotient / base;   // 更新商
    }
    
    // 从栈中弹出元素并输出，得到转换后的结果
    printf("十进制数 %d 转换为 %d 进制数为: ", decimal, base);
    int digit;
    while (!StackEmpty(s)) {
        Pop(s, &digit);
        if (digit < 10) {
            printf("%d", digit);
        } else {
            // 对于10以上的数字，使用字母表示 (A=10, B=11, ...)
            printf("%c", 'A' + digit - 10);
        }
    }
    printf("\n");
    
    // 销毁栈
    DestroyStack(s);
}

// 主函数用于测试
int main() {
    int decimal, base;
    
    printf("数制转换程序\n");
    printf("请输入一个十进制数: ");
    scanf("%d", &decimal);
    
    if (decimal < 0) {
        printf("请输入非负整数！\n");
        return 1;
    }
    
    printf("请输入目标进制 (2-36): ");
    scanf("%d", &base);
    
    if (base < 2 || base > 36) {
        printf("进制数应在2到36之间！\n");
        return 1;
    }
    
    // 执行数制转换
    conversion(decimal, base);
    
    // 额外演示一些常见转换
    printf("\n以下是一些常见转换示例：\n");
    conversion(10, 2);   // 10 转换为二进制
    conversion(255, 2);  // 255 转换为二进制
    conversion(255, 8);  // 255 转换为八进制
    conversion(255, 16); // 255 转换为十六进制
    conversion(100, 16); // 100 转换为十六进制
    
    return 0;
}