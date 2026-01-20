class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) 
    {
        int n = grid.size();

        queue<pair<int,int>> q;
        for(int i=0 ; i < n ; i++)
        {
            for(int j=0 ; j < n ;j++)
            {
                if ( grid[i][j] == 1) q.push(make_pair(i,j));
            }
        }

        int res = -1;
        int xMod[] = { 1, 0, -1, 0};
        int yMod[] = { 0, -1, 0, 1};

        while ( !q.empty())
        {
            auto curr = q.front();
            q.pop();

            int x = curr.first;
            int y = curr.second;
            res = grid[x][y];

            for(int i=0 ; i < 4 ; i++)
            {
                int xNbr = x + xMod[i];
                int yNbr = y + yMod[i];

                if ( min(xNbr,yNbr) >= 0 && max(xNbr,yNbr) < n && grid[xNbr][yNbr] == 0)
                {
                    grid[xNbr][yNbr] = grid[x][y]+1;
                    q.push(make_pair(xNbr,yNbr));
                }
            }
        }
        if ( res > 1) return res-1;

        return -1;
    }
};