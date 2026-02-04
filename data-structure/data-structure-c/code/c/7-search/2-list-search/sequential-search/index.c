#include <stdio.h>
#include <stdlib.h>

/**
 * 普通顺序查找算法
 * 在数组中从头开始逐个比较元素，直到找到目标值或遍历完整个数组
 * 
 * @param arr 待查找的数组
 * @param n 数组长度
 * @param key 要查找的关键字
 * @return 如果找到返回元素下标，否则返回-1
 */
int sequential_search(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {  // 找到目标值
            return i;         // 返回下标
        }
    }
    return -1;  // 未找到，返回-1
}

/**
 * 带监视哨的顺序查找算法
 * 将要查找的值放在数组末尾作为监视哨，可以减少每次循环中的边界检查
 * 
 * @param arr 待查找的数组（注意：此算法会临时修改数组最后一个元素）
 * @param n 数组长度
 * @param key 要查找的关键字
 * @return 如果找到原数组中(非监视哨)的元素返回下标，否则返回-1
 */
int sequential_search_sentinel(int arr[], int n, int key) {
    if (n <= 0) return -1;
    
    int last_element = arr[n-1];      // 保存数组最后一个元素的值
    arr[n-1] = key;                   // 将key设为监视哨（替换最后一个元素）
    
    int i = 0;
    while (arr[i] != key) {           // 循环直到找到key
        i++;
    }
    
    arr[n-1] = last_element;          // 恢复最后一个元素的原始值
    
    // 如果在最后一个位置找到key，需要进一步确认是不是原来的值
    if ((i < n - 1) || (last_element == key)) {
        return i;                     // 返回找到的位置
    } else {
        return -1;                    // 实际上没找到
    }
}

// 测试函数
int main() {
    int arr1[] = {5, 2, 8, 1, 9, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 9;
    
    printf("数组元素为: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    // 普通顺序查找
    int pos1 = sequential_search(arr1, n, key);
    if (pos1 != -1) {
        printf("普通顺序查找: 找到 %d 在位置 %d\n", key, pos1);
    } else {
        printf("普通顺序查找: 未找到 %d\n", key);
    }
    
    // 带监视哨的顺序查找
    int arr2[] = {5, 2, 8, 1, 9, 3};  // 使用副本进行测试
    int pos2 = sequential_search_sentinel(arr2, n, key);
    if (pos2 != -1) {
        printf("带监视哨的顺序查找: 找到 %d 在位置 %d\n", key, pos2);
    } else {
        printf("带监视哨的顺序查找: 未找到 %d\n", key);
    }
    
    // 额外测试未找到的情况
    key = 10;
    pos1 = sequential_search(arr1, n, key);
    if (pos1 != -1) {
        printf("普通顺序查找: 找到 %d 在位置 %d\n", key, pos1);
    } else {
        printf("普通顺序查找: 未找到 %d\n", key);
    }
    
    int arr3[] = {5, 2, 8, 1, 9, 3};  // 使用副本进行测试
    pos2 = sequential_search_sentinel(arr3, n, key);
    if (pos2 != -1) {
        printf("带监视哨的顺序查找: 找到 %d 在位置 %d\n", key, pos2);
    } else {
        printf("带监视哨的顺序查找: 未找到 %d\n", key);
    }
    
    return 0;
}
