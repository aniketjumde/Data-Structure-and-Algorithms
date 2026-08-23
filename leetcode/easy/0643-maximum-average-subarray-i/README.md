# Maximum Average Subarray I

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `nums` consisting of `n` elements, and an integer `k`.

Find a contiguous subarray whose  **length is equal to**  `k` that has the maximum average value and return  *this value*. Any answer with a calculation error less than `10-5` will be accepted.

 

 **Example 1:** 

```
Input: nums = [1,12,-5,-6,50,3], k = 4
Output: 12.75000
Explanation: Maximum average is (12 - 5 - 6 + 50) / 4 = 51 / 4 = 12.75

```

 **Example 2:** 

```
Input: nums = [5], k = 1
Output: 5.00000

```

 

 **Constraints:** 

- n == nums.length
- 1 <= k <= n <= 105
- -104 <= nums[i] <= 104

## Solution

**Language:** Java  
**Runtime:** 0 ms  
**Memory:** 45.6 MB  
**Submitted:** 2026-08-23T10:07:51.368Z  

```java
class Solution {
    public double findMaxAverage(int[] nums, int k)
    {
        int windowSum=0;
        for(int i=0;i<k;i++)
        {
            windowSum+=nums[i];
        }

        double max=(double)windowSum/k;

        for(int i=1;i<=nums.length-k;i++)
        {
            windowSum+=nums[i+k-1]-nums[i-1];
            double avg=(double)windowSum/k;
            if(avg > max)
            {
                max=avg;
            }
        }

        return max;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-average-subarray-i/)