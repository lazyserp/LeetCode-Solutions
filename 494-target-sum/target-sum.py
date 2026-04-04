class Solution:
    def findTargetSumWays(self, nums: List[int], target: int) -> int:
        n = len(nums)
        @lru_cache(None)
        def solve(tar,i):
            if tar == target and i == n:
                return 1
            if i < 0 or i > n-1:
                return 0
            
            plus = solve(tar + nums[i],i+1)
            minus = solve(tar - nums[i],i+1)

            return plus + minus

        return solve(0,0)
        