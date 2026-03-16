#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * KMP算法（Knuth-Morris-Pratt算法）
 * 
 * KMP算法是一种高效的字符串匹配算法，相比于BF算法的O(m*n)时间复杂度，
 * KMP算法的时间复杂度为O(m+n)，其中m为主串长度，n为模式串长度。
 * 
 * 核心思想：
 * 1. 当发生失配时，不需要回溯主串指针，只需将模式串向右滑动到适当位置
 * 2. 利用已经匹配的部分中相同的"前缀"和"后缀"来决定模式串的移动位置
 * 3. 预先计算next数组（也称failure function），记录每个位置失配时应该跳转的位置
 */

/**
 * 计算模式串的next数组（部分匹配表）- KMP算法的核心
 * 
 * get_next函数的作用：
 * 1. 分析模式串自身的结构特征，找出每个位置之前的子串中存在的"公共前后缀"
 * 2. next[j]表示模式串中从0到j-1这段子串的最长公共前后缀的长度
 * 
 * 什么是公共前后缀？
 * - 前缀：包含首字符但不包含尾字符的所有子串（如"ABCD"的前缀有："A", "AB", "ABC"）
 * - 后缀：包含尾字符但不包含首字符的所有子串（如"ABCD"的后缀有："BCD", "CD", "D"）
 * - 公共前后缀：既是前缀又是后缀的子串
 * 
 * 举例说明：模式串"ABCDABD"
 * 位置0: "" -> 无公共前后缀 -> next[0] = -1
 * 位置1: "A" -> 无公共前后缀 -> next[1] = 0
 * 位置2: "AB" -> 无公共前后缀 -> next[2] = 0
 * 位置3: "ABC" -> 无公共前后缀 -> next[3] = 0
 * 位置4: "ABCD" -> 无公共前后缀 -> next[4] = 0
 * 位置5: "ABCDA" -> 公共前后缀"A" -> next[5] = 1
 * 位置6: "ABCDAB" -> 公共前后缀"AB" -> next[6] = 2
 * 
 * get_next算法的工作过程：
 * - i指向当前正在计算next值的位置
 * - j表示当前位置的最长公共前后缀长度（同时也是可能的下一个字符的匹配位置）
 * - 当T[i] == T[j]时，说明可以在之前的基础上扩展一位公共前后缀，因此next[i+1] = j+1
 * - 当T[i] != T[j]时，需要回溯到更短的公共前后缀位置继续尝试匹配
 * 
 * @param T 模式串
 * @param next 存储next数组的数组
 * @param len_T 模式串长度
 */
void get_next(char* T, int* next, int len_T) {
    int i = 0;  // 模式串的索引，用于构建next数组
    int j = -1; // 当前最长公共前后缀的长度，初始为-1
    
    // 设置第一个位置的值为-1，表示从头开始匹配
    next[0] = -1;
    
    // 从第二个位置开始计算next数组
    while (i < len_T - 1) {
        // 如果j == -1，说明已经回退到模式串开头，或者当前字符匹配
        if (j == -1 || T[i] == T[j]) {
            i++;
            j++;
            
            // next[i] = j 表示在位置i处失配时，应该跳转到位置j继续匹配
            // 这里进行优化：如果T[i] == T[j]，为了避免不必要的比较，可以进一步优化
            if (T[i] != T[j]) {
                next[i] = j;
            } else {
                // 如果T[i] == T[j]，则next[i] = next[j]
                // 这是为了避免在匹配失败后又回到相同的字符进行比较
                next[i] = next[j];
            }
        } else {
            // 如果当前字符不匹配，则根据next数组回退j指针
            // 这是KMP算法的核心：利用已匹配的信息快速定位到下一个可能匹配的位置
            j = next[j];
        }
    }
}

/**
 * 为了更好地理解get_next函数，我们可以看一个具体例子
 * 模式串"ABABA"的next数组计算过程：
 * 
 * 步骤分析：
 * 1. 初始化：i=0, j=-1 → next[0]=-1, 然后i=1, j=0
 * 2. T[1]='B' != T[0]='A' → j = next[j] = next[0] = -1 → j = next[0] = -1
 * 3. j==-1 → i=2, j=0 → next[2]=0
 * 4. T[2]='A' == T[0]='A' → i=3, j=1 → next[3]=1
 * 5. T[3]='B' == T[1]='B' → i=4, j=2 → next[4]=2
 * 6. 结束
 * 
 * 所以对于"ABABA"，next数组为[-1, 0, 0, 1, 2]
 * 
 * 当我们在匹配过程中发现某个位置不匹配时，比如在位置4处失配，
 * 我们可以直接跳转到next[4]=2的位置继续匹配，而不是从头开始。
 */

/**
 * KMP算法主体实现
 * 
 * @param S 主串
 * @param T 模式串
 * @param pos 从主串的第几个字符开始匹配（下标从0开始）
 * @return 成功返回匹配的起始位置，失败返回-1
 */
int Index_KMP(char* S, char* T, int pos) {
    int len_S = strlen(S);  // 主串长度
    int len_T = strlen(T);  // 模式串长度
    
    // 分配next数组内存
    int* next = (int*)malloc(sizeof(int) * len_T);
    
    // 计算next数组 - 这是KMP算法的关键预处理步骤
    get_next(T, next, len_T);
    
    int i = pos;  // 主串的索引
    int j = 0;    // 模式串的索引
    
    // 当主串和模式串都没有遍历完时继续比较
    while (i < len_S && j < len_T) {
        // 如果j == -1，说明已经回退到模式串开头，需要从头开始匹配
        // 或者当前字符匹配成功，则继续比较下一个字符
        if (j == -1 || S[i] == T[j]) {
            i++;
            j++;
        } else {
            // 如果当前字符匹配失败，则根据next数组移动模式串
            // 这是KMP算法的关键：不回溯主串指针i，而是根据next数组调整模式串位置
            j = next[j];
        }
    }
    
    // 释放next数组内存
    free(next);
    
    // 判断是否匹配完整个模式串
    if (j >= len_T) {
        // 匹配成功，返回匹配的起始位置
        return i - len_T;
    } else {
        // 匹配失败
        return -1;
    }
}

/**
 * 优化版的next数组计算方法，进一步优化匹配效率
 * 
 * 在原来的基础上进一步优化：如果T[i] == T[next[i]]，那么我们还可以继续优化
 * 因为如果按原来的跳转会跳到next[i]，然后发现T[next[i]] != S[k]（当前字符）
 * 但是我们知道T[i] == T[next[i]]，所以这次比较是不必要的
 */
void get_nextval(char* T, int* nextval, int len_T) {
    int i = 0;
    int j = -1;
    
    nextval[0] = -1;
    
    while (i < len_T - 1) {
        if (j == -1 || T[i] == T[j]) {
            i++;
            j++;
            // 相比get_next函数，这里不再判断T[i]是否等于T[j]
            // 因为在get_next中已经做了优化处理
            nextval[i] = j;
        } else {
            j = nextval[j];
        }
    }
}

/**
 * 使用优化的nextval数组的KMP算法
 */
int Index_KMP_optimized(char* S, char* T, int pos) {
    int len_S = strlen(S);
    int len_T = strlen(T);
    
    int* nextval = (int*)malloc(sizeof(int) * len_T);
    
    get_nextval(T, nextval, len_T);
    
    int i = pos;
    int j = 0;
    
    while (i < len_S && j < len_T) {
        if (j == -1 || S[i] == T[j]) {
            i++;
            j++;
        } else {
            j = nextval[j];
        }
    }
    
    free(nextval);
    
    if (j >= len_T) {
        return i - len_T;
    } else {
        return -1;
    }
}

// 测试函数
int main() {
    char S[] = "BBC ABCDAB ABCDABCDABDE";
    char T[] = "ABCDABD";
    
    printf("主串: %s\n", S);
    printf("模式串: %s\n", T);
    
    int pos = 0;
    
    // 测试KMP算法
    int result1 = Index_KMP(S, T, pos);
    printf("\n使用KMP算法:\n");
    if (result1 != -1) {
        printf("在位置 %d 找到匹配!\n", result1);
        printf("匹配的子串: %.*s\n", (int)strlen(T), S + result1);
    } else {
        printf("未找到匹配!\n");
    }
    
    // 测试优化的KMP算法
    int result2 = Index_KMP_optimized(S, T, pos);
    printf("\n使用优化KMP算法:\n");
    if (result2 != -1) {
        printf("在位置 %d 找到匹配!\n", result2);
        printf("匹配的子串: %.*s\n", (int)strlen(T), S + result2);
    } else {
        printf("未找到匹配!\n");
    }
    
    // 展示next数组的计算过程
    printf("\n=== Next数组计算演示 ===\n");
    int len_T = strlen(T);
    int* next = (int*)malloc(sizeof(int) * len_T);
    get_next(T, next, len_T);
    
    printf("模式串: ");
    for (int i = 0; i < len_T; i++) {
        printf("%c ", T[i]);
    }
    printf("\n");
    
    printf("Next数组: ");
    for (int i = 0; i < len_T; i++) {
        printf("%d ", next[i]);
    }
    printf("\n");
    
    // 详细解释next数组的意义
    printf("\nNext数组含义解释:\n");
    for (int i = 0; i < len_T; i++) {
        if (next[i] == -1 && i == 0) {
            printf("位置%d('%c'): %d (特殊标记，表示从头开始)\n", i, T[i], next[i]);
        } else if (next[i] == 0) {
            printf("位置%d('%c'): %d (无公共前后缀)\n", i, T[i], next[i]);
        } else {
            printf("位置%d('%c'): %d (最长公共前后缀长度为%d)\n", i, T[i], next[i], next[i]);
        }
    }
    
    // 释放内存
    free(next);
    
    // 测试另一个例子
    printf("\n=== 测试另一个例子 ===\n");
    char S2[] = "ABABABCABABABABCABABA";
    char T2[] = "ABABABCABA";
    
    printf("主串: %s\n", S2);
    printf("模式串: %s\n", T2);
    
    int result3 = Index_KMP(S2, T2, 0);
    printf("KMP算法结果: %d\n", result3);
    
    int result4 = Index_KMP_optimized(S2, T2, 0);
    printf("优化KMP算法结果: %d\n", result4);
    
    // 显示第二个例子的next数组
    int len_T2 = strlen(T2);
    int* next2 = (int*)malloc(sizeof(int) * len_T2);
    get_next(T2, next2, len_T2);
    
    printf("模式串: ");
    for (int i = 0; i < len_T2; i++) {
        printf("%c ", T2[i]);
    }
    printf("\n");
    
    printf("Next数组: ");
    for (int i = 0; i < len_T2; i++) {
        printf("%d ", next2[i]);
    }
    printf("\n");
    
    printf("\n详细解释get_next函数的工作原理:\n");
    printf("1. get_next函数分析模式串的自身重复特性\n");
    printf("2. next数组记录了当某个位置失配时，模式串应该跳转到哪个位置继续匹配\n");
    printf("3. 这样避免了在匹配失败时回溯主串指针，从而提高了匹配效率\n");
    printf("4. 本质上是利用模式串自身的结构特性，减少不必要的比较\n");
    
    free(next2);
    
    return 0;
}