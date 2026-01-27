class Solution {
    public void sortColors(int[] nums) 
    {
        int countZero = 0;
        int countOne = 0;
        int countTwo = 0;

        for(int i=0 ;i < nums.length ;i++)
        {
            if ( nums[i] == 0) countZero++;
            if ( nums[i] == 1) countOne++;
            if ( nums[i] == 2) countTwo++;
        }

        for(int i= 0; i < nums.length ;i++)
        {
            while ( countZero > 0)
            {
                nums[i] = 0;
                countZero--;
                i++;
            }

            while ( countOne > 0)
            {
                nums[i] = 1;
                countOne--;
                i++;
            }

            while ( countTwo > 0)
            {
                nums[i] = 2;
                countTwo--;
                i++;
            }
        }
        
    }
}