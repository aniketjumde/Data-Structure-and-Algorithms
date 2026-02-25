import java.util.*;

public class SecondLargest 
{
    public static int getSecondLargest(int[] arr, int n) 
    {
        if (n < 2) {
            return -1;  
        }

        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        for (int i = 0; i < n; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } 
            else if (arr[i] > secondLargest && arr[i] < largest) 
            {
                secondLargest = arr[i];
            }
        }

        if (secondLargest == Integer.MIN_VALUE) {
            return -1; 
        }

        return secondLargest;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        int result = getSecondLargest(arr, n);

        if (result == -1)
            System.out.println("No second largest element");
        else
            System.out.println("Second largest: " + result);
    }
}
