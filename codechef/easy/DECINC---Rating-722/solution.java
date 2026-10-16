import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        
        if(N%4==0)
        {
            System.out.println(N+1);
        }
        else
        {
            System.out.println(N-1);
        }
	}
}
