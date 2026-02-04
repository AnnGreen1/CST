#include <stdio.h>

/**
 * 具有监视哨的折半插入排序
 * 折半插入排序是直接插入排序的改进版，利用二分查找找到插入位置
 * 监视哨的作用是避免内层循环中每次都要判断下标是否越界
 */
void binaryInsertSortWithGuard(int arr[], int n) {
    int i, j, low, high, mid, temp;

    for (i = 2; i <= n; i++) {
        // 将待插入元素放入监视哨 arr[0]
        arr[0] = arr[i];
        
        // 在 arr[1] 到 arr[i-1] 中查找插入位置
        low = 1;
        high = i - 1;
        
        // 折半查找合适的插入位置
        while (low <= high) {
            mid = (low + high) / 2;
            if (arr[0] < arr[mid]) {
                high = mid - 1;  // 在左半部分继续查找
            } else {
                low = mid + 1;   // 在右半部分继续查找
            }
        }
        
        // 将 [low, i-1] 区间的元素向后移动一位
        for (j = i - 1; j >= low; j--) {
            arr[j + 1] = arr[j];
        }
        
        // 将监视哨中的元素插入到正确位置
        arr[low] = arr[0];
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
    
    binaryInsertSortWithGuard(arr, n);
    
    printf("排序后数组: ");
    printArray(arr, n);
    
    return 0;
}