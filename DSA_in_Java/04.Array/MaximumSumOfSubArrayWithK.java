public class MaximumSumOfSubArrayWithK
{
    public static int maxSumSubarray(int[] arr, int k) 
    {
        int windowSum=0;

        for(int i=0;i<k;i++)
        {
            windowSum+=arr[i];
        }

        int maxSum=windowSum;
        
        for(int j=k;j<arr.length;j++)
        {
            windowSum += arr[j] - arr[j - k];

            maxSum = Math.max(maxSum, windowSum); 
       }
       
        return maxSum;
    }

    public static void main(String[] args) {
        int[] arr = {2,1,5,1,3,2};
        int k = 3;
        int result = maxSumSubarray(arr, k);
        System.out.println("Maximum sum of subarray with size " + k + " is: " + result);
    }

}
