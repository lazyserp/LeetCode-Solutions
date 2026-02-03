class Solution {
public:
    int m;
    int n ;

    void DFS(int i, int j ,vector<vector<int>> &image,int oldColor , int newColor )
    {
        if ( i < 0 || i >= m) return ;
        if ( j < 0 || j >= n) return ;
        if ( image[i][j] != oldColor) return ;

        if ( image[i][j] == oldColor)
        {
            image[i][j] = newColor;
            DFS(i+1,j,image,oldColor,newColor);
            DFS(i,j-1,image,oldColor,newColor);
            DFS(i-1,j,image,oldColor,newColor);
            DFS(i,j+1,image,oldColor,newColor);


        }
        

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        m = image.size();
        n = image[0].size();
        int oldColor = image[sr][sc];

        if (oldColor == color) return image;
        DFS(sr,sc,image,oldColor,color);

        return image;

        
    }
};