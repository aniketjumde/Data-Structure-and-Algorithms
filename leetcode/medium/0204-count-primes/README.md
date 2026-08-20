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
**Runtime:** 810 ms (beats 5.03%)  
**Memory:** 80.1 MB (beats 6.62%)  
**Submitted:** 2026-08-20T06:06:49.136Z  

```java
class Solution {
    public int countPrimes(int n) 
    {
        if(n<2)
        {
            return 0;
        }

        boolean[] isPrime=new boolean[n];

        for(int i=2;i<n;i++)
        {
            isPrime[i]=true;
        }

        for(int i=2;i*i<n;i++)
        {
            if(isPrime[i])
            {
                for(int j=i*i;j<n;j+=i)
                {
                    isPrime[j]=false;
                }
            }
        }

        int count=0;
        for(int i=2;i<n;i++)
        {
            if(isPrime[i])
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