class Solution(object):
    def merge(self, nums1, m, nums2, n):
        j = m
        for k in range(n):
            nums1[j] = nums2[k]
            # i += 1
            j += 1

        nums1.sort()
        """
        :type nums1: List[int]
        :type m: int
        :type nums2: List[int]
        :type n: int
        :rtype: None Do not return anything, modify nums1 in-place instead.
        """
        