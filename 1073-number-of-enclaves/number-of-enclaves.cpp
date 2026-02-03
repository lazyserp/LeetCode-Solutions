class Solution {
public:
    int m;
    int n;
    void DFS(int i,int j, vector<vector<int>>& grid,vector<vector<int>>& visited)
    {
        if ( i < 0 || i >= m) return ;
        if ( j < 0 || j >= n) return ;
        if ( visited[i][j] == 1) return ;

        visited[i][j] = 1;
        if ( grid[i][j] == 1)
        {
            DFS(i+1,j,grid,visited);
            DFS(i,j-1,grid,visited);
            DFS(i-1,j,grid,visited);
            DFS(i,j+1,grid,visited);
        }

    }
    int numEnclaves(vector<vector<int>>& grid) 
    {
        m = grid.size();
        n = grid[0].size();
        int ans = 0;
        vector<vector<int>> visited(m,vector<int>(n,0));

        for(int i=0 ; i < m ;i++)
        {
            if ( grid[i][0] == 1 && visited[i][0] == 0)
            {
                DFS(i,0,grid,visited);
            }
        }

        for(int i=0 ; i < m ;i++)
        {
            if ( grid[i][n-1] == 1 && visited[i][n-1] == 0)
            {
                DFS(i,n-1,grid,visited);
            }
        }

        for(int i=0 ; i < n ;i++)
        {
            if ( grid[0][i] == 1 && visited[0][i] == 0)
            {
                DFS(0,i,grid,visited);
            }
        }

        for(int i=0 ; i < n ;i++)
        {
            if ( grid[m-1][i] == 1 && visited[m-1][i] == 0)
            {
                DFS(m-1,i,grid,visited);
            }
        }

        for(int i=0 ; i < m ;i++)
        {
            for(int j=0 ; j < n ;j++)
            {
                if ( grid[i][j] == 1 && visited[i][j] == 0)
                {
                    ans++;
                }
            }
        }


        return ans;
    }
};