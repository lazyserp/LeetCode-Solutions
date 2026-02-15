class Solution {
    public int minimumTotal(List<List<Integer>> triangle) 
    {
        int n = triangle.size();
        int ans = 0;

        List<List<Integer>> dp = new ArrayList<>();
        for(List<Integer> row : triangle)
        {
            dp.add(new ArrayList<>(row));
        }

        for(int i=n-2 ;i >= 0 ;i--)
        {

            for(int j=0 ; j <= i ;j++)
            {
                int leftChild = dp.get(i+1).get(j);
                int rightChild = dp.get(i+1).get(j+1);

                int val = triangle.get(i).get(j) + Math.min(leftChild,rightChild);

                dp.get(i).set(j,val);
            }
        }

        return dp.get(0).get(0);
        
    }
}