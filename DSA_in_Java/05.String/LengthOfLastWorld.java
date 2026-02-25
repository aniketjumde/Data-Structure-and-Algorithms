import java.util.*;

public class LengthOfLastWorld
{
    public static int lengthOfLastWord(String s) 
    {
        String str=s.trim();
        int count=0;
        int i=str.length()-1;
        while(i>=0)
        {
            if(str.charAt(i)!=' ')
            {
                count++;
            }
            else
            {
                break;
            }
            i--;
        }

        return count;
    }

    public static int lengthOfLastWordo(String s) 
    {
        int count=0;
        int n=s.length()-1;

        while(n>=0 && s.charAt(n)==' ')
        {
            n--;
        }

        while(n>=0 && s.charAt(n)!=' ')
        {
            count++;
            n--;
        }
        
        return count;
    }

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);

        String s=sc.nextLine();

        System.out.println("Last World Count : "+ lengthOfLastWordo(s));
    }
}