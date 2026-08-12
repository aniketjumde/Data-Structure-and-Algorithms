public class KadaneAlgorithm {

    public static int maxSubArray(int arr[]) {

        int currentSum = 0;
        int maxSum = arr[0];

        for (int i = 0; i < arr.length; i++) {

            currentSum += arr[i];

            maxSum=Math.max(currentSum,maxSum);


            if (currentSum < 0) {
                currentSum = 0;
            }
        }

        return maxSum;
    }

    public static void main(String[] args) {

        int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

        System.out.println(maxSubArray(arr));
    }
}