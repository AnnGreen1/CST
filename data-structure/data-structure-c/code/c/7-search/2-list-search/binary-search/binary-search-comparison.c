#include <stdio.h>

/**
 * @name 向下取整的二分查找
 * @description 在有序数组中查找目标值，使用向下取整计算中间位置
 * @param nums: 有序数组
 * @param length: 数组长度
 * @param target: 目标值
 * @return index: 目标值在数组中的索引，未找到返回-1
 */
int binary_search_floor(int nums[], int length, int target)
{
    int low = 0;
    int high = length - 1;
    
    while (low <= high)
    {
        // 向下取整计算中间位置
        int mid = low + (high - low) / 2;

        printf("Floor - low: %d, high: %d, mid: %d, nums[mid]: %d\n", low, high, mid, nums[mid]);
        
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    
    return -1;
}

/**
 * @name 向上取整的二分查找
 * @description 在有序数组中查找目标值，使用向上取整计算中间位置
 * @param nums: 有序数组
 * @param length: 数组长度
 * @param target: 目标值
 * @return index: 目标值在数组中的索引，未找到返回-1
 */
int binary_search_ceil(int nums[], int length, int target)
{
    int low = 0;
    int high = length - 1;
    
    while (low <= high)
    {
        // 向上取整计算中间位置
        int mid = low + (high - low + 1) / 2;

        printf("Ceil - low: %d, high: %d, mid: %d, nums[mid]: %d\n", low, high, mid, nums[mid]);
        
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    
    return -1;
}

int main()
{
    int nums[] = {-1, 0, 3, 4, 6, 10, 13, 14};
    int length = sizeof(nums) / sizeof(nums[0]);
    int target = 3;
    
    printf("数组元素为: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n\n");
    
    // 向下取整的二分查找
    printf("=== 向下取整的二分查找 ===\n");
    int res_floor = binary_search_floor(nums, length, target);
    if (res_floor != -1) {
        printf("向下取整: 目标值 %d 在数组中的索引为: %d\n", target, res_floor);
    } else {
        printf("向下取整: 未找到目标值 %d\n", target);
    }
    
    printf("\n");
    
    // 向上取整的二分查找
    printf("=== 向上取整的二分查找 ===\n");
    int res_ceil = binary_search_ceil(nums, length, target);
    if (res_ceil != -1) {
        printf("向上取整: 目标值 %d 在数组中的索引为: %d\n", target, res_ceil);
    } else {
        printf("向上取整: 未找到目标值 %d\n", target);
    }
    
    printf("\n");
    
    // 测试不同的目标值
    target = 10;
    printf("=== 测试目标值 %d ===\n", target);
    
    printf("=== 向下取整的二分查找 ===\n");
    res_floor = binary_search_floor(nums, length, target);
    if (res_floor != -1) {
        printf("向下取整: 目标值 %d 在数组中的索引为: %d\n", target, res_floor);
    } else {
        printf("向下取整: 未找到目标值 %d\n", target);
    }
    
    printf("\n");
    
    printf("=== 向上取整的二分查找 ===\n");
    res_ceil = binary_search_ceil(nums, length, target);
    if (res_ceil != -1) {
        printf("向上取整: 目标值 %d 在数组中的索引为: %d\n", target, res_ceil);
    } else {
        printf("向上取整: 未找到目标值 %d\n", target);
    }
    
    printf("\n");
    
    // 测试不存在的目标值
    target = 5;
    printf("=== 测试不存在的目标值 %d ===\n", target);
    
    printf("=== 向下取整的二分查找 ===\n");
    res_floor = binary_search_floor(nums, length, target);
    if (res_floor != -1) {
        printf("向下取整: 目标值 %d 在数组中的索引为: %d\n", target, res_floor);
    } else {
        printf("向下取整: 未找到目标值 %d\n", target);
    }
    
    printf("\n");
    
    printf("=== 向上取整的二分查找 ===\n");
    res_ceil = binary_search_ceil(nums, length, target);
    if (res_ceil != -1) {
        printf("向上取整: 目标值 %d 在数组中的索引为: %d\n", target, res_ceil);
    } else {
        printf("向上取整: 未找到目标值 %d\n", target);
    }
    
    return 0;
}