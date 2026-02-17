class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        ans = []
        nums.sort()
        n = len(nums)

        for i in range(0,n):
            l = i+1
            r = n-1
            if ( i > 0  and nums[i] == nums[i-1]):
                continue

            while ( l < r):
                sumy = nums[i]+nums[l]+nums[r] 
                if sumy == 0:
                    ans.append([nums[i], nums[l], nums[r]])

                    while ( l < r and nums[l] == nums[l+1]):
                        l += 1
                    while( l < r and nums[r] == nums[r-1] ):
                        r -= 1
                    l += 1
                    r -= 1
                elif sumy < 0:
                    l += 1
                else:
                    r -= 1

        return ans
                

                

        