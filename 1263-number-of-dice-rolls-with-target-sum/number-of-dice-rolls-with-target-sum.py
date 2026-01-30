class Solution:
    def numRollsToTarget(self, n: int, k: int, target: int) -> int:
        MOD = 10**9+7
        @cache
        def solve(n,target):
            if ( n == 0 and target == 0):
                return 1
            if ( n == 0 or target < 0):
                return 0
            
            ways = 0
            for face in range(1, k+1):
                ways  = (ways + solve(n-1,target-face)) % MOD

            return ways

        return solve(n,target)

        