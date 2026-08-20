# Count Primes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer `n`, return  *the number of prime numbers that are strictly less than*  `n`.

 

 **Example 1:** 

```
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

```

 **Example 2:** 

```
Input: n = 0
Output: 0

```

 **Example 3:** 

```
Input: n = 1
Output: 0

```

 

 **Constraints:** 

- 0 <= n <= 5 * 106

## Solution

**Language:** Java  
**Runtime:** 0 ms  
**Memory:** 41.9 MB  
**Submitted:** 2026-08-20T05:55:38.598Z  

```java
class Solution {
    public int countPrimes(int n) 
    {
        if(n<2)
        {
            return 0;
        }

        int count=0;
        for(int j=2;j<n;j++)
        {
            boolean flag=true;
            for(int i=2;i*i<=j;i++)
            {
                if(j%i==0)
                {
                    flag=false;
                    break;
                }
            }

            if(flag)
            {
                count++;
            }
        }

        return count;    
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)