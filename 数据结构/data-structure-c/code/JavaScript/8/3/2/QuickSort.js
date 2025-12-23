/**
 * @name 快速排序
 * @description
 * @param nums:number[]
 * @param target:number
 * @return index:number 
 */
function QuickSort(nums) {
    let low = 0;
    let high = nums.length - 1;
    while(low<high){
        if(nums[low]>nums[high]){
            let temp = nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            low++;
            high--;
        }else{
            low++;
        }
        console.log(low);
        console.log(high);
        console.log(nums);
    }
    return nums;
}

/**
 * @example
 */
let index = QuickSort([49, 38, 65, 97, 76, 13, 27, 49]);
console.log(index);