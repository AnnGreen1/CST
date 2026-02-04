#include <stdio.h>

/**
 * 具有监视哨的直接插入排序
 * 监视哨的作用是避免内层循环中每次都要判断下标是否越界
 */
void straightInsertSortWithGuard(int arr[], int n) {
    int i, j;
    
    // 从第二个元素开始，逐个插入到前面已排序的部分
    for (i = 2; i <= n; i++) {
        if (arr[i] < arr[i-1]) {
            arr[0] = arr[i];  // 设置监视哨，arr[0]作为临时存储
            j = i - 1;
            
            // 将大于arr[i]的元素向后移动
            while (arr[0] < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }
            
            // 将监视哨中的值放到正确的位置
            arr[j + 1] = arr[0];
        }
    }
}

// 打印数组
void printArray(int arr[], int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // 示例数组，注意arr[0]用作监视哨，所以不使用
    int arr[] = {0, 2, 1, 5, 4, 7, 6, 10, 12, 9, 3};  // arr[0]是监视哨
    int n = 10;  // 实际元素个数
    
    printf("原始数组: ");
    printArray(arr, n);
    
    straightInsertSortWithGuard(arr, n);
    
    printf("排序后数组: ");
    printArray(arr, n);
    
    return 0;
}