# Contiguous Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary array `nums`, return  *the maximum length of a contiguous subarray with an equal number of* `0` *and* `1`.

 

 **Example 1:** 

```
Input: nums = [0,1]
Output: 2
Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.

```

 **Example 2:** 

```
Input: nums = [0,1,0]
Output: 2
Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

```

 **Example 3:** 

```
Input: nums = [0,1,1,1,1,1,0,0,0]
Output: 6
Explanation: [1,1,1,0,0,0] is the longest contiguous subarray with equal number of 0 and 1.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- nums[i] is either 0 or 1.

## Solution

**Language:** Java  
**Runtime:** 0 ms  
**Memory:** 42.4 MB  
**Submitted:** 2026-08-22T11:11:04.092Z  

```java
class Solution {
    public int findMaxLength(int[] arr) 
    {
        int maxLength=0;

        for(int i=0;i<arr.length;i++)
        {
            int zeros=0;
            int ones=0;

            for(int j=i;j<arr.length;j++)
            {
                if(arr[i]==0)
                {
                    zeros++;
                }
                else
                {
                    ones++;
                }

                if(ones==zeros)
                {
                    maxLength = Math.max(maxLength, j - i + 1);
                }
            }

            
        }

        return maxLength;    
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/contiguous-array/)