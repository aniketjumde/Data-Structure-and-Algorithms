# Pair With Difference

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array,  **arr[]**  and an integer  **x**, return true if there exists a pair of elements in the array whose absolute difference is  **x**, otherwise, return false.

 **Examples:** 

```
Input: arr[] = [5, 20, 3, 2, 5, 80], x = 78
Output: true
Explanation: Pair (2, 80) have an absolute difference of 78.
```

```
Input: arr[] = [90, 70, 20, 80, 50], x = 45
Output: false
Explanation: There is no pair with absolute difference of 45.

```

```
Input: arr[] = [1], x = 1
Output: false
```

 **Constraints:** 
1<= arr.size() <=106 
1<= arr[i] <=106 
0<= x <=105

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T13:12:33.744Z  

```java

class Solution {
    public boolean findPair(int[] arr, int x) 
    {
        // code here
        
       HashSet<Integer> set=new HashSet<>();
       
       for(int num :arr)
       {
           if(set.contains(num-x)|| set.contains(num+x))
           {
               return true;
           }
           
           set.add(num);
       }
       
       return false;
    }
}

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1)