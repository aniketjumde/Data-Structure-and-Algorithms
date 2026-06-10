//Left Rotate by one
import java.util.Arrays;

class LeftRotae {
    
    public static void Rotate(int arr[])
    {
        int n=arr.length;
        int temp=arr[0];
        for(int i=1;i<arr.length;i++)
        {
            arr[i-1]=arr[i];
        }
        
        arr[n-1]=temp;
        
        System.out.println(Arrays.toString(arr));
    }
    
    public static void main(String[] args) {
        
        int arr[]={1,2,3,4,5,6};
        
        Rotate(arr);
    }
}
