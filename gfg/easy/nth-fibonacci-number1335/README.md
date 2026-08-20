# Nth Fibonacci Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Find the  **n-th**  Fibonacci number for a given non-negative integer **n**.
The Fibonacci sequence is defined as:

- F(0) = 0
- F(1) = 1
- F(n) = F(n - 1) + F(n - 2) for n ≥ 2

 **Examples :** 

```
Input: n = 5
Output: 5
Explanation: The 5th Fibonacci number is 5.
```

```
Input: n = 0
Output: 0 
Explanation: The 0th Fibonacci number is 0.

```

```
Input: n = 1
Output: 1
Explanation: The 1st Fibonacci number is 1.
```

 **Constraints:** 
0 ≤ n ≤ 30

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T06:20:12.570Z  

```java
class Solution {
    static int nthFibonacci(int n) {
        // code here
        // if(n<=1)
        // {
        //     return n;
        // }
        
        // return nthFibonacci(n-1)+nthFibonacci(n-2);
        
        if(n<=1)
        {
            return n;
        }
        
        int f0=0;
        int f1=1;
        int f3=0;
        
        for( int i=2;i<=n;i++)
        {
            f3=f0+f1;
            f0=f1;
            f1=f3;
        }
        
        return f3;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/nth-fibonacci-number1335/1)