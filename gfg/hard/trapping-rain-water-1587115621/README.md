# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an array  **arr[]** with non-negative integers representing the height of blocks. If the width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 

 **Examples:** 

```
Input: arr[] = [3, 0, 1, 0, 4, 0, 2]
Output: 10
Explanation: Total water trapped = 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.

```

```
Input: arr[] = [3, 0, 2, 0, 4]
Output: 7
Explanation: Total water trapped = 0 + 3 + 1 + 3 + 0 = 7 units.

```

```
Input: arr[] = [1, 2, 3, 4]
Output: 0
Explanation: We cannot trap water as there is no height bound on both sides.
```

```
Input: arr[] = [2, 1, 5, 3, 1, 0, 4]
Output: 9
Explanation: Total water trapped = 0 + 1 + 0 + 1 + 3 + 4 + 0 = 9 units.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T07:34:24.648Z  

```java
class Solution {
    public int maxWater(int arr[]) 
    {
        // code here
        int n=arr.length;
        int leftMax[]=new int[arr.length];
        int rightMax[]=new int[arr.length];
               leftMax[0] = arr[0];

               for (int i = 1; i < n; i++) {
                   leftMax[i] = Math.max(leftMax[i - 1], arr[i]);
               }

               rightMax[n - 1] = arr[n - 1];

               for (int j = n - 2; j >= 0; j--) {
                   rightMax[j] = Math.max(rightMax[j + 1], arr[j]);
               }

               int water = 0;

               for (int i = 0; i < n; i++) {
                   water += Math.min(leftMax[i], rightMax[i]) - arr[i];
               }

               return water;
    }
}

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1)