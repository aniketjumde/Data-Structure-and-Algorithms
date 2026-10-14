import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        int T=sc.nextInt();
        
        while(T-->0)
        {
            int A=sc.nextInt();
            int B=sc.nextInt();
            int C=sc.nextInt();
            int D=sc.nextInt();
            
            double SppedA=(A/B);
            double SppedC=(C/D);

            if(SppedA==SppedC)
            {
                System.out.println("Equal");
            }
            else if(SppedA>SppedC)
            {
                System.out.println("Alice");
            }
            else
            {
                System.out.println("Bob");
            }

        }
	}
}
