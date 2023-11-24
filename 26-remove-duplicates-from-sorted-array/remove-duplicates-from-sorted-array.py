class Solution(object):
    def removeDuplicates(self, nums):
        nums[:] = list(set(nums))
        nums.sort()
        return len(nums)
        """
        :type nums: List[int]
        :rtype: int
        """
        