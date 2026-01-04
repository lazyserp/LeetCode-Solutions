class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        rowsZero = set()
        colsZero = set()

        rows = len(matrix)
        cols = len(matrix[0])
        
        for i in range(0,rows):
            for j in range(0,cols):
                if matrix[i][j] == 0:
                    rowsZero.add(i)
                    colsZero.add(j)

        
        for r in rowsZero:
            for c in range(0,cols):
                matrix[r][c] = 0
        
        for c in colsZero:
            for r in range(0,rows):
                matrix[r][c] = 0

        
        