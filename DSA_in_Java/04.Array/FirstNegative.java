//: First Negative Number in Every Window of Size K


import java.util.ArrayList;
import java.util.List;

public class FirstNegative 
{
    public static List<Integer> firstNegative(int[] arr, int k)
    {
        List<Integer> list=new ArrayList<>();

        for(int i=0;i<=arr.length-k;i++)
        {
            boolean found=false;

            for(int j=i;j<i+k;j++)
            {
                if(arr[j]<0)
                {
                    list.add(arr[j]);
                    found=true;
                    break; //after first negative found
                } 
            }
            if(!found)
            {
                list.add(0);
            }
        }



        return list;

    }

     public static void main(String[] args) {

        int[] arr = {12, -1, -7, 8, -15, 30, 16, 28};
        int k = 3;

        System.out.println(firstNegative(arr, k));
    }
    
}
