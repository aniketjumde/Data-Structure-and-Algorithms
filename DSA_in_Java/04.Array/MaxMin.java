public class MaxMin 
{
    public static void findMaxMin(int[] arr)
    {
        if (arr == null || arr.length == 0) 
        {
            System.out.println("Array is empty.");
            return;
        }

        int max=Integer.MIN_VALUE;
        int min=Integer.MAX_VALUE;

        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            else if(arr[i]<min)
            {
                min=arr[i];
            }
        }

        System.out.println("Max Value "+(max==Integer.MIN_VALUE?-1:max));
        System.out.println("Min Value "+(min==Integer.MAX_VALUE?-1:min));

    }

    public static void main(String[] args) 
    {

        int[] arr = {12, 45, 3, 89, 23, 5};

        findMaxMin(arr);
    }
}
