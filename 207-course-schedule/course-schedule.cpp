class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        vector<vector<int>> adj(numCourses);
        vector<int> inDegree(numCourses);

        for(auto &i : prerequisites)
        {
            adj[i[1]].push_back(i[0]);
            inDegree[i[0]]++;
        }

        queue<int> q;
        for(int i=0 ; i < numCourses ;i++)
        {
            if (inDegree[i] == 0)
            {
                q.push(i);
            }
        }

        int visited = 0;
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            visited++;

            for (int nbr : adj[node])
            {
                inDegree[nbr] -= 1;
                if (inDegree[nbr] == 0) q.push(nbr);
            }
        }

        if ( numCourses == visited) return true;
        return false;

        
    }
};