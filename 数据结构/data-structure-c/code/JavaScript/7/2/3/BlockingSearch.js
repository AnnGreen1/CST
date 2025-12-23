/**
 * @name 分块查找
 * @description 查找成功，返回索引位置；查找失败，返回-1；
 * @param nums:number[]
 * @param target:number
 * @return index:number 
 */
function BinarySearch( nums ,  target ) {
    let low = 0;
    let high = nums.length;
    let mid = parseInt((low+high)/2);
    while(true){
        if(low>high) return -1;
        if(target == nums[mid]){
            return mid;
        }else if(target < nums[mid]){
            high=mid-1;
            mid = parseInt((low+high)/2);
        }else{
            low = mid + 1;
            mid = parseInt((low+high)/2);
        }
    }
}

/**
 * @example
 */
let index = BinarySearch([-1,0,3,4,6,10,13,14],3);
console.log(index);