# Palindrome String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string  **s**, return  **true**  if the string is a  **palindrome**. Otherwise, return  **false**.

A string is considered a palindrome if it reads the same forwards and backwards.

 **Examples :** 

```
Input: s = "abba"
Output: true
Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.
```

```
Input: s = "abc" 
Output: false
Explanation: "abc" does not read the same forwards and backwards, so it is not a palindrome.
```

 **Constraints:** 
1 ≤ s.size() ≤ 106
The string `s` contains only lowercase english letters (a-z).

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-29T06:13:35.772Z  

```java
class Solution {
    boolean isPalindrome(String s) 
    {
        int left=0;
        int right=s.length()-1;
        
        while(left<right)
        {
            if(s.charAt(left)!=s.charAt(right))
            {
                return  false;
            }
            left++;
            right--;
        }
        
        
        return true;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/palindrome-string0817/1)