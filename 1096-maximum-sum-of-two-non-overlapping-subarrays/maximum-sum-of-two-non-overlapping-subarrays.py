class Solution:
    def maxSumTwoNoOverlap(self, nums: List[int], firstLen: int, secondLen: int) -> int:
        ans = 0
        n = len(nums)

        pfx = [0] *( n+1)
        pfx[0] = nums[0]
        for i in range(1,n):
            pfx[i] = pfx[i-1] + nums[i]

        for i in range(0,n - firstLen+1):
            firstSum = pfx[i+firstLen-1] - pfx[i-1]

            for j in range(0,n-secondLen+1):
                
                if i + firstLen <= j or j + secondLen <= i:
                    secondSum = pfx[j+secondLen-1] - pfx[j-1]   
                    ans = max(ans , firstSum+secondSum)

        return ans


        