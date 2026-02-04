#include <stdio.h>

/**
 * 希尔排序算法（Shell Sort）
 * 希尔排序是插入排序的改进版本，也称为"缩小增量排序"
 * 它通过将原始数组分成若干个子序列来进行插入排序，
 * 随着增量逐渐减小，每组包含的元素增多，
 * 当增量减至1时，整个序列进行一次直接插入排序
 */
void shellSort(int arr[], int n) {
    // 开始时使用较大的增量，然后逐步缩小
    for (int gap = n/2; gap > 0; gap /= 2) {
        // 对每个间隔为gap的子序列进行插入排序
        for (int i = gap; i < n; i++) {
            // 将 arr[i] 插入到正确位置
            int temp = arr[i];
            int j;
            
            // 在间隔为gap的子序列中找到正确位置
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            
            // 将temp插入到正确位置
            arr[j] = temp;
        }
    }
}

/**
 * 使用不同增量序列的希尔排序
 * 这里使用Knuth提出的序列：h = 3*h + 1
 */
void shellSortKnuth(int arr[], int n) {
    // 计算初始间隔
    int gap = 1;
    while (gap < n/3) {
        gap = gap * 3 + 1;  // 生成 1, 4, 13, 40, 121, ...
    }
    
    // 按Knuth序列递减间隔
    while (gap >= 1) {
        // 对每个间隔为gap的子序列进行插入排序
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j;
            
            // 在间隔为gap的子序列中找到正确位置
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            
            arr[j] = temp;
        }
        gap /= 3;  // 缩小间隔
    }
}

/**
 * 希尔排序的另一种实现方式（使用while循环）
 */
void shellSortAlternative(int arr[], int n) {
    // 从 n/2 开始，逐步缩小间隔
    for (int gap = n/2; gap > 0; gap /= 2) {
        // 对每个间隔为gap的子序列进行排序
        for (int i = gap; i < n; i++) {
            int j = i;
            
            // 在间隔为gap的子序列中进行插入排序
            while (j >= gap && arr[j - gap] > arr[j]) {
                // 交换元素
                int temp = arr[j];
                arr[j] = arr[j - gap];
                arr[j - gap] = temp;
                j -= gap;
            }
        }
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
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 50, 42, 77, 55, 33, 11, 66};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("原始数组: ");
    printArray(arr, n);
    
    // 测试第一种希尔排序实现
    int arr1[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = arr[i];
    }
    
    shellSort(arr1, n);
    
    printf("希尔排序后 (使用标准序列): ");
    printArray(arr1, n);
    
    // 测试Knuth序列的希尔排序
    int arr2[n];
    for (int i = 0; i < n; i++) {
        arr2[i] = arr[i];
    }
    
    shellSortKnuth(arr2, n);
    
    printf("希尔排序后 (使用Knuth序列): ");
    printArray(arr2, n);
    
    // 测试替代实现
    int arr3[n];
    for (int i = 0; i < n; i++) {
        arr3[i] = arr[i];
    }
    
    shellSortAlternative(arr3, n);
    
    printf("希尔排序后 (替代实现): ");
    printArray(arr3, n);
    
    // 测试几乎有序的数组
    int arr4[] = {1, 2, 3, 4, 6, 5, 7, 8, 9, 10, 12, 11, 13, 15, 14, 16};
    int n4 = sizeof(arr4) / sizeof(arr4[0]);
    
    printf("\n几乎有序的数组: ");
    printArray(arr4, n4);
    
    shellSort(arr4, n4);
    printf("希尔排序后: ");
    printArray(arr4, n4);
    
    return 0;
}