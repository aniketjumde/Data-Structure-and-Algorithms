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
            int X=sc.nextInt();
            int Y=sc.nextInt();
            
            int alice=500-2*X;
            int bob=1000-4*(X+Y);
            
            int Total=alice+bob;
            
            int aliceR=500-2*(X+Y);
            int bobR=1000-4*(Y);
            
            int TotalR=aliceR+bobR;
            
            int max=Math.max(TotalR,Total);
            
            System.out.println(max);

            
            
            
        }
	}
}
