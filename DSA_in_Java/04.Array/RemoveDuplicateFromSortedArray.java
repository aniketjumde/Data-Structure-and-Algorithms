import java.util.Arrays;

public class RemoveDuplicateFromSortedArray
{
    public static int removeDuplicates(int[] arr) {

        if (arr == null || arr.length == 0) 
        {
            return 0;
        }

        int j = 0;

        for (int i = 0; i < arr.length - 1; i++) 
        {

            if (arr[j] != arr[i + 1])
            {
                j++;
                arr[j] = arr[i + 1];
            }
        }

        return j + 1;
    }

    public static void main(String[] args) 
    {

        int[] arr = {1, 1, 2, 2, 3, 3, 4};

        int length = removeDuplicates(arr);

        System.out.println("Unique Elements = " + length);

        for (int i = 0; i < length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

    

