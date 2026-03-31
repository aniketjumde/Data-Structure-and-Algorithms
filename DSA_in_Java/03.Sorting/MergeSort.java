import java.util.Arrays;
import java.util.Scanner;

public class MergeSort 
{

    public static void mergeSort(int arr[],int lb,int ub)
    {
        if(lb<ub)
        {
            int mid=(lb+ub)/2;
            mergeSort(arr,lb,mid);
            mergeSort(arr,mid+1,ub);
            merge(arr,lb,mid,ub);
        }
    }

    public static void merge(int arr[],int l,int mid,int r)
    {
        int[] temp=new int[r-l+1];
        int i=l;
        int j=mid+1;
        int k=0;

        while(i<=mid && j<=r)
        {
            if(arr[i]>arr[j])
            {
                temp[k]=arr[j];
                k++;
                j++;
            }
            else
            {
                temp[k]=arr[i];
                i++;
                k++;
            }
        }

        while(i<=mid)
        {
            temp[k++]=arr[i++];
        }

        while(j<=r)
        {
            temp[k++]=arr[j++];
        }

        k=0;
        for(int x=l;x<=r;x++,k++)  // Transfering element from originall array
        {
            arr[x]=temp[k];
        }
    }

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

        mergeSort(arr,0,n-1);
        System.out.println(Arrays.toString(arr));
    }
}
