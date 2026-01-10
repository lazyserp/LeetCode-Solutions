class Solution {
public:
    int rows,cols;
    bool isValid(int x , int y)
    {
        if ( x < 0 || x >= rows) return false;
        if ( y < 0 || y >= cols) return false;
        return true;
    }

    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        rows = n;
        cols = m;

        int totalPm = 0;

        for(int i=0 ; i < n ;i++)
        {
            for(int j=0 ; j < m ;j++)
            {
                if ( grid[i][j] == 1)
                {
                    totalPm += 4;
                    if ( isValid(i+1,j) && grid[i+1][j] == 1) totalPm -= 1;
                    if ( isValid(i,j-1) && grid[i][j-1] == 1) totalPm -= 1;
                    if ( isValid(i-1,j) && grid[i-1][j] == 1) totalPm -= 1;
                    if ( isValid(i,j+1) && grid[i][j+1] == 1) totalPm -= 1;
                }
            }
        }

        return totalPm;

        
    }
};