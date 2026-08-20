# Armstrong Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a **3-digit**  number  **n**, Find whether it is an  **Armstrong** number or not.

An  *Armstrong number*  of three digits is a number such that the sum of the cubes of its digits is equal to the  *number* itself. 371 is an Armstrong number since 33 + 73 + 13 = 371. 

 **Examples:** 

```
Input: n = 153
Output: true
Explanation: 153 is an Armstrong number since 13 + 53 + 33 = 153. 

```

```
Input: n = 372
Output: false
Explanation: 372 is not an Armstrong number since 33 + 73 + 23 = 378. 

```

```
Input: n = 100
Output: false
Explanation: 100 is not an Armstrong number since 13 + 03 + 03 = 1. 
```

 **Constraints:** 
100 ≤ n <1000

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-20T05:38:54.988Z  

```java
class Solution {
    static boolean armstrongNumber(int n) 
    {
        // code here
        int sum=0;
        int tnum=n;
        while(n>0)
        {
            int rem=n%10;
            sum+=rem*rem*rem;
            n=n/10;
            
        }
        
        if(tnum==sum)
        {
            return true;
        }
        
        return false;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1)