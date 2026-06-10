//Left Rotate by one
import java.util.Arrays;

class RightRotate{
    
    public static void Rotate(int arr[],int k)
    {
        int n=arr.length;
        
        if(n<=1) return ;
        
        k=k%n;
        
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        
        System.out.println(Arrays.toString(arr));
    }
    
    public static void reverse(int arr[],int start,int end)
    {
        while(start<=end)
        {
            int temp=arr[end];
            arr[end]=arr[start];
            arr[start]=temp;
            start++;
            end--;
        }
    }
    
    public static void main(String[] args) {
        
        int arr[]={1,2,3,4,5,6,7};
        
        Rotate(arr,3);
    }
}
