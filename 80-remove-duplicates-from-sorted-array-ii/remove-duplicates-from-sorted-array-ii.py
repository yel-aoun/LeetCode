class Solution(object):
    def removeDuplicates(self, nums):
        i = 1
        while i < len(nums):
            count = nums.count(nums[i - 1])
            if count > 2:
                nums.remove(nums[i - 1])
            else:
                i += 1
        return len(nums)
        """
        :type nums: List[int]
        :rtype: int
        """
        