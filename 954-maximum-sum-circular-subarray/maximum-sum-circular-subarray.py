class Solution:
    def maxSubarraySumCircular(self, nums: List[int]) -> int:
        maxCurr = nums[0]
        maxAns = nums[0]

        total = nums[0]

        minCurr = nums[0]
        minAns = nums[0]

        for i in range(1,len(nums)):

            total += nums[i]

            maxCurr = max(nums[i], maxCurr + nums[i])
            maxAns = max(maxAns,maxCurr)

            minCurr = min(nums[i],minCurr + nums[i])
            minAns = min(minCurr, minAns)

        
        if maxAns < 0:
            return maxAns

        return max(maxAns,total - minAns)
        