#include <stdio.h>

// 全局变量用于统计比较次数
int floor_comparison_count = 0;
int ceil_comparison_count = 0;

/**
 * @name 向下取整的二分查找（带比较次数统计）
 */
int binary_search_floor_with_count(int nums[], int length, int target)
{
    int low = 0;
    int high = length - 1;
    floor_comparison_count = 0;  // 重置计数器
    
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        floor_comparison_count++;  // 每次循环都进行了一次比较
        
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
 * @name 向上取整的二分查找（带比较次数统计）
 */
int binary_search_ceil_with_count(int nums[], int length, int target)
{
    int low = 0;
    int high = length - 1;
    ceil_comparison_count = 0;  // 重置计数器
    
    while (low <= high)
    {
        int mid = low + (high - low + 1) / 2;
        ceil_comparison_count++;  // 每次循环都进行了一次比较
        
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
    // 测试数组
    int nums[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int length = sizeof(nums) / sizeof(nums[0]);
    
    printf("数组元素为: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n数组长度: %d\n\n", length);
    
    // 测试所有数组中的元素
    printf("测试数组中存在的元素:\n");
    printf("%-8s %-10s %-10s %-10s %-10s %-10s\n", "目标值", "位置", "向下取整", "向上取整", "结果", "差异");
    printf("------------------------------------------------------------------------\n");
    
    for (int i = 0; i < length; i++) {
        int target = nums[i];
        
        int pos_floor = binary_search_floor_with_count(nums, length, target);
        int pos_ceil = binary_search_ceil_with_count(nums, length, target);
        
        int diff = floor_comparison_count - ceil_comparison_count;
        
        printf("%-8d %-10d %-10d %-10d %-10s %+d\n", 
               target, i, floor_comparison_count, ceil_comparison_count, 
               (pos_floor == pos_ceil && pos_floor != -1) ? "OK" : "ERROR", diff);
    }
    
    // 测试一些不存在的元素
    int non_exist_targets[] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32};
    int non_exist_len = sizeof(non_exist_targets) / sizeof(non_exist_targets[0]);
    
    printf("\n测试数组中不存在的元素:\n");
    printf("%-8s %-10s %-10s %-10s %-10s %-10s\n", "目标值", "向下取整", "向上取整", "结果", "差异", "说明");
    printf("------------------------------------------------------------------------\n");
    
    for (int i = 0; i < non_exist_len; i++) {
        int target = non_exist_targets[i];
        
        binary_search_floor_with_count(nums, length, target);
        int count_floor = floor_comparison_count;
        binary_search_ceil_with_count(nums, length, target);
        int count_ceil = ceil_comparison_count;
        
        int diff = count_floor - count_ceil;
        char *desc = (diff == 0) ? "相同" : (diff > 0) ? "向下更多" : "向上更多";
        
        printf("%-8d %-10d %-10d %-10s %+d %-10s\n", 
               target, count_floor, count_ceil, 
               (count_floor >= 0 && count_ceil >= 0) ? "OK" : "ERROR", 
               diff, desc);
    }
    
    printf("\n总结：\n");
    printf("1. 对于能找到的元素，两种方法的比较次数可能略有不同，但差距不大\n");
    printf("2. 对于找不到的元素，两种方法通常会有相同的比较次数\n");
    printf("3. 两种方法的时间复杂度都是 O(log n)\n");
    printf("4. 实际性能差异主要取决于具体实现和数据分布\n");
    
    return 0;
}