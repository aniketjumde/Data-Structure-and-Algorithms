# Intersection of Two arrays with Duplicate Elements

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integer arrays a[] and b[], you have to find the intersection of the two arrays.  **Intersection**  of two arrays is said to be elements that are common in both the arrays. The intersection should not have  **duplicate**  elements and the result may contain elements in  **any order**.

 **Note:** The driver code will  **sort**  the resulting array in increasing order before printing.

 **Examples:** 

```
Input: a[] = [1, 2, 1, 3, 1], b[] = [3, 1, 3, 4, 1]
Output: [1, 3]
Explanation: 1 and 3 are the only common elements and we need to print only one occurrence of common elements.

```

```
Input: a[] = [1, 1, 1], b[] = [1, 1, 1, 1, 1]
Output: [1]
Explanation: 1 is the only common element present in both the arrays.

```

```
Input: a[] = [1, 2, 3], b[] = [4, 5, 6]
Output: []
Explanation: No common element in both the arrays.
```

 **Constraints:** 
1 ≤ a.size(), b.size() ≤ 105
0 ≤ a[i], b[i] ≤ 105

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T07:26:56.080Z  

```java
class Solution {
    public ArrayList<Integer> intersect(int[] a, int[] b) {
        // co
        
        HashSet<Integer> set=new HashSet<>();
        ArrayList<Integer> list=new ArrayList<>();
        for(int i=0;i<a.length;i++)
        {
            set.add(a[i]);
        }
        
        for(int i=0;i<b.length;i++)
        {
           if(set.contains(b[i]))
           {
               list.add(b[i]);
               set.remove(b[i]);
           }
        }
        
        Collections.sort(list);
        return list;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/intersection-of-two-arrays-with-duplicate-elements/1)