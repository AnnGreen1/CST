#include <stdio.h>
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
    int nums[] = {-1, 0, 3, 4, 6, 10, 13, 14};
    int target = 3;
    int res = BinarySearch(nums, target);
    printf("%d", res);
    return 0;
}