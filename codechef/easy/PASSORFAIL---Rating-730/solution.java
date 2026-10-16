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
            int N=sc.nextInt();
            int X=sc.nextInt();
            int P=sc.nextInt();
            
            int TMakrs=X*3-(N-2);
            
            if(TMakrs>=P)
            {
                System.out.println("PASS");
            }
            else
            {
                System.out.println("FAIL");
            }
        }
	}
}
