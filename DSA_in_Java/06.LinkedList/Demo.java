import java.util.Arrays;

public class Demo 
{
    public static void main(String[] args)
    {
        int arr[]={0,1,0,1,0,0};

        int count=0;
        System.out.println("Before Sort"+Arrays.toString(arr));

        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]==0)
            {
                count++;
            }
        }

        for(int i=0;i<count;i++)
        {
            arr[i]=0;
        }

        for(int i=count;i<arr.length;i++)
        {
            arr[i]=1;
        }

        System.out.println("After Sort"+Arrays.toString(arr));

        

    }
}
