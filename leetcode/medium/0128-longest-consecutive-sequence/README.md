# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers `nums`, return  *the length of the longest consecutive elements sequence.* 

You must write an algorithm that runs in `O(n)` time.

 

 **Example 1:** 

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

 **Example 2:** 

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

 **Example 3:** 

```
Input: nums = [1,0,1,2]
Output: 3

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** Java  
**Runtime:** 21 ms (beats 95.70%)  
**Memory:** 76.1 MB (beats 99.63%)  
**Submitted:** 2026-08-21T10:38:32.280Z  

```java
class Solution {
    public int longestConsecutive(int[] arr) {

        if (arr.length == 0) {
            return 0;
        }

        Arrays.sort(arr);

        int longest = 1;
        int current = 1;

        for (int i = 1; i < arr.length; i++) {

            // Duplicate → ignore
            if (arr[i] == arr[i - 1]) {
                continue;
            }

            // Consecutive
            if (arr[i] == arr[i - 1] + 1) {
                current++;
            }
            // Sequence broken
            else {
                current = 1;
            }

            longest = Math.max(longest, current);
        }

        return longest;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)