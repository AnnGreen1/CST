#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 100

// 定义栈元素类型为字符
typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

// 初始化栈
void initStack(Stack *stack) {
    stack->top = -1;
}

// 判断栈是否为空
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

// 入栈
bool push(Stack *stack, char ch) {
    if (stack->top >= MAX_SIZE - 1) {
        return false; // 栈满
    }
    stack->data[++stack->top] = ch;
    return true;
}

// 出栈
char pop(Stack *stack) {
    if (isEmpty(stack)) {
        return '\0'; // 返回空字符表示栈空
    }
    return stack->data[stack->top--];
}

// 获取栈顶元素（不弹出）
char peek(Stack *stack) {
    if (isEmpty(stack)) {
        return '\0';
    }
    return stack->data[stack->top];
}

// 检查两个括号是否匹配
bool isMatch(char open, char close) {
    return (open == '(' && close == ')') || 
           (open == '[' && close == ']') || 
           (open == '{' && close == '}');
}

// 括号匹配验证函数
bool isValid(char* s) {
    Stack stack;
    initStack(&stack);
    
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        // 如果是左括号，入栈
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            if (!push(&stack, s[i])) {
                return false; // 栈满，无法继续处理
            }
        } 
        // 如果是右括号，检查是否有对应的左括号匹配
        else if (s[i] == ')' || s[i] == ']' || s[i] == '}') {
            if (isEmpty(&stack)) {
                return false; // 没有对应的左括号
            }
            
            char topChar = pop(&stack);
            if (!isMatch(topChar, s[i])) {
                return false; // 括号类型不匹配
            }
        }
        // 如果是其他字符，忽略
    }
    
    // 最后栈应该为空，否则说明还有未匹配的左括号
    return isEmpty(&stack);
}

int main() {
    char testStr[1000];
    
    printf("请输入一个包含括号的字符串: ");
    fgets(testStr, sizeof(testStr), stdin);
    
    if (isValid(testStr)) {
        printf("匹配成功！\n");
    } else {
        printf("匹配失败！\n");
    }
    
    // 测试用例
    printf("\n=== 测试用例 ===\n");
    char* testCases[] = {
        "()",
        "()[]{}",
        "(]",
        "([)]",
        "{[]}",
        "((()))",
        "({[]})",
        "((())",
        "({)}",
        ""
    };
    
    int numTests = sizeof(testCases) / sizeof(testCases[0]);
    for (int i = 0; i < numTests; i++) {
        printf("%-10s -> %s\n", testCases[i], isValid(testCases[i]) ? "有效" : "无效");
    }
    
    return 0;
}