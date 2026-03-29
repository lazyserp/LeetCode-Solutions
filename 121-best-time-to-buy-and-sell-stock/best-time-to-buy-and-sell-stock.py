class Solution:
    def maxProfit(self, prices: List[int]) -> int:

        n = len(prices)
        dp = [0] * (n)
        MinBuy = float('inf')

        for i in range(0,n):
            if prices[i] < MinBuy:
                MinBuy = prices[i]
            prft = prices[i] - MinBuy

            if i > 0:
                dp[i] = max(dp[i-1],prft)
            else:
                dp[i] = 0

        return dp[n-1]
