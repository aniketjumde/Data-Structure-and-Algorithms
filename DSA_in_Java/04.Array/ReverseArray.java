import java.util.Arrays;

public class ReverseArray 
{
    public static void reverse(int arr[],int left,int right)
    {
        if(left>=right)
        {
            return;
        }

        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

       reverse(arr, left+1, right-1);

    }

    public static void main(String[] args)
    {
        int arr[]={2,4,6,7,8,9};
        reverse(arr,0,arr.length-1);
        System.out.println(Arrays.toString(arr));
        int left=0;
        int right=arr.length-1;
        while(left<right)
        {
            int temp=arr[left];
            arr[left]=arr[right];
            arr[right]=temp;

            left++;
            right--;
        }

        System.out.println(Arrays.toString(arr));
    }
}
