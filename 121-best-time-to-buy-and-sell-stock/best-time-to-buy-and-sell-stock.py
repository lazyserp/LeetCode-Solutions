class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        n = len(prices)
        dp = [0] * (n)
        MinBuy = float('inf')
        maxProfit = 0

        for i in range(0,n):
            if prices[i] < MinBuy:
                MinBuy = prices[i]
            prft = prices[i] - MinBuy
            maxProfit = max(maxProfit,prft)

            

        return maxProfit
