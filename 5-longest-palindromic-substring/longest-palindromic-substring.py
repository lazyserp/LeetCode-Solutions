class Solution:
    def longestPalindrome(self, s: str) -> str:
        lBest , rBest = 0 , 0
        n = len(s)

        def solve(l,r):
            nonlocal lBest , rBest
            while l >=0 and r < n and s[l] == s[r]:
                l -= 1
                r += 1
            
            l += 1
            r -= 1
            if r-l > rBest - lBest:
                lBest,rBest = l,r
            
        for i in range(0,n):
            solve(i,i)
            solve(i,i+1)

        return s[lBest:rBest+1]

        