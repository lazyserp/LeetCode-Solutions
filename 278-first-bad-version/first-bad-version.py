# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        l = 0
        h = n

        while ( l+1 < h):
            mid = l + (h-l) // 2
            if (isBadVersion(mid)):
                h=mid
            else:
                l=mid
        
        return h
        