class Solution {
public:
    int m ;
    int n ;

    void BFS(int i,int j, vector<vector<char>>& grid ,  vector<vector<int>> &visited)
    {
        if ( i < 0 || i >= m) return ;
        if ( j < 0 || j >= n) return ;
        if ( grid[i][j] == '0') return ;
        if (visited[i][j] == 1) return ;

        visited[i][j] = 1;

        BFS(i+1,j,grid,visited);
        BFS(i,j-1,grid,visited);
        BFS(i-1,j,grid,visited);
        BFS(i,j+1,grid,visited);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        m = grid.size();
        n = grid[0].size();

        vector<vector<int>> visited(m,vector<int>(n,0));

        int ans = 0;

        for(int i=0 ; i < m ;i++)
        {
            for(int j=0 ; j < n ;j++)
            {
                if ( grid[i][j] == '1' && visited[i][j] == 0)
                {
                    ans++;
                    BFS(i,j,grid,visited);
                }
            }
        }

        return ans;


        
    }
};