class Solution:
    def beautySum(self, s: str) -> int:
        ans = 0

        for i in range(len(s)):
            freq = [0] * 26
            for j in range(i,len(s)):
                idx = ord(s[j]) - ord('a')
                freq[idx] += 1

                mx = max(freq)
                mn = min([p for p in freq if p > 0])

                ans += (mx-mn)
        return ans
        