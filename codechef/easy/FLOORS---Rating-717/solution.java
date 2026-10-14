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
            
            int floorX=(X-1)/10+1;
            int floorY=(Y-1)/10+1;
            
            int ans=Math.abs(floorX-floorY);
            
            System.out.println(ans);
        }
	}
}
