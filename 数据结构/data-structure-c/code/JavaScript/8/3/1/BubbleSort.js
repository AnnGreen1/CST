/**
 * @name 冒泡排序
 * @description 
 * @param nums:number[]
 * @return nums:number[]
 */
function BubbleSort(nums) {
    let flag = 1;
    while(nums.length>0 && flag==1){
        flag = 0;
        let times = 0;
        for(times=0;times<nums.length;times++){
            if(nums[times]>nums[times+1]){
                let temp = 0;
                temp = nums[times];
                nums[times] = nums[times+1];
                nums[times+1] = temp;
                flag = 1;
            }
        }
    }
    return nums;
}

/**
 * @example
 */
let index = BubbleSort([49, 38, 65, 97, 76, 13, 27, 49]);
console.log(index);