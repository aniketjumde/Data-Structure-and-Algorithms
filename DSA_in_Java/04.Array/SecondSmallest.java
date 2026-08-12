public class SecondSmallest 
{
    public static int getSmallestElement(int arr[])
    {
        int n=arr.length;

        

        int firstS=Integer.MAX_VALUE;
        int secS=Integer.MAX_VALUE;

        for(int i=0;i<n;i++)
        {
            if(arr[i]<firstS)
            {
                secS=firstS;
                firstS=arr[i];
            }
            else if(arr[i]<secS && arr[i]!=firstS)
            {
                secS=arr[i];
            }
        }

        return secS;
    }

     public static void main(String[] args) {

        int arr[] = {5, 2, 8, 1, 9};

        int result = getSmallestElement(arr);

        if (result == -1) {
            System.out.println("Second smallest element does not exist.");
        } else {
            System.out.println("Second Smallest Element = " + result);
        }
    }
}
