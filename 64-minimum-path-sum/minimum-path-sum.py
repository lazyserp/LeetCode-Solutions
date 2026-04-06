class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        n = len(grid)
        m = len(grid[0])

        @lru_cache(None)
        def solve(i,j):
            ans = 0
            if i == n-1 and j == m-1:
                return grid[i][j]
            if i >= n or j >= m:
                return float('inf')

            right = solve(i,j+1)
            down = solve(i+1,j)

            return grid[i][j] + min(right,down)

        return solve(0,0)        