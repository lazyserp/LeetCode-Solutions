class NumMatrix {
public:
    vector<vector<int>> pfx;
    NumMatrix(vector<vector<int>>& matrix) 
    {
        int r = matrix.size();
        int c = matrix[0].size();
        pfx.resize(r+1,vector<int>(c+1,0));

        for(int i=1 ; i <= r ; i++)
        {
            for(int j=1 ; j <= c ;j++)
            {
                pfx[i][j] = matrix[i-1][j-1] + pfx[i-1][j] + pfx[i][j-1] - pfx[i-1][j-1];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) 
    {
        //to correct padding
        row1++ , col1++ , row2++ , col2++ ;
        return pfx[row2][col2] - pfx[row1 - 1][col2] - pfx[row2][col1 - 1] + pfx[row1 -1][col1 - 1];
        
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */