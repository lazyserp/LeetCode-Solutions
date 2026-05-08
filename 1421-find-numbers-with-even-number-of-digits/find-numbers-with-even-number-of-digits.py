class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        return ( sum(1 for i in nums if (int(math.log10(i)) +1 )%2 == 0))
        