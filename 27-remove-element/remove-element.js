/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let count = []
    for(let num of nums){
        if(num != val){
            count.push(num)
        }
    }
    let numslength = count.length
    for(let i =0;i<nums.length;i++){
        nums[i] = count[i]
    }
    return numslength
};