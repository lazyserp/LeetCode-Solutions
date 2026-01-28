class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        memo = [ [-1] * n for i in range(m)]

        def f(i,j):
            if ( i >= m or j >=n ):
                return 0
            if ( i == m-1 and j == n-1):
                return 1
            if ( memo[i][j] != -1):
                return memo[i][j]

            memo[i][j] = f(i,j+1) + f(i+1,j)
            return memo[i][j]

        return f(0,0)

        