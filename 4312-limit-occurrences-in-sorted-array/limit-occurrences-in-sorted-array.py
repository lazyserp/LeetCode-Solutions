class Solution:
    def limitOccurrences(self, nums: list[int], k: int) -> list[int]:
        ans = []
        ctr = dict(Counter(nums))
        print(ctr)
        
        for i in nums:
            if i in ans:
                continue
            for j in range(min(ctr[i],k)):
               
                ans.append(i)

        return ans
