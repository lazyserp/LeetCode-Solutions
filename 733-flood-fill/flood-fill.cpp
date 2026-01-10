class Solution {
public:
    bool isValid(vector<vector<int>>& image, int x, int y)
    {
        int n = image.size();
        int m = image[0].size();

        if ( x < 0 || x >= n) return false;
        if ( y < 0 || y >= m) return false;

        return true;
    }
    
    // For x,y make it new color
    void solve(vector<vector<int>>& image, int x, int y, int OrigColor,int newColor)
    {   
        if (!isValid(image,x,y)) return;
        if ( OrigColor == newColor) return;

        if ( image[x][y] == OrigColor)
        {
            image[x][y] = newColor;

            solve(image,x+1,y,OrigColor,newColor);
            solve(image,x,y-1,OrigColor,newColor);
            solve(image,x-1,y,OrigColor,newColor);
            solve(image,x,y+1,OrigColor,newColor);
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int origColor = image[sr][sc];

        solve(image,sr,sc,origColor,color);

        return image;
        
    }
};