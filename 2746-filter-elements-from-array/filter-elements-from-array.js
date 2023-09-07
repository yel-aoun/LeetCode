/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var filter = function(arr, fn) {
    const stor = [];
    for (let i = 0; i < arr.length; i++)
    {
        if (fn(arr[i], i))
            stor.push(arr[i]);
    }
    return stor;
};