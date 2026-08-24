class Solution {
    public int[] recoverOrder(int[] order, int[] friends)
    {
        int result[]=new int[friends.length];
        int i=0;
        for(int p:order)
        {
            for(int f:friends)
            {
                if(p==f)
                {
                    result[i++]=p;
                    break;
                }
            }
        }

        return result;
        
        
    }
}