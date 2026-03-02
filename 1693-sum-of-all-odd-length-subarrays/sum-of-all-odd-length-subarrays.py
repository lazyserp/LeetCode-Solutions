class Solution:
    def sumOddLengthSubarrays(self, arr: List[int]) -> int:
        ans = 0
        n = len(arr)
        for i in range(len(arr)):
            contri = math.ceil(((i+1)*(n-i) )/ 2)
            ans += arr[i] * contri
        return ans

        