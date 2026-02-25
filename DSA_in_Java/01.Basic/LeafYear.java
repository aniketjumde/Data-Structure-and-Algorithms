import java.util.Scanner;

public class LeafYear 
{

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        System.out.println("Enter the Year to Check It is leap year or Not :");
        int year=sc.nextInt();

        if((year%4==0 && year%100!=0) || year%400==0)
        {
            System.out.println("Leap year :"+year);
        }
        else
        {
            System.out.println("Not Leap Year "+year);
        }
    }
    
}
