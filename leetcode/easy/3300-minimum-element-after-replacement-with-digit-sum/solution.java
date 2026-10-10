class Solution {
    public int minElement(int[] nums) {
        
        int min=Integer.MAX_VALUE;
        for(int j=0;j<nums.length;j++)
        {
            String str=String.valueOf(nums[j]);
            int sum=0;
            for(int i=0;i<str.length();i++)
            {
                
                sum+=Character.getNumericValue(str.charAt(i));;
            }
            min=Math.min(min,sum);

            nums[j]=sum;
        }

        return min;
    }
}