class Solution:
    def findTheLongestBalancedSubstring(self, s: str) -> int:
        ans = -1 * float('inf')

        def isBalanced(t):
            ctr = dict(Counter(t))
            if '0' in t and '1' in t and ctr['0'] == ctr['1']:
                onePresent = False
                for p in t:
                    if p == '1':
                        onePresent = True
                    if onePresent and p == "0":
                        break
                else:
                    return len(t)
            return 0

        for i in range(len(s)):
            for j in range(i,len(s)):
                ans = max(ans,isBalanced(s[i:j+1]))
        return ans
                    

