# DECINC - Rating 722

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Decrement OR Increment

Write a program to obtain a number $N$ and increment its value by 1 if the number is divisible by 4 $otherwise$ decrement its value by 1.

### Input Format

First line will contain a number $N$.

### Output Format

Output a single line, the new value of the number.

### Constraints
- $0 \leq N \leq 1000$
### Sample 1:
Input
Output

```
5
```

```
4
```

### Explanation:

Since 5 is not divisible by 4 hence, its value is decreased by 1.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T07:24:19.347Z  

```java
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
        
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        
        if(N%4==0)
        {
            System.out.println(N+1);
        }
        else
        {
            System.out.println(N-1);
        }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DECINC)