class Solution {
    public int findDuplicate(int[] nums) 
    {
        Arrays.sort(nums);

        int j=0;
        for(int i=1;i<nums.length;i++,j++)
        {
            if(nums[i]==nums[j])
            {
                return nums[i];
            }
        }

       return -1; 
    }
}