import java.util.*;

public class FirstNegativeIntegerinK 
{
    public List<Integer> negativeNumber(int arr[],int k)
    {
        List<Integer> list = new ArrayList<>();

        for (int i = 0; i <= arr.length - k; i++) 
        {

            boolean found = false;

            for (int j = i; j < i + k; j++) {

                if (arr[j] < 0) {
                    list.add(arr[j]);
                    found = true;
                    break;
                }
            }

            if (!found) {
                list.add(0);
            }
        }

        return list;

    }

      public static void main(String[] args) 
      {
                int[] arr = { -8, 2, 3, -6, 10 };
                int k = 3;
                FirstNegativeIntegerinK solver = new FirstNegativeIntegerinK();
                System.out.println(solver.negativeNumber(arr, k));
        }
}
