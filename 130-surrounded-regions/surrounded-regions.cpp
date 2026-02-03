class Solution {
public:
    int m;
    int n;
    void DFS(int i, int j,vector<vector<char>>& board,vector<vector<int>> &visited)
    {
        if ( i < 0 || i >= m) return ;
        if ( j < 0 || j >= n) return ;
        if ( visited[i][j] == 1 || board[i][j] == 'X') return;

        visited[i][j] = 1;

        if ( board[i][j] == 'O')
        {
            DFS(i+1,j,board,visited);
            DFS(i,j-1,board,visited);
            DFS(i-1,j,board,visited);
            DFS(i,j+1,board,visited);
        }
    }
    void solve(vector<vector<char>>& board) 
    {
        m = board.size();
        n = board[0].size();

        vector<vector<int>> visited(m,vector<int>(n,0));
        for(int i=0 ; i < m ;i++)
        {
            if (board[i][0] == 'O' && visited[i][0] == 0) DFS(i,0,board,visited);
        }
        
        for(int i=0 ; i < m ;i++)
        {
            if (board[i][n-1] == 'O' && visited[i][n-1]== 0) DFS(i,n-1,board,visited);
        }

        for(int i=0 ; i < n ;i++)
        {
            if (board[0][i] == 'O' && visited[0][i]== 0) DFS(0,i,board,visited);
        }

        for(int i=0 ; i < n ;i++)
        {
            if (board[m-1][i] == 'O' && visited[m-1][i]== 0) DFS(m-1,i,board,visited);
        }

        for(int i=0 ; i < m ;i++)
        {
            for(int j=0 ; j < n ; j++)
            {
                if ( board[i][j] == 'O' && visited[i][j] == 0)
                {
                    board[i][j] = 'X';
                }
            }
        }

        
    }
};