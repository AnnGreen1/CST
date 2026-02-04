#include <stdio.h>

/**
 * 简单选择排序算法
 * 基本思想：每次从未排序的部分中找到最小元素，放到已排序序列的末尾
 * 时间复杂度：O(n²)
 * 空间复杂度：O(1)
 */
void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    // 遍历数组，寻找最小元素
    for (i = 0; i < n - 1; i++) {
        // 假设当前位置i是最小值的位置
        min_idx = i;
        
        // 在剩余未排序的元素中寻找最小值
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;  // 更新最小值的索引
            }
        }

        // 将找到的最小元素与第i个元素交换
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }
}

// 打印数组元素
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 打印数组的辅助函数，用于展示排序过程
void printStep(int arr[], int size, int step) {
    printf("第%d步排序后: ", step);
    printArray(arr, size);
}

// 带详细过程显示的选择排序
void selectionSortWithSteps(int arr[], int n) {
    int i, j, min_idx;

    printf("初始数组: ");
    printArray(arr, n);

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // 如果最小值不在当前位置，则交换
        if (min_idx != i) {
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            
            printf("第%d轮: 将 %d 与 %d 交换\n", i+1, arr[min_idx], arr[i]);
        } else {
            printf("第%d轮: 当前元素 %d 已经是最小值，无需交换\n", i+1, arr[i]);
        }
        
        printStep(arr, n, i+1);
    }
}

// 主函数演示选择排序
int main() {
    int arr[] = {64, 25, 12, 22, 11, 90, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("简单选择排序演示\n");
    printf("==================\n");

    printf("原数组: ");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("排序后: ");
    printArray(arr, n);

    printf("\n详细排序过程:\n");
    printf("==================\n");
    
    // 再次初始化数组以展示详细过程
    int arr2[] = {64, 25, 12, 22, 11, 90, 5};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    selectionSortWithSteps(arr2, n2);

    return 0;
}