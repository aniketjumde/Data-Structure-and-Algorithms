class Solution {
    public double findMaxAverage(int[] nums, int k)
    {
        int windowSum=0;
        for(int i=0;i<k;i++)
        {
            windowSum+=nums[i];
        }

        double max=(double)windowSum/k;

        for(int i=1;i<=nums.length-k;i++)
        {
            windowSum+=nums[i+k-1]-nums[i-1];
            double avg=(double)windowSum/k;
            if(avg > max)
            {
                max=avg;
            }
        }

        return max;
    }
}