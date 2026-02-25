//Move All Zeros to End 
import java.util.*;

public class ZerosToEnd 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the Size of Array :");
        int n=sc.nextInt();

        int[] arr=new int[n];

        for(int i=0;i<n;i++)
        {
            System.out.print("["+i+"]:");
            arr[i]=sc.nextInt();
        }

        System.out.println("Before Shifting :");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        int index=0;

        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            {
                arr[index]=arr[i];
                index++;
            }
        }

        while(index<n)
        {
            arr[index]=0;
            index++;
        }

        System.out.println("After Shifting :");
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}
