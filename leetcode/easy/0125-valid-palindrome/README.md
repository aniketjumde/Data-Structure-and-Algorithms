# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 99.31%)  
**Memory:** 44.1 MB (beats 83.38%)  
**Submitted:** 2026-08-29T06:09:49.852Z  

```java
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
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)