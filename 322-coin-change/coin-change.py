class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        inf = float('inf')
        n = len(coins)

        dp = [ [inf] * (amount+1) for i in range(len(coins)+1) ]
        
        for i in range(0,n+1):
            dp[i][0] = 0

        for i in range(1,n+1):
            for amt in range(1,amount+1):
                dp[i][amt] = dp[i-1][amt] #skip

                #take
                if coins[i-1] <= amt:
                    dp[i][amt] = min(1+dp[i][amt - coins[i-1]],dp[i-1][amt])

        return -1 if dp[n][amount] == inf else  dp[n][amount]





        