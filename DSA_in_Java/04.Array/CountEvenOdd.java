public class CountEvenOdd {

    public static void countEvenOdd(int[] arr) {

        if (arr == null || arr.length == 0) {
            System.out.println("Array is empty.");
            return;
        }

        int evenCount = 0;
        int oddCount = 0;

        for (int num : arr) {

            if (num % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        System.out.println("Even Count = " + evenCount);
        System.out.println("Odd Count = " + oddCount);
    }

    public static void main(String[] args) {

        int[] arr = {10, 15, 20, 25, 30, 45, 50};

        countEvenOdd(arr);
    }
}