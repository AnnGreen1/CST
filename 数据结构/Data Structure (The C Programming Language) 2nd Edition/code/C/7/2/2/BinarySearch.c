#include <stdio.h>
/**
 * @name 顺序查找
 * @description 查找成功，返回索引位置；查找失败，返回-1；
 * @param nums:number[]
 * @param target:number
 * @return index:number
 */
int BinarySearch(int nums[], int target)
{
    int low = 0;
    int high = 7;
    int mid = ((low + high) / 2);
    while (1)
    {
        if (low > high)
            return -1;
        if (target == nums[mid])
        {
            return mid;
        }
        else if (target < nums[mid])
        {
            high = mid - 1;
            mid = ((low + high) / 2);
        }
        else
        {
            low = mid + 1;
            mid = ((low + high) / 2);
        }
    }
    return 0;
}

int main()
{
    /**
     * @example
     */
    int nums[] = {-1, 0, 3, 4, 6, 10, 13, 14};
    int target = 3;
    int res = BinarySearch(nums, target);
    printf("%d", res);
    return 0;
}