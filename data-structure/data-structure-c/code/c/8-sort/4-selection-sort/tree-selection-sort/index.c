#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// 计算大于等于n的最小2的幂
int nextPowerOf2(int n) {
    int power = 1;
    while (power < n) {
        power *= 2;
    }
    return power;
}

// 树形选择排序实现
void treeSelectionSort(int arr[], int n) {
    if (n <= 0) return;
    
    // 计算叶子节点数量（最接近2的幂）
    int leafCount = nextPowerOf2(n);
    
    // 创建 tournament tree，大小为 2*leafCount，初始化为无穷大
    int *tree = (int*)malloc(sizeof(int) * 2 * leafCount);
    
    // 初始化叶子节点为无穷大
    for (int i = 0; i < leafCount; i++) {
        tree[leafCount + i] = INT_MAX;
    }
    
    // 填充实际数据到叶子节点
    for (int i = 0; i < n; i++) {
        tree[leafCount + i] = arr[i];
    }
    
    // 构建tournament tree（从下往上构建）
    for (int i = leafCount - 1; i >= 1; i--) {
        tree[i] = (tree[2 * i] <= tree[2 * i + 1]) ? tree[2 * i] : tree[2 * i + 1];
    }
    
    // 输出排序后的数组
    int *result = (int*)malloc(sizeof(int) * n);
    int resultIndex = 0;
    
    // 重复n次，每次找到最小值
    for (int round = 0; round < n; round++) {
        // 获取当前最小值
        int minVal = tree[1];
        result[resultIndex++] = minVal;
        
        // 找到最小值在原数组中的位置并标记为无穷大
        int pos = leafCount;
        while (pos < 2 * leafCount) {
            if (tree[pos] == minVal) {
                tree[pos] = INT_MAX;
                
                // 更新父节点
                int parent = pos / 2;
                while (parent >= 1) {
                    tree[parent] = (tree[2 * parent] <= tree[2 * parent + 1]) ? 
                                  tree[2 * parent] : tree[2 * parent + 1];
                    parent /= 2;
                }
                break;
            }
            pos++;
        }
    }
    
    // 将结果复制回原数组
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
    
    free(tree);
    free(result);
}

// 打印数组
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 优化版树形选择排序，添加调试信息
void treeSelectionSortWithDebug(int arr[], int n) {
    printf("开始树形选择排序，数组长度: %d\n", n);
    printf("原始数组: ");
    printArray(arr, n);
    
    if (n <= 0) return;
    
    int leafCount = nextPowerOf2(n);
    int *tree = (int*)malloc(sizeof(int) * 2 * leafCount);
    
    // 初始化叶子节点为无穷大
    for (int i = 0; i < leafCount; i++) {
        tree[leafCount + i] = INT_MAX;
    }
    
    // 填充实际数据
    for (int i = 0; i < n; i++) {
        tree[leafCount + i] = arr[i];
    }
    
    // 构建tournament tree
    for (int i = leafCount - 1; i >= 1; i--) {
        tree[i] = (tree[2 * i] <= tree[2 * i + 1]) ? tree[2 * i] : tree[2 * i + 1];
    }
    
    printf("构建的tournament tree (前几个节点): ");
    for (int i = 1; i < (leafCount < 8 ? leafCount : 8); i++) {
        printf("%d ", tree[i]);
    }
    printf("\n");
    
    int *result = (int*)malloc(sizeof(int) * n);
    int resultIndex = 0;
    
    for (int round = 0; round < n; round++) {
        int minVal = tree[1];
        result[resultIndex++] = minVal;
        
        // 查找并更新最小值节点
        int pos = leafCount;
        while (pos < 2 * leafCount) {
            if (tree[pos] == minVal) {
                tree[pos] = INT_MAX;
                
                int parent = pos / 2;
                while (parent >= 1) {
                    tree[parent] = (tree[2 * parent] <= tree[2 * parent + 1]) ? 
                                  tree[2 * parent] : tree[2 * parent + 1];
                    parent /= 2;
                }
                break;
            }
            pos++;
        }
        
        printf("第 %d 轮: 选出最小值 %d\n", round + 1, minVal);
    }
    
    // 复制结果
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
    
    printf("最终排序结果: ");
    printArray(arr, n);
    
    free(tree);
    free(result);
}

int main() {
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    
    printf("=== 树形选择排序演示 ===\n");
    
    // 基础测试
    printf("\n基础测试:\n");
    printf("排序前: ");
    printArray(arr1, n1);
    
    treeSelectionSort(arr1, n1);
    
    printf("排序后: ");
    printArray(arr1, n1);
    
    // 带调试信息的测试
    printf("\n带调试信息的测试:\n");
    int arr2[] = {5, 2, 8, 1, 9};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    
    treeSelectionSortWithDebug(arr2, n2);
    
    return 0;
}