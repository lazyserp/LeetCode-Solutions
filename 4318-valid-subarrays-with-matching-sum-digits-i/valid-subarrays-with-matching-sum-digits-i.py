class Solution:
    def countValidSubarrays(self, nums: list[int], x: int) -> int:
        ans = 0
        n=len(nums)

        for i in range(0,n):
            sm = 0
            for j in range(i,n):
                sm += nums[j]

                if sm % 10 != x:
                    continue

                first = sm
                
                while first >= 10:
                    first = first // 10

                if first == x:
                    ans += 1
        
        return ans


                