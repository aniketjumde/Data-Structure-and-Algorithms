public class MissingNumber {

    public static int findMissing(int arr[]) 
    {
        int n=arr.length;

        int sum=(n*(n+1))/2;

        for(int i=0;i<n;i++)
        {
            sum-=arr[i];
        }

        return sum; 
    }


    public static void main(String[] args) {

        int arr[] = {3, 0, 1};

        System.out.println(findMissing(arr));
    }
}