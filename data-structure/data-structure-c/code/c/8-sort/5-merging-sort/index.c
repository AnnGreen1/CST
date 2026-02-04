#include <stdio.h>
#include <stdlib.h>

/**
 * 归并排序 - 合并两个已排序的子数组
 * @param arr 待排序的数组
 * @param left 左边界
 * @param mid 中间位置
 * @param right 右边界
 */
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int n1 = mid - left + 1;  // 左半部分元素个数
    int n2 = right - mid;     // 右半部分元素个数

    // 创建临时数组
    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));

    // 复制数据到临时数组
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // 合并临时数组回到arr[left..right]
    i = 0;      // 左子数组的索引
    j = 0;      // 右子数组的索引
    k = left;   // 合并后数组的索引

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 复制L[]剩余元素（如果有的话）
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // 复制R[]剩余元素（如果有的话）
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // 释放临时分配的内存
    free(L);
    free(R);
}

/**
 * 归并排序主函数
 * @param arr 待排序的数组
 * @param left 排序范围左边界
 * @param right 排序范围右边界
 */
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // 找到中间点，避免溢出
        int mid = left + (right - left) / 2;

        // 对左半部分进行排序
        mergeSort(arr, left, mid);
        // 对右半部分进行排序
        mergeSort(arr, mid + 1, right);

        // 合并已排序的两部分
        merge(arr, left, mid, right);
    }
}

/**
 * 打印数组元素
 * @param arr 数组
 * @param size 数组大小
 */
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * 显示归并排序过程的辅助函数
 */
void mergeSortWithSteps(int arr[], int left, int right, int depth) {
    // 打印当前层级的缩进
    for(int i = 0; i < depth; i++) printf("  ");
    printf("排序区间 [%d, %d]: ", left, right);
    for(int i = left; i <= right; i++) printf("%d ", arr[i]);
    printf("\n");

    if (left < right) {
        int mid = left + (right - left) / 2;

        // 递归排序左右两部分
        mergeSortWithSteps(arr, left, mid, depth + 1);
        mergeSortWithSteps(arr, mid + 1, right, depth + 1);

        // 合并两部分
        merge(arr, left, mid, right);

        // 打印合并后的结果
        for(int i = 0; i < depth; i++) printf("  ");
        printf("合并后 [%d, %d]: ", left, right);
        for(int i = left; i <= right; i++) printf("%d ", arr[i]);
        printf("\n");
    }
}

/**
 * 主函数 - 演示归并排序
 */
int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("归并排序演示\n");
    printf("==================\n");
    printf("原数组: ");
    printArray(arr, arr_size);

    // 创建一个副本用于显示排序过程
    int *arr_copy = (int*)malloc(arr_size * sizeof(int));
    for(int i = 0; i < arr_size; i++) {
        arr_copy[i] = arr[i];
    }

    // 执行归并排序
    mergeSort(arr_copy, 0, arr_size - 1);

    printf("排序后: ");
    printArray(arr_copy, arr_size);

    printf("\n归并排序详细过程:\n");
    printf("==================\n");
    // 重新初始化数组以展示详细过程
    int arr_steps[] = {38, 27, 43, 3, 9, 82, 10};
    mergeSortWithSteps(arr_steps, 0, arr_size - 1, 0);

    printf("\n归并排序特点:\n");
    printf("- 时间复杂度: O(n log n)\n");
    printf("- 空间复杂度: O(n)\n");
    printf("- 稳定排序算法\n");
    printf("- 分治算法策略\n");

    free(arr_copy);
    return 0;
}