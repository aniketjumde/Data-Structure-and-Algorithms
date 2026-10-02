# Backspace String Compare

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `t`, return `true`  *if they are equal when both are typed into empty text editors*. `'#'` means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

 

 **Example 1:** 

```
Input: s = "ab#c", t = "ad#c"
Output: true
Explanation: Both s and t become "ac".

```

 **Example 2:** 

```
Input: s = "ab##", t = "c#d#"
Output: true
Explanation: Both s and t become "".

```

 **Example 3:** 

```
Input: s = "a#c", t = "b"
Output: false
Explanation: s becomes "c" while t becomes "b".

```

 

 **Constraints:** 

- 1 <= s.length, t.length <= 200
- s and t only contain lowercase letters and '#' characters.

 

 **Follow up:**  Can you solve it in `O(n)` time and `O(1)` space?

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 59.55%)  
**Memory:** 42.7 MB (beats 94.50%)  
**Submitted:** 2026-10-02T09:09:16.638Z  

```java
class Solution {
    public boolean backspaceCompare(String s, String t) {
        
        StringBuilder sb1=new StringBuilder();
        StringBuilder sb2=new StringBuilder();

        for (char ch : s.toCharArray()) {

            if (ch == '#') {

                if (sb1.length() > 0) {
                    sb1.deleteCharAt(sb1.length() - 1);
                }

            } else {
                sb1.append(ch);
            }
        }

        for(char ch: t.toCharArray())
        {
            if (ch == '#') {

                if (sb2.length() > 0) {
                    sb2.deleteCharAt(sb2.length() - 1);
                }

            } else {
                sb2.append(ch);
            }
        }

        return sb1.toString().equals(sb2.toString());
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/backspace-string-compare/)