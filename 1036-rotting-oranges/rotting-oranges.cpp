class Orange
{
    public:
        int i;
        int j;
        int time;

    Orange(int i,int j,int time)
    {
        this->i = i;
        this->j = j;
        this->time = time;
    }
};

class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int i , int j)
    {
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || i >= n) return false;
        if ( j < 0 || j >= m) return false;

        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        int freshCount = 0;
        int iMod[] = { 1,0,-1,0}; 
        int jMod[] = { 0,1,0,-1}; 
        queue<Orange> q ;

        //Knowing the position of Rotten oranges.
        for(int i=0 ;i < n ;i++)
        {
            for(int j=0 ;j < m ; j++)
            {
                if ( grid[i][j] == 2)
                {
                    q.push(Orange(i,j,0));
                }
                else if ( grid[i][j] == 1)
                {
                    freshCount++;
                }
            }
        }

        //BFS
        while (!q.empty())
        {
            Orange org = q.front();
            q.pop();

            int i = org.i;
            int j = org.j;
            ans = org.time;

            for(int p= 0; p < 4 ; p++)
            {
                int nbrI = i+iMod[p];
                int nbrJ = j+jMod[p];

                if ( isValid(grid,nbrI,nbrJ) && grid[nbrI][nbrJ] == 1)
                {
                    grid[nbrI][nbrJ]  = 2;
                    q.push(Orange(nbrI,nbrJ,org.time+1));
                    freshCount--;
                }
            }

        }

        if (freshCount != 0) return -1;
        return ans;
    }
};