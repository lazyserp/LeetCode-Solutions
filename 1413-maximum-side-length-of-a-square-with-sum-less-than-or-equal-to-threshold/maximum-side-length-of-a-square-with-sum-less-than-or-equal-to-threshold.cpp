class Solution {
public:
    int getSum(int x1 ,int y1, int x2, int y2 , vector<vector<int>> &pfx)
    {
        int top = (x1) > 0 ? pfx[x1-1][y2] : 0;
        int left = (y1) > 0 ? pfx[x2][y1-1] : 0;
        int topLeft = (x1 > 0 && y1 > 0) > 0 ? pfx[x1-1][y1-1] : 0;

        return pfx[x2][y2] - top - left + topLeft;
    }
    int maxSideLength(vector<vector<int>>& mat, int threshold) 
    {
        int rows = mat.size();
        int cols = mat[0].size();

        vector<vector<int>> pfx(rows , vector<int>(cols,0));

        for(int i=0 ; i < rows ;i++)
        {
            for(int j=0 ; j < cols ; j++)
            {
                int top = i > 0 ? pfx[i-1][j] : 0;
                int left = j > 0 ? pfx[i][j-1] : 0;
                int topLeft = min(i,j) > 0 ? pfx[i-1][j-1] : 0;
                pfx[i][j] = mat[i][j] + top + left - topLeft;
            }
        }

        int ans = 0;
        int l = 1;
        int h = min(rows,cols);

        while ( l <= h)
        {
            int mid = (l+h) / 2;
            bool found = false;

            for(int i = 0 ; i + mid - 1 < rows ; i++)
            {
                for(int j=0 ; j + mid - 1 < cols ; j++)
                {
                    int x2 = i + mid - 1;
                    int y2 = j + mid - 1;

                    if ( getSum(i,j,x2,y2,pfx) <= threshold)
                    {
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }

            if (found)
            {
                ans = mid;
                l = mid + 1;
            }
            else h = mid-1;
        }

        return ans;

        
    }
};