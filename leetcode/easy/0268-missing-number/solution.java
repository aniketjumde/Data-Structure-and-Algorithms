class Solution {
    public int missingNumber(int[] nums) 
    {
         int n=nums.length;
        
        int sum_of_n=(n*(n+1))/2;
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        
        

        return sum_of_n-sum;
        
    }
}