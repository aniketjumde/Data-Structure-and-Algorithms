import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        Scanner sc=new Scanner(System.in);
        
        int T = sc.nextInt();

        while (T-- > 0) {
            int P = sc.nextInt();
            int Q = sc.nextInt();

            int total = P + Q;
            int block = total / 2;

            if (block % 2 == 0) {
                System.out.println("Alice");
            } else {
                System.out.println("Bob");
            }
        }

        sc.close();
    }
	
}
