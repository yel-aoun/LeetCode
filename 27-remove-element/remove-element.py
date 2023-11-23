class Solution(object):
    def removeElement(self, nums, val):
        k = 0
        while k < len(nums):
            if nums[k] == val:
                del nums[k]
            else :
                k +=1
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        