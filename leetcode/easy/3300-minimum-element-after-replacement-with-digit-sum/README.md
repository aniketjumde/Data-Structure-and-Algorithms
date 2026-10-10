# Minimum Element After Replacement With Digit Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums`.

You replace each element in `nums` with the  **sum**  of its digits.

Return the  **minimum**  element in `nums` after all replacements.

 

 **Example 1:** 

 **Input:**  nums = [10,12,13,14]

 **Output:**  1

 **Explanation:** 

`nums` becomes `[1, 3, 4, 5]` after all replacements, with minimum element 1.

 **Example 2:** 

 **Input:**  nums = [1,2,3,4]

 **Output:**  1

 **Explanation:** 

`nums` becomes `[1, 2, 3, 4]` after all replacements, with minimum element 1.

 **Example 3:** 

 **Input:**  nums = [999,19,199]

 **Output:**  10

 **Explanation:** 

`nums` becomes `[27, 10, 19]` after all replacements, with minimum element 10.

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 1 <= nums[i] <= 104

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 15.06%)  
**Memory:** 45.9 MB (beats 5.68%)  
**Submitted:** 2026-10-10T07:57:11.347Z  

```java
class Solution {
    public int minElement(int[] nums) {
        
        int min=Integer.MAX_VALUE;
        for(int j=0;j<nums.length;j++)
        {
            String str=String.valueOf(nums[j]);
            int sum=0;
            for(int i=0;i<str.length();i++)
            {
                
                sum+=Character.getNumericValue(str.charAt(i));;
            }
            min=Math.min(min,sum);

            nums[j]=sum;
        }

        return min;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-element-after-replacement-with-digit-sum/)