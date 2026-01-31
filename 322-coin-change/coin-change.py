class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:

        dp = [inf] * (amount+1)
        dp[0] = 0

        for amt in range(1,amount+1):
            for coin in coins:
                if coin <= amt:
                    dp[amt] = min(dp[amt],dp[amt-coin]+1)
        
        if ( dp[amount] != inf):
            return dp[amount]
        return -1

