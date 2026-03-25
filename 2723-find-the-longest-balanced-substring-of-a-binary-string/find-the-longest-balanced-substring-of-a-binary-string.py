class Solution:
    def findTheLongestBalancedSubstring(self, s: str) -> int:
        ans = 0
        zero = 0
        one = 0

        for i in range(0,len(s)):
            if s[i] == '0':
                if i > 0 and s[i-1] == '1':
                    zero = 0
                    one = 0
                zero += 1
            else:
                one += 1
                balancedLength = 2 * min(zero,one)
                ans = max(ans,balancedLength)
        
        return ans



        
        