class Solution:
    def maxDistance(self, moves: str) -> int:
        u_count = moves.count('U')
        d_count = moves.count('D')
        l_count = moves.count('L')
        r_count = moves.count('R')
        f_count = moves.count('_')
        
        dist = 0
        dist += abs(u_count-d_count) + abs(l_count - r_count) + f_count

        return dist