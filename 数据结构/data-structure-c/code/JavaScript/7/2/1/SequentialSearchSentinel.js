/**
 * @name 设置监视哨的顺序查找
 * @description 顺序查找，查找成功，返回索引位置；查找失败，返回-1；
 * @param nums:number[]
 * @param target:number
 * @return index:number 
 */
function SequentialSearchSentinel( nums ,  target ) {
    nums.unshift(target);
    console.log(nums);
    let index = nums.length-1;
    for(index = nums.length-1;nums[index]!=target;--index)
    return index
}

/**
 * @example
 */
let index = SequentialSearchSentinel([-1,0,3,4,6,10,13,14],3);
console.log(index);