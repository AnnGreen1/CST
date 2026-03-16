#include <stdio.h>

// 交换两个元素
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 调整堆结构，使其满足大根堆性质
void heapify(int arr[], int n, int i) {
    int largest = i;       // 初始化最大值为根节点
    int left = 2 * i + 1;  // 左子节点索引
    int right = 2 * i + 2; // 右子节点索引

    // 如果左子节点大于根节点
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // 如果右子节点大于当前最大值
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // 如果最大值不是根节点，则交换并继续调整
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest); // 递归调整受影响的子树
    }
}

// 堆排序主函数
void heapSort(int arr[], int n) {
    // 构建初始大根堆
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // 逐个提取堆顶元素并重新调整堆
    for (int i = n - 1; i > 0; i--) {
        swap(&arr[0], &arr[i]); // 将堆顶元素与末尾元素交换
        heapify(arr, i, 0);     // 重新调整剩余元素构成的堆
    }
}

// 打印数组
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}

// 主函数测试
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组: \n");
    printArray(arr, n);

    heapSort(arr, n);

    printf("排序后数组: \n");
    printArray(arr, n);

    return 0;
}