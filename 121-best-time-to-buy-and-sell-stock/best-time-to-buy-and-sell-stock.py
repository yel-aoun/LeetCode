class Solution(object):
    def maxProfit(self, prices):
        result = 0
        m_in = prices[0]
        for n in range(1,len(prices)):
            result = max(prices[n] - m_in, result)
            m_in = min(prices[n], m_in)
            
        return result
        """
        :type prices: List[int]
        :rtype: int
        """