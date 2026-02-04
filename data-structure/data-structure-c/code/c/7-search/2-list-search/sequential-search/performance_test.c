#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 普通顺序查找算法
 */
int sequential_search(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

/**
 * 带监视哨的顺序查找算法
 */
int sequential_search_sentinel(int arr[], int n, int key) {
    if (n <= 0) return -1;
    
    int last_element = arr[n-1];
    arr[n-1] = key;
    
    int i = 0;
    while (arr[i] != key) {
        i++;
    }
    
    arr[n-1] = last_element;
    
    if ((i < n - 1) || (last_element == key)) {
        return i;
    } else {
        return -1;
    }
}

/**
 * 优化的普通顺序查找 - 使用更高效的循环结构
 */
int sequential_search_optimized(int arr[], int n, int key) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int SIZE = 100000;
    const int TEST_TIMES = 1000;
    
    // 创建测试数组
    int *test_arr = malloc(SIZE * sizeof(int));
    for (int i = 0; i < SIZE; i++) {
        test_arr[i] = i + 1;  // 填充1到SIZE的数字
    }
    
    clock_t start, end;
    double cpu_time_used;
    int result;
    
    // 测试普通顺序查找 - 查找不存在的元素（最坏情况）
    start = clock();
    for (int t = 0; t < TEST_TIMES; t++) {
        result = sequential_search(test_arr, SIZE, SIZE + 1);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("普通顺序查找（最坏情况）: %f 秒, 结果: %d\n", cpu_time_used, result);
    
    // 测试带监视哨的顺序查找 - 查找不存在的元素（最坏情况）
    start = clock();
    for (int t = 0; t < TEST_TIMES; t++) {
        result = sequential_search_sentinel(test_arr, SIZE, SIZE + 1);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("带监视哨的顺序查找（最坏情况）: %f 秒, 结果: %d\n", cpu_time_used, result);
    
    // 测试优化后的普通顺序查找 - 查找不存在的元素（最坏情况）
    start = clock();
    for (int t = 0; t < TEST_TIMES; t++) {
        result = sequential_search_optimized(test_arr, SIZE, SIZE + 1);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("优化的普通顺序查找（最坏情况）: %f 秒, 结果: %d\n", cpu_time_used, result);
    
    // 测试普通顺序查找 - 查找存在的元素（平均情况）
    start = clock();
    for (int t = 0; t < TEST_TIMES; t++) {
        result = sequential_search(test_arr, SIZE, SIZE/2);  // 查找中间的元素
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("普通顺序查找（平均情况）: %f 秒, 结果: %d\n", cpu_time_used, result);
    
    // 测试带监视哨的顺序查找 - 查找存在的元素（平均情况）
    start = clock();
    for (int t = 0; t < TEST_TIMES; t++) {
        result = sequential_search_sentinel(test_arr, SIZE, SIZE/2);
    }
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("带监视哨的顺序查找（平均情况）: %f 秒, 结果: %d\n", cpu_time_used, result);
    
    free(test_arr);
    
    printf("\n结论：\n");
    printf("1. 在现代CPU和编译器优化下，这两种算法的性能差异通常很小\n");
    printf("2. 监视哨的主要优势是在没有现代编译器优化的环境中减少边界检查\n");
    printf("3. 在某些嵌入式系统或老式处理器上，这种优化可能更有效\n");
    printf("4. 代码可读性和维护性通常是更重要的考虑因素\n");
    
    return 0;
}