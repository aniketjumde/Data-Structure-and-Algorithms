class Solution {
    public int[] leftRightDifference(int[] nums) 
    {
        int n=nums.length;
        int leftSum[]=new int[n];

        int sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=nums[i-1];
            leftSum[i]=sum;
        }

        int rightSum[]=new int[n];

        int rsum=0;
        for(int i=n-2;i>=0;i--)
        {
            rsum+=nums[i+1];
            rightSum[i]=rsum;
        }

        int[] result=new int[n];

        for(int i=0;i<n;i++)
        {
            result[i]=Math.abs(leftSum[i]-rightSum[i]);
        }

        return result;

    }
}