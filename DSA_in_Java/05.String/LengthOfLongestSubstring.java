import java.util.HashSet;

public class LengthOfLongestSubstring
{
    public static int lengthOfLongestSubstring(String s) 
    {
        HashSet<Character> set = new HashSet<>();

        int start = 0;
        int end = 0;
        int max_length = 0;

        while(end < s.length())
        {
            if(!set.contains(s.charAt(end)))
            {
                set.add(s.charAt(end));
                end++;
                max_length = Math.max(max_length, set.size());
            }
            else
            {
                set.remove(s.charAt(start));
                start++;
            }
        }
        return max_length;
    }

    public static void main(String[] args)
    {
        String s = "pwwkew";

        int result = lengthOfLongestSubstring(s);

        System.out.println("Longest Substring Length = " + result);
    }
}