class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        mn = min(len(strs[0]), len(strs[-1]))

        ans = ""
        ptr = 0

        while(ptr < mn):
            if strs[0][ptr] != strs[-1][ptr]:
                return ans
            ans += strs[0][ptr]
            ptr += 1 
        
        return ans
        