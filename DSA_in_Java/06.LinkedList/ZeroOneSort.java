public class ZeroOneSort 
{
    public static String sortString(String s)
    {
        char[] arr = s.toCharArray();
        int left=0;
        int right=arr.length-1;

        while(left<right)
        {
            while(left<right && arr[left]=='0')
            {
                left++;
            }

            while(left<right && arr[right]=='1')
            {
                right--;
            }

            if(left<right)
            {
                char temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;

                left++;
                right--;
            }
        }
    
        return new String(arr);
    }
    public static void main(String[] args)
    {
        String s="010101";
        System.out.println("Sort  "+ sortString(s));
    }
}
