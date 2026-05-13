class Solution:
    def concatWithReverse(self, nums: list[int]) -> list[int]:
        rev = list(reversed(nums))
        return nums+rev
        