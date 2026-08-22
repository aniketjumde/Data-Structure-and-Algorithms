class Solution {
    public int findMaxLength(int[] arr) 
    {
        int maxLength=0;

        for(int i=0;i<arr.length;i++)
        {
            int zeros=0;
            int ones=0;

            for(int j=i;j<arr.length;j++)
            {
                if(arr[i]==0)
                {
                    zeros++;
                }
                else
                {
                    ones++;
                }

                if(ones==zeros)
                {
                    maxLength = Math.max(maxLength, j - i + 1);
                }
            }

            
        }

        return maxLength;    
    }
}