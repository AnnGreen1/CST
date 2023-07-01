/**
 * @name 直接插入排序
 * @description 
 * @param nums:number[]
 * @return nums:number[]
 */
function BubbleSort(nums) {
    let sortarr = new Array(nums[0]);
    let currentkey = 1;
    for(currentkey = 1;currentkey<nums.length;currentkey++){
        let sortkey = 0;
        while(sortkey<sortarr.length){
            if(sortarr[sortkey]<=nums[currentkey]){
                sortkey++;
               
            }else{
                console.log(sortarr[sortkey], sortarr[sortkey+1]);
                sortarr.splice(sortkey-1,0,nums[currentkey])
                console.log(sortarr);
                break;
            }
           
        }
    }
    console.log(sortarr);
}

/**
 * @example
 */
BubbleSort([49, 38, 65, 97, 76, 13, 27, 49]);
