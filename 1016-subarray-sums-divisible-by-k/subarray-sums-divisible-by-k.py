class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        ans = 0
        i,j = 0,0
        currSum = 0
        n = len(nums)

        mapy = dict()
        mapy[0] = 1

        for i in range(len(nums)):
            currSum += nums[i]

            term = currSum % k
            if term in mapy:
                ans += mapy[term]

            mapy[term] = mapy.get(term,0)+1

        return ans


        