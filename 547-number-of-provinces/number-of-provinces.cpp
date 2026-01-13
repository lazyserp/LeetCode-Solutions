class Solution {
public:
    void DFS( vector<vector<int>> &adj , vector<int> &visited,int i)
    {
        visited[i] = 1;
        for(int p : adj[i])
        {
            if ( visited[p] == 0) DFS(adj,visited,p);
        }

    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int n = isConnected.size();
        vector<vector<int>> adj(n);

        int ProvinceCount = 0;

        for(int i=0 ;i < n ;i++)
        {
            for(int j=0 ; j < n ; j++)
            {
                if ( i != j && isConnected[i][j] == 1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        vector<int> visited(n); // 0 not viisted ,1 for visited


        for(int i = 0 ; i < n ;i++)
        {
            if ( visited[i] == 0)
            {
                DFS(adj,visited,i);
                ProvinceCount++;
            }
        }

        return ProvinceCount;


        
    }
};