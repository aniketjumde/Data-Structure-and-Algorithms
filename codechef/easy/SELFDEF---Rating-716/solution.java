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
            int n=sc.nextInt();
            int count=0;
            for(int i=0;i<n;i++)
            {
                int num=sc.nextInt();
                if(10<=num && num<=60)
                {
                    count++;
                }
            }
            
            System.out.println(count);
        }

	}
}
