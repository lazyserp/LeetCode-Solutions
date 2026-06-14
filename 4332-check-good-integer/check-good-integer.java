class Solution {
    public boolean checkGoodInteger(int n) 
    {
        int digitSum = 0;
        int squareSum = 0;

        while (  n > 0)
        {
            int last = n % 10;

            digitSum += last;
            squareSum += (last*last);

            n = n / 10;
        }

        if ( squareSum - digitSum >= 50) return true;
        return false;
        
    }
}