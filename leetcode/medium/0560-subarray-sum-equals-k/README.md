# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** Java  
**Runtime:** 21 ms (beats 97.15%)  
**Memory:** 49.5 MB (beats 5.58%)  
**Submitted:** 2026-08-22T09:43:33.108Z  

```java
class Solution {
    public int subarraySum(int[] arr, int k) 
    {
        int n=arr.length;
        int count=0;
        int[] ps=new int[n];
        ps[0] = arr[0];
        
        for(int i=1;i<n;i++)
        {
           ps[i]=ps[i-1]+arr[i];
        }

        Map<Integer,Integer> freq=new HashMap<>();
        for(int i=0;i<n;i++)
        {
            if(ps[i]==k)
            {
                count++;
            }

            int val=ps[i]-k;

            if(freq.containsKey(val))
            {
                count+=freq.get(val);
            }

            freq.put(ps[i],freq.getOrDefault(ps[i],0)+1);
        }
        
        return count;    
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)