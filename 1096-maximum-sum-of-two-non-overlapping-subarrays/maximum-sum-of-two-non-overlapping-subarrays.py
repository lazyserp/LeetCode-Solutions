class Solution:
    def maxSumTwoNoOverlap(self, nums: List[int], firstLen: int, secondLen: int) -> int:
        ans = 0
        n = len(nums)

        for i in range(0,n - firstLen+1):
            firstSum = sum(nums[i:i+firstLen])

            for j in range(0,n-secondLen+1):
                
                if i + firstLen <= j or j + secondLen <= i:
                    secondSum = sum(nums[j:j+secondLen])    
                    ans = max(ans , firstSum+secondSum)

        return ans


        