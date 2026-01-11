class Solution {
public:
    void DFS(vector<vector<int>> &adj, int src, vector<int> &visited, int &nodes, int &edges )
    {  
        if ( visited[src] == 1) return;
        visited[src] = 1;
        nodes++;
        edges += adj[src].size();

        for(int i : adj[src])
        {
            if ( visited[i] == 0)
            {
                DFS(adj,i,visited,nodes,edges);
            }
        }


    }
    int countCompleteComponents(int n, vector<vector<int>>& edges) 
    {
        vector<vector<int>> adj(n);

        for(auto &i  : edges)
        {
            int src = i[0];
            int edg = i[1];

            adj[src].push_back(edg);
            adj[edg].push_back(src);
        }

        vector<int> visited(n,0);
        int CompleteComponents = 0;

        for(int i=0; i < n ;i++)
        {
            if ( visited[i] == 0)
            {
                int nodes = 0;
                int edges = 0;
                int source = i;

                DFS(adj,i,visited,nodes,edges);

                if ( edges == nodes*(nodes-1)) CompleteComponents++;
            }
        } 
        return CompleteComponents;
    }
};