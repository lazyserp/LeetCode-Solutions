class Solution:
    def combinationSum4(self, nums: List[int], target: int) -> int:
        n = len(nums)
        dp = [ 0 for i in range(target+1)]
        dp[0] = 1

        for tar in range(1,target+1):
            for num in nums:
                if num <= tar:
                    dp[tar] += dp[tar-num]
    
        return dp[target]
        