import java.util.Stack;

public class ValidParenthesis {

    // Method to check valid parentheses
    public static boolean isValid(String s) 
    {
        Stack<Character> stack = new Stack<>();

        for(int i = 0; i < s.length(); i++)
        {
            char ch = s.charAt(i);

            // opening brackets
            if(ch == '(' || ch == '{' || ch == '[')
            {
                stack.push(ch);
            }
            else
            {
                if(stack.isEmpty())
                {
                    return false;
                }

                char top = stack.peek();

                // matching condition
                if((ch == ')' && top == '(') ||
                   (ch == '}' && top == '{') ||
                   (ch == ']' && top == '['))
                {
                    stack.pop();
                }
                else
                {
                    return false;
                }
            }
        }

        return stack.isEmpty();
    }

    // Main method
    public static void main(String[] args) 
    {
        String s = "{[()]}";

        if(isValid(s))
            System.out.println("Valid Parenthesis");
        else
            System.out.println("Invalid Parenthesis");
    }
}