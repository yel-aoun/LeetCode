class Solution(object):
    def majorityElement(self, nums):
        k = 0
        majority = 0
        for i in nums:
            if k == 0 and majority != i:
                k +=1
                majority = i
            elif majority == i:
                k +=1
            else:
                k -=1
        return majority
        """
        :type nums: List[int]
        :rtype: int
        """
        