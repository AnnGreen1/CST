#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * 分割函数 - 快速排序的核心
 * 将数组分为两部分，左边部分小于基准值，右边部分大于基准值
 */
int partition(int arr[], int low, int high) {
    // 选择最后一个元素作为基准值（pivot）
    int pivot = arr[high];
    
    // 较小元素的索引，表示最后一个小于基准值的元素位置
    int i = (low - 1);
    
    for (int j = low; j < high; j++) {
        // 如果当前元素小于或等于基准值
        if (arr[j] <= pivot) {
            i++;    // 增加较小元素的索引
            // 交换 arr[i] 和 arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    // 将基准值放到正确位置（所有小于基准值的元素在左边，大于的在右边）
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    
    return (i + 1);  // 返回基准值的位置
}

/**
 * 随机化分割函数 - 改进版
 * 随机选择一个元素作为基准值，以提高平均性能
 */
int randomizedPartition(int arr[], int low, int high) {
    // 生成 [low, high] 范围内的随机索引
    int randomIndex = low + rand() % (high - low + 1);
    
    // 将随机选择的元素与最后一个元素交换
    int temp = arr[randomIndex];
    arr[randomIndex] = arr[high];
    arr[high] = temp;
    
    // 使用标准分区函数
    return partition(arr, low, high);
}

/**
 * 快速排序主函数
 * 使用递归实现
 */
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 获取分区点，使得 arr[pi] 已经排好序
        // 并且 arr[low...pi-1] < arr[pi] < arr[pi+1...high]
        int pi = randomizedPartition(arr, low, high);
        
        // 递归排序基准值左边的元素
        quickSort(arr, low, pi - 1);
        
        // 递归排序基准值右边的元素
        quickSort(arr, pi + 1, high);
    }
}

/**
 * 插入排序 - 用于优化快排的小数组部分
 * 当子数组较小时，使用插入排序效率更高
 */
void insertionSort(int arr[], int low, int high) {
    int i, j, key;
    for (i = low + 1; i <= high; i++) {
        key = arr[i];
        j = i - 1;
        
        // 将大于key的元素向后移动
        while (j >= low && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

/**
 * 优化版快速排序
 * 对小数组使用插入排序，提高整体性能
 */
void optimizedQuickSort(int arr[], int low, int high) {
    if (low < high) {
        // 当子数组长度小于等于10时，使用插入排序
        if (high - low + 1 <= 10) {
            insertionSort(arr, low, high);
            return;
        }
        
        // 否则继续使用快速排序
        int pi = randomizedPartition(arr, low, high);
        
        // 递归排序基准值两边的元素
        optimizedQuickSort(arr, low, pi - 1);
        optimizedQuickSort(arr, pi + 1, high);
    }
}

// 打印数组
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // 初始化随机数种子
    srand(time(NULL));
    
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 50, 42, 77, 55, 33, 11, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("原始数组: ");
    printArray(arr, n);
    
    // 复制数组用于不同排序测试
    int arr1[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = arr[i];
    }
    
    // 使用普通快速排序
    clock_t start = clock();
    quickSort(arr1, 0, n - 1);
    clock_t end = clock();
    
    printf("快速排序后: ");
    printArray(arr1, n);
    printf("快速排序耗时: %f 秒\n", ((double)(end - start)) / CLOCKS_PER_SEC);
    
    // 测试优化版快速排序
    int arr2[n];
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }
    
    start = clock();
    optimizedQuickSort(arr2, 0, n - 1);
    end = clock();
    
    printf("优化版快速排序后: ");
    printArray(arr2, n);
    printf("优化版快速排序耗时: %f 秒\n", ((double)(end - start)) / CLOCKS_PER_SEC);
    
    // 测试几乎有序的数组
    int arr3[] = {1, 2, 3, 4, 6, 5, 7, 8, 9, 10, 12, 11, 13, 15, 14, 16};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("\n几乎有序的数组: ");
    printArray(arr3, n3);
    
    quickSort(arr3, 0, n3 - 1);
    printf("快速排序后: ");
    printArray(arr3, n3);
    
    return 0;
}