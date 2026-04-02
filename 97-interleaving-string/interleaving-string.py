class Solution:
    def isInterleave(self, s1: str, s2: str, s3: str) -> bool: 
        if len(s1) + len(s2) != len(s3):
            return False
            
        @lru_cache(None)
        def solve(i,j,k):
            if i < 0 and j < 0:
                return k < 0

            ans = False
            if i >= 0 and s1[i] == s3[k]:
                ans = ans or solve(i-1,j,k-1)

            if j >= 0 and s2[j] == s3[k]:
                ans = ans or solve(i,j-1,k-1)

            return ans

        i,j,k = len(s1)-1,len(s2)-1,len(s3)-1

        return solve(i,j,k)

            