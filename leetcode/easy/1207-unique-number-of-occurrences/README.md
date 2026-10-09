# Unique Number of Occurrences

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of integers `arr`, return `true`  *if the number of occurrences of each value in the array is  **unique**  or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: arr = [1,2,2,1,1,3]
Output: true
Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.
```

 **Example 2:** 

```
Input: arr = [1,2]
Output: false

```

 **Example 3:** 

```
Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
Output: true

```

 

 **Constraints:** 

- 1 <= arr.length <= 1000
- -1000 <= arr[i] <= 1000

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 97.88%)  
**Memory:** 43.8 MB (beats 35.24%)  
**Submitted:** 2026-10-09T06:40:09.946Z  

```java
class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        
        Map<Integer,Integer> map=new HashMap<>();
        
        for(int i=0;i<arr.length;i++)
        {
            map.put(arr[i],map.getOrDefault(arr[i],0)+1);
        }

        Set<Integer> set=new HashSet<>();

        for(int c:map.values() )
        {
            if(set.contains(c))
            {
               return false; 
            }
            set.add(c);
        }

        return true;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/unique-number-of-occurrences/)