class Solution:
    def numberOfSubarrays(self, nums: List[int], k: int) -> int:
        ans = 0
        currCount = 0
        chk = defaultdict(int)
        chk[0] = 1

        for i in range(0,len(nums)):
            if nums[i] % 2 != 0:
                currCount += 1

            term = currCount - k 
            if term in chk:
                ans += chk[term]
            chk[currCount] += 1

        return ans
           

        