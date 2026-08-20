class Solution 
{
    public int majorityElement(int[] nums) 
    {
        if(nums.length==1)
        {
            return nums[0];
        }

       int freq=0;
       int ans=0;
       for(int i=0;i<nums.length;i++)
       {
            if(freq==0)
            {
                ans=nums[i];
            }
            if(ans==nums[i])
            {
                freq++;
            }
            else
            {
                freq--;
            }
       }
        return ans;
     }
}