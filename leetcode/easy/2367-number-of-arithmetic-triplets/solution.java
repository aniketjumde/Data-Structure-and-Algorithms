class Solution {
    public int arithmeticTriplets(int[] nums, int diff) 
    {
        int count=0;


        for(int i=0;i<nums.length;i++)
        {
            for(int j=i+1;j<nums.length;j++)
            {
                int ans=nums[j]-nums[i];

                for(int k=j+1;k<nums.length;k++)
                {
                    int result=nums[k]-nums[j];
                    if( ans==diff && result==diff )
                    {
                        count++;
                    }
                }
            }
        }

        return count;    
    }
}