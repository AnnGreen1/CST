#include <stdio.h>

/**
 * @name 二分查找
 * @description 在有序数组中查找目标值，查找成功返回索引位置，查找失败返回-1
 * @param nums: 有序数组
 * @param length: 数组长度
 * @param target: 目标值
 * @return index: 目标值在数组中的索引，未找到返回-1
 */
int BinarySearch(int nums[], int length, int target)
{
    // 初始化搜索区间边界
    int low = 0;              // 搜索区间的左边界
    int high = length - 1;    // 搜索区间的右边界
    
    // 当搜索区间有效时继续查找
    while (low <= high)
    {
        // 计算中间位置索引（取低位）
        // 使用 low + (high - low) / 2 避免整数溢出
        int mid = low + (high - low) / 2;
        
        // 步骤1: 检查中间元素是否为目标值
        if (target == nums[mid])
        {
            // 找到目标值，返回其索引位置
            return mid;
        }
        // 步骤2: 目标值小于中间元素，缩小搜索范围至左半部分
        else if (target < nums[mid])
        {
            high = mid - 1;   // 更新右边界
        }
        // 步骤3: 目标值大于中间元素，缩小搜索范围至右半部分
        else
        {
            low = mid + 1;    // 更新左边界
        }
    }
    
    // 搜索区间无效，表示未找到目标值
    return -1;
}

int main()
{
    /**
     * @example 测试用例
     */
    int nums[] = {-1, 0, 3, 4, 6, 10, 13, 14};
    int length = sizeof(nums) / sizeof(nums[0]);  // 计算数组长度
    int target = 3;
    
    // 调用二分查找函数
    int res = BinarySearch(nums, length, target);
    
    // 输出结果
    if (res != -1) {
        printf("目标值 %d 在数组中的索引为: %d\n", target, res);
    } else {
        printf("未找到目标值 %d\n", target);
    }
    
    return 0;
}