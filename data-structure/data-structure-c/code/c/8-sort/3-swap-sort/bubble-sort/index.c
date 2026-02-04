#include <stdio.h>

/**
 * 冒泡排序算法
 * 冒泡排序通过重复遍历要排序的数列，一次比较两个元素，
 * 如果它们的顺序错误就交换它们的位置。每次遍历都会将最大（或最小）
 * 的元素"冒泡"到数列的顶端。
 */
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    
    // 外层循环控制排序趟数
    for (i = 0; i < n - 1; i++) {
        int swapped = 0;  // 优化标志，记录本轮是否发生了交换
        
        // 内层循环控制每趟排序多少次
        // 每次排序后，最大的元素会"冒泡"到末尾，所以每趟排序的范围可以减1
        for (j = 0; j < n - i - 1; j++) {
            // 如果前一个元素大于后一个元素，则交换它们的位置
            if (arr[j] > arr[j + 1]) {
                // 交换 arr[j] 和 arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1;  // 发生了交换
            }
        }
        
        // 如果这一轮没有发生任何交换，说明数组已经有序，可以提前结束
        if (!swapped) {
            break;
        }
    }
}

/**
 * 改进版冒泡排序 - 双向冒泡排序（鸡尾酒排序）
 * 在每一轮排序中，不仅将最大元素移到右边，也将最小元素移到左边
 */
void cocktailSort(int arr[], int n) {
    int left = 0, right = n - 1;
    int i, temp;
    int swapped = 1;  // 标记是否有交换
    
    while (left < right && swapped) {
        swapped = 0;
        
        // 从左到右的冒泡，将最大元素移到右边
        for (i = left; i < right; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
        right--;  // 最大元素已在正确位置
        
        if (!swapped) break;
        
        // 从右到左的冒泡，将最小元素移到左边
        for (i = right; i > left; i--) {
            if (arr[i] < arr[i - 1]) {
                temp = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = temp;
                swapped = 1;
            }
        }
        left++;  // 最小元素已在正确位置
    }
}

// 打印数组
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 50, 42};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("原始数组: ");
    printArray(arr, n);
    
    // 使用普通冒泡排序
    bubbleSort(arr, n);
    
    printf("冒泡排序后: ");
    printArray(arr, n);
    
    // 测试几乎有序的数组
    int arr2[] = {1, 2, 3, 4, 6, 5, 7, 8, 9, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("\n几乎有序的数组: ");
    printArray(arr2, n2);
    
    // 重新排序
    bubbleSort(arr2, n2);
    printf("冒泡排序后: ");
    printArray(arr2, n2);
    
    // 测试鸡尾酒排序
    int arr3[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 50, 42};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("\n原始数组: ");
    printArray(arr3, n3);
    
    // 使用鸡尾酒排序
    cocktailSort(arr3, n3);
    
    printf("鸡尾酒排序后: ");
    printArray(arr3, n3);
    
    return 0;
}