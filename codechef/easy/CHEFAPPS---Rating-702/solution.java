import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main(String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        
        while(T-->0)
        {
            int S=sc.nextInt();
            int X=sc.nextInt();
            int Y=sc.nextInt();
            int Z=sc.nextInt();
            
            int freeSpace = S - X - Y;

            if (freeSpace >= Z) 
            {
                System.out.println(0);
            } 
            else if (S - X >= Z || S - Y >= Z) 
            {
                System.out.println(1);
            } 
            else 
            {
                System.out.println(2);
            }
        }
	}
}
