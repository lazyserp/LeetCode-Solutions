class Solution:
    def maxCount(self, m: int, n: int, ops: List[List[int]]) -> int:
        if not ops:
            return m*n
            
        minA = min([i[0] for i in ops])
        minB = min([i[1] for i in ops])
        return minA*minB
        