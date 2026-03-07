import java.util.Scanner;

public class BubbleSort {

    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements: ");
        int n = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("Enter array elements:");

        for(int i = 0; i < n; i++)
        {
            arr[i] = sc.nextInt();
        }

        // Bubble Sort
        
        for(int i=n-1;i>0;i--)
        {
            int flag=0;
            for(int j=0;j<i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    flag=1;
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }

            if(flag==0)
            {
                break;
            }
        }

        // Print sorted array
        System.out.println("Sorted Array:");

        for(int i = 0; i < n; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}