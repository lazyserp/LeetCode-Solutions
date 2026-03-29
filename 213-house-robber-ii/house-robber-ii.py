class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return nums[0]
        
        def helper(A):
            n = len(A)

            dp = [0] * (n+1)
            dp[1] = max(0,A[0])

            for i in range(2,n+1):
                dp[i] = max(A[i-1] + dp[i-2] , dp[i-1] )

            return dp[n]

        withFirst = helper(nums[:-1])
        withoutFirst = helper(nums[1:])

        return (max(withFirst,withoutFirst))


        