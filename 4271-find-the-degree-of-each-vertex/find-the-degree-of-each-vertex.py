class Solution:
    def findDegrees(self, matrix: list[list[int]]) -> list[int]:
        ans = []
        n = len(matrix)
        m = len(matrix[0])
        for i in range(n):
            count = 0
            for j in range(m):
                if matrix[i][j] == 1:
                    count += 1
            ans.append(count)
        return ans

        