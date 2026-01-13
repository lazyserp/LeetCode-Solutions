class Solution {
    public boolean canFinish(int numCourses, int[][] prerequisites) 
    {
        int count = 0;

        ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
        for(int i=0 ; i < numCourses ;i++)
        {
            adj.add(new ArrayList<>());
        }

        int[] inDeg = new int[numCourses];
        for(int[] term : prerequisites)
        {
            int course = term[0];
            int preq = term[1];

            adj.get(preq).add(course);
            inDeg[course]++;
        }

        Queue<Integer> q = new ArrayDeque<>();

        for(int i=0 ;i < inDeg.length ;i++)
        {
            if ( inDeg[i] == 0 )
            {
                q.offer(i);
            }
        }

        while ( !q.isEmpty())
        {
            int node = q.poll();
            count++;

            for(int nbr  : adj.get(node))
            {
                inDeg[nbr]--;
                if ( inDeg[nbr] == 0)
                {
                    q.offer(nbr);
                }                
            }
        }

        return count == numCourses;


        
    }
}