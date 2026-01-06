class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        maxlen = 0
        sy = set()
        l =0 

        for i in range(len(s)):
            while s[i] in sy:
                sy.remove(s[l])
                l += 1
            sy.add(s[i])

            maxlen = max(maxlen,i-l+1)
        return maxlen
        