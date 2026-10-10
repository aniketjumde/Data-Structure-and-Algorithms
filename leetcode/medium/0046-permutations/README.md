# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** Java  
**Runtime:** 1 ms (beats 88.52%)  
**Memory:** 45.5 MB (beats 45.79%)  
**Submitted:** 2026-10-10T06:21:24.970Z  

```java
class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();

        backtrack(nums,0,result);

        return result;

    }

    private void backtrack(int[] nums,int idx,List<List<Integer>> result)
    {
        if (idx == nums.length) {
            List<Integer> permutation = new ArrayList<>();

            for (int num : nums) {
                permutation.add(num);
            }

            result.add(permutation);
            return;
        }

        for (int i = idx; i < nums.length; i++) {

            // Choose an element for position idx
            swap(nums, idx, i);

            // Explore the remaining positions
            backtrack(nums, idx + 1, result);

            // Undo the swap
            swap(nums, idx, i);
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)