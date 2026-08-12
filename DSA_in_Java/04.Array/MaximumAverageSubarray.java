public class MaximumAverageSubarray {

    public static double findMaxAverage(int[] arr, int k) 
    {
        int windowSum=0;

        for(int i=0;i<k;i++)
        {
            windowSum+=arr[i];
        }
        
        double maxSum=windowSum;

        for(int j=k;j<arr.length;j++)
        {
            windowSum += arr[j] - arr[j - k];

            maxSum = Math.max(maxSum, windowSum); 
       }
       
        return maxSum/k;
    }

    public static void main(String[] args) {

        int[] arr = {1, 12, -5, -6, 50, 3};
        int k = 4;

        double result = findMaxAverage(arr, k);

        System.out.println(result);
    }
}