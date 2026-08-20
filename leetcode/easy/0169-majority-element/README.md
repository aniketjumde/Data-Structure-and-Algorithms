# Majority Element

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array `nums` of size `n`, return  *the majority element*.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

 

 **Example 1:** 

```
Input: nums = [3,2,3]
Output: 3

```

 **Example 2:** 

```
Input: nums = [2,2,1,1,1,2,2]
Output: 2

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 5 * 104
- -109 <= nums[i] <= 109
- The input is generated such that a majority element will exist in the array.

 

 **Follow-up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** Java  
**Runtime:** 1 ms (beats 99.89%)  
**Memory:** 55.9 MB (beats 18.31%)  
**Submitted:** 2026-08-20T08:20:58.642Z  

```java
class Solution 
{
    public int majorityElement(int[] nums) 
    {
        if(nums.length==1)
        {
            return nums[0];
        }

       int freq=0;
       int ans=0;
       for(int i=0;i<nums.length;i++)
       {
            if(freq==0)
            {
                ans=nums[i];
            }
            if(ans==nums[i])
            {
                freq++;
            }
            else
            {
                freq--;
            }
       }
        return ans;
     }
}
```

---

[View on LeetCode](https://leetcode.com/problems/majority-element/)