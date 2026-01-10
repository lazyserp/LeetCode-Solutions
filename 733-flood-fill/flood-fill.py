class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        xMod = [1,0,-1,0]
        yMod = [0,-1,0,1]

        n = len(image)
        m = len(image[0])

        origColor = image[sr][sc]
        newColor = color

        def dfs(x,y,origColor,newColor):

            if ( not valid(x,y)):
                return
            if ( image[x][y] == newColor):
                return
            
            if ( image[x][y] == origColor):
                image[x][y] = newColor

                for i in range(0,4):
                    dfs(x + xMod[i], y + yMod[i],origColor,newColor)

        def valid(x,y):
            if x < 0 or x >= n:
                return False
            if y < 0 or y >= m:
                return False
            return True

        dfs(sr,sc,image[sr][sc],color)
        return image
