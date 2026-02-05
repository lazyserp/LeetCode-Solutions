class Solution:
    def rob(self, nums: List[int]) -> int:

        if len(nums) == 1:
            return nums[0]

        def LinearRob(nums):
            dp  = [0] *( len(nums)+1)
            dp[1] = max(dp[0],nums[0])

            for i in range(2,len(nums)+1):
                dp[i] = max(nums[i-1] + dp[i-2],dp[i-1])

            return max(dp)

        withoutFirst = LinearRob(nums[1:])
        withoutLast = LinearRob(nums[:-1])


        return max(withoutFirst,withoutLast)


        