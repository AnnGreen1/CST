/**
 * @name 顺序查找
 * @description 查找成功，返回索引位置；查找失败，返回-1；
 * @param nums:number[]
 * @param target:number
 * @return index:number 
 */
function SequentialSearch( nums ,  target ) {
    let index = 0;
    for(index=0;index<nums.length;index++)
        if(nums[index]==target) return index
    return -1
}

/**
 * @example
 */
let index = SequentialSearch([-1,0,3,4,6,10,13,14],3);
console.log(index);