class Solution {
    public void rotate(int[][] matrix) 
    {
        int n = matrix.length;

        for(int i=0 ; i < n ;i++)
        {
            for(int j=i+1 ; j < n ;j++)
            {
                int tmp = matrix[i][j];
                matrix[i][j] =  matrix[j][i];
                matrix[j][i] =  tmp;
            }
        }

        for(int i = 0 ; i < n ;i++)
        {
            int s = 0;
            int e = matrix[i].length-1;

            while ( s < e)
            {
                int var = matrix[i][s];
                matrix[i][s] = matrix[i][e];
                matrix[i][e] = var;

                s++;
                e--;
            }
            
        }
    }
}