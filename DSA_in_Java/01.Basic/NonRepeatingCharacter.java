import java.util.Scanner;

public class NonRepeatingCharacter 
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);

        System.out.print("Enter the String :");
        String s=sc.next();

        int[] freq=new int[256];
        
        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);
            freq[ch]++;
        }

        for(int i=0;i<s.length();i++)
        {
            char ch=s.charAt(i);

            if(freq[ch]==1)
            {
                System.out.println("First non-repeating character: " + ch);
                return;
            }
        }

                System.out.println("No non-repeating character found");

                sc.close();
    }


}   
