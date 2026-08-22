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
**Submitted:** 2026-08-22T11:16:03.142Z  

```java
class Solution {
    public int findMaxLength(int[] arr) 
    {
        int maxLength=0;
        int sum=0;

        Map<Integer, Integer> map = new HashMap<>();
        map.put(0, -1);

        for(int i=0;i<arr.length;i++)
        {
           if(arr[i]==0)
           {
             sum+=-1;
           }
           else
           {
             sum+=1;
           }

           if (map.containsKey(sum)) {

                int currentLength = i - map.get(sum);

                maxLength = Math.max(maxLength, currentLength);

            } else {

                map.put(sum, i);
            }
            
        }

        return maxLength;    
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/contiguous-array/)