# Check if All Characters Have Equal Number of Occurrences

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a string `s`, return `true` *if* `s` *is a  **good**  string, or* `false` *otherwise*.

A string `s` is  **good**  if  **all**  the characters that appear in `s` have the  **same**  number of occurrences (i.e., the same frequency).

 

 **Example 1:** 

```
Input: s = "abacbc"
Output: true
Explanation: The characters that appear in s are 'a', 'b', and 'c'. All characters occur 2 times in s.

```

 **Example 2:** 

```
Input: s = "aaabb"
Output: false
Explanation: The characters that appear in s are 'a' and 'b'.
'a' occurs 3 times while 'b' occurs 2 times, which is not the same number of times.

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consists of lowercase English letters.

## Solution

**Language:** Java  
**Runtime:** 7 ms (beats 40.58%)  
**Memory:** 43.8 MB (beats 7.39%)  
**Submitted:** 2026-10-10T09:29:14.480Z  

```java
class Solution {
    public boolean areOccurrencesEqual(String s) 
    {
        Map<Character,Integer> map=new HashMap<>();

        for(char ch:s.toCharArray())
        {
            map.put(ch,map.getOrDefault(ch,0)+1);
        }

        int expected = map.values().iterator().next();

        for (int count : map.values()) {
            if (count != expected) {
                return false;
            }
        }

        return true;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/)