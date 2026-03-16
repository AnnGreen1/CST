#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * BF算法（暴力搜索算法/朴素匹配算法）
 * 
 * BF算法是一种简单的字符串匹配算法，其基本思想是：
 * 对于主串S和模式串T，从主串的第pos个字符开始，和模式串的字符逐个比较，
 * 如果相等则继续比较下一个字符，如果不等则将主串的位置回溯到下一个起始位置，
 * 再次与模式串的第一个字符比较，直到模式串的所有字符都匹配成功或者主串剩余字符不足为止。
 * 
 * @param S 主串
 * @param T 模式串
 * @param pos 从主串的第几个字符开始匹配（下标从0开始）
 * @return 成功返回匹配的起始位置，失败返回-1
 */
int Index_BF(char* S, char* T, int pos) {
    int i = pos;  // 主串S的索引，从指定位置开始
    int j = 0;    // 模式串T的索引，从0开始
    
    // 获取两个字符串的长度
    int len_S = strlen(S);
    int len_T = strlen(T);
    
    // 当主串和模式串都没有遍历完时继续比较
    while (i < len_S && j < len_T) {
        // 如果当前字符匹配成功，则比较下一个字符
        if (S[i] == T[j]) {
            i++;
            j++;
        } else {
            // 如果当前字符匹配失败，则回溯到下一个起始位置
            // 主串回到本次匹配开始位置的下一个位置
            i = i - j + 1; 
            // 模式串回到开头重新开始匹配
            j = 0;
        }
    }
    
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
 * 更优化的BF算法实现（减少不必要的比较）
 * 
 * 优化点：
 * 1. 减少了边界检查的次数：通过for循环的条件限制，避免了在每次比较后都要检查i是否越界
 * 2. 避免了无效的匹配尝试：当主串剩余字符数量少于模式串长度时，提前终止循环
 *    即：i <= len_S - len_T 这个条件确保了只有在可能匹配的情况下才进行比较
 * 3. 逻辑更清晰：外层循环确定起始位置，内层循环尝试完整匹配
 * 4. 减少了指针回溯：在基础版本中，当匹配失败时需要手动调整i和j的值
 *    而优化版本中，每次内层循环结束后，i自然地递增到下一个起始位置
 */
int Index_BF_Optimized(char* S, char* T, int pos) {
    int len_S = strlen(S);
    int len_T = strlen(T);
    
    // 循环条件：主串还有字符，且剩余字符不少于模式串
    // 这是关键优化点：i <= len_S - len_T 确保了只有在主串剩余字符足够时才进行匹配
    // 避免了在剩余字符不够的情况下进行无效的匹配尝试
    for (int i = pos; i <= len_S - len_T; i++) {
        int j;
        // 尝试从位置i开始匹配整个模式串
        for (j = 0; j < len_T; j++) {
            if (S[i+j] != T[j]) {
                break;  // 发现不匹配，跳出内层循环，尝试下一个起始位置
            }
        }
        
        // 如果j等于模式串长度，说明完全匹配成功
        if (j == len_T) {
            return i;  // 返回匹配的起始位置
        }
    }
    
    return -1;  // 所有可能位置都尝试过但未找到匹配
}

// 测试函数
int main() {
    char S[] = "Hello, this is a test string for pattern matching!";
    char T[] = "test";
    
    printf("主串: %s\n", S);
    printf("模式串: %s\n", T);
    
    int pos = 0;  // 从主串的第0个位置开始匹配
    
    int result1 = Index_BF(S, T, pos);
    printf("\n使用基础BF算法:\n");
    if (result1 != -1) {
        printf("在位置 %d 找到匹配!\n", result1);
        printf("匹配的子串: %.*s\n", (int)strlen(T), S + result1);
    } else {
        printf("未找到匹配!\n");
    }
    
    int result2 = Index_BF_Optimized(S, T, pos);
    printf("\n使用优化BF算法:\n");
    if (result2 != -1) {
        printf("在位置 %d 找到匹配!\n", result2);
        printf("匹配的子串: %.*s\n", (int)strlen(T), S + result2);
    } else {
        printf("未找到匹配!\n");
    }
    
    // 测试其他例子
    printf("\n=== 测试其他例子 ===\n");
    char S2[] = "ABABCABABA";
    char T2[] = "ABABA";
    
    printf("主串: %s\n", S2);
    printf("模式串: %s\n", T2);
    
    int result3 = Index_BF(S2, T2, 0);
    printf("使用基础BF算法结果: %d\n", result3);
    
    int result4 = Index_BF_Optimized(S2, T2, 0);
    printf("使用优化BF算法结果: %d\n", result4);
    
    // 性能对比测试
    printf("\n=== 性能对比测试 ===\n");
    char S3[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAB";
    char T3[] = "AAAAAAAAAB";
    
    printf("主串长度: %zu, 模式串长度: %zu\n", strlen(S3), strlen(T3));
    
    // 测试基础算法的执行次数
    int count1 = 0;
    int i = 0, j = 0;
    int len_S3 = strlen(S3);
    int len_T3 = strlen(T3);
    
    while (i < len_S3 && j < len_T3) {
        count1++;  // 记录比较次数
        if (S3[i] == T3[j]) {
            i++;
            j++;
        } else {
            i = i - j + 1; 
            j = 0;
        }
    }
    printf("基础BF算法字符比较次数: %d\n", count1);
    
    // 重置变量测试优化算法的执行次数
    count1 = 0;
    for (int i = 0; i <= len_S3 - len_T3; i++) {
        int j;
        for (j = 0; j < len_T3; j++) {
            count1++;  // 记录比较次数
            if (S3[i+j] != T3[j]) {
                break;
            }
        }
        if (j == len_T3) {
            break;  // 找到匹配就退出
        }
    }
    printf("优化BF算法字符比较次数: %d\n", count1);
    
    return 0;
}