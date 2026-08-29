class Solution 
{
    public static boolean isAlphaNumeric(char ch) {
        if((ch>='0' && ch<='9') || (ch>='a' && ch<='z'))
        {
            return true;
        }

        return false;
    }

    public boolean isPalindrome(String s) 
    {
        int start=0;
        int end=s.length()-1;
        s = s.toLowerCase();

        while(start<end)
        {
           if(!isAlphaNumeric(s.charAt(start)))
           {
                start++;
                continue;
           }

           if(!isAlphaNumeric(s.charAt(end)))
           {
                end--;
                continue;
           }

           if(s.charAt(start)!=s.charAt(end))
           {
                return false;
           }


            start++;
            end--;
        }

        return true;
    }
}