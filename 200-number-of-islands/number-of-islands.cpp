class Solution {
public:
    void DFS(int r,int c, vector<vector<int>> &visited , vector<vector<char>>& grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        if ( r < 0 || r >= n) return;
        if ( c < 0 || c >= m) return;
        if ( grid[r][c] == '0') return;

        if ( visited[r][c] == 1) return;
        visited[r][c] = 1;

        DFS(r+1,c,visited,grid);
        DFS(r,c-1,visited,grid);
        DFS(r-1,c,visited,grid);
        DFS(r,c+1,visited,grid);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;

        vector<vector<int>> visited(rows,vector<int>(cols,0));
        
        for(int i=0 ; i < rows ;i++)
        {
            for(int j=0; j < cols ;j++)
            {
                if ( grid[i][j] == '1' && visited[i][j] == 0)
                {
                    ans++;
                    DFS(i,j,visited,grid);
                }
            }
        }
        return ans;
    }
};