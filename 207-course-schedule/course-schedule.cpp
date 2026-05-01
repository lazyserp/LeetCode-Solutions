class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites)
    {
        vector<vector<int>> adj(numCourses);
        vector<int> indeg(numCourses);

        for(auto &p : prerequisites)
        {
            adj[p[1]].push_back(p[0]);
            indeg[p[0]]++;
        }

        queue<int> q;
        for(int i=0 ; i <numCourses ;i++)
        {
            if ( indeg[i] == 0) q.push(i);
        }

        int visited = 0;
        while ( !q.empty())
        {
            int node = q.front();
            q.pop();
            visited++;

            for(int i : adj[node])
            {
                indeg[i]--;
                if ( indeg[i] == 0) q.push(i);
            }
        }

        if (visited != numCourses) return false;
        return true;
        
    }
};