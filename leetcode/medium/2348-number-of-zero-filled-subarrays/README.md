# Number of Zero-Filled Subarrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums`, return  *the number of  **subarrays**  filled with* `0`.

A  **subarray**  is a contiguous non-empty sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,3,0,0,2,0,0,4]
Output: 6
Explanation: 
There are 4 occurrences of [0] as a subarray.
There are 2 occurrences of [0,0] as a subarray.
There is no occurrence of a subarray with a size more than 2 filled with 0. Therefore, we return 6.
```

 **Example 2:** 

```
Input: nums = [0,0,0,2,0,0]
Output: 9
Explanation:
There are 5 occurrences of [0] as a subarray.
There are 3 occurrences of [0,0] as a subarray.
There is 1 occurrence of [0,0,0] as a subarray.
There is no occurrence of a subarray with a size more than 3 filled with 0. Therefore, we return 9.

```

 **Example 3:** 

```
Input: nums = [2,10,2019]
Output: 0
Explanation: There is no subarray filled with 0. Therefore, we return 0.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** Java  
**Runtime:** 3 ms (beats 97.44%)  
**Memory:** 115.6 MB (beats 67.99%)  
**Submitted:** 2026-08-22T10:17:32.493Z  

```java
class Solution {
    public long zeroFilledSubarray(int[] arr) {
        long count=0;
        long consecutiveZero=0;
       
        for(int num:arr)
        {
            if (num == 0) {
                consecutiveZero++;
                count += consecutiveZero;
            } else {
                consecutiveZero = 0;
            }
        }
        
        return count;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-zero-filled-subarrays/)