class Solution {
    public Boolean isValid(int m,int n,int x,int y)
    {
        if ( x < 0 || x >= m) return false;
        if ( y < 0 || y >= n )return false;

        return true;

    }
    public int[][] updateMatrix(int[][] mat) 
    {
        int m = mat.length;
        int n = mat[0].length;

        int[] iMod = {1,0,-1,0};
        int[] jMod = {0,-1,0,1};

        Queue<int[]> q = new ArrayDeque<>();
        for(int i= 0 ;i < m ;i++)
        {
            for(int j=0; j < n ;j++)
            {
                if ( mat[i][j] == 0)
                {
                    q.offer(new int[]{i,j});
                }
                else mat[i][j] = -1;
            }
        }

        while (!q.isEmpty())
        {
            var curr = q.poll();

            for(int i= 0 ;i < 4 ;i++)
            {
                int nbrx = curr[0] + iMod[i];
                int nbry = curr[1] + jMod[i];

                if ( isValid(m,n,nbrx,nbry) && mat[nbrx][nbry] == -1)
                {
                    mat[nbrx][nbry] = mat[curr[0]][curr[1]]+1;
                    q.offer(new int[]{nbrx,nbry});
                }
            }
        }
        return mat;
    }
}