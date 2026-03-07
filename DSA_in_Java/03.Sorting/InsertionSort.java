import java.util.Scanner;

public class InsertionSort 
{

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

        // Insertion Sort
        
        int j;
       for(int i=1;i<n;i++)
       {
            int t=arr[i];
            for( j=i-1;j>=0;j--)
            {
                if(arr[j]>t)
                {
                    arr[j+1]=arr[j];
                }
                else
                {
                    break;
                }
            }
            arr[j+1]=t;
       }

        // Print sorted array
        System.out.println("Sorted Array:");

        for(int i = 0; i < n; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
    
}
