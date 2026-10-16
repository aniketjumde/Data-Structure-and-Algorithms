# PASSORFAIL - Rating 730

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T07:43:39.598Z  

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
        int T=sc.nextInt();
        
        while(T-->0)
        {
            int A=sc.nextInt();
            int B=sc.nextInt();
            int C=sc.nextInt();

            
            int largest = Math.max(A, Math.max(B, C));
            int secondLargest = Integer.MIN_VALUE;

            if (A < largest) {
                secondLargest = Math.max(secondLargest, A);
            }

            if (B < largest) {
                secondLargest = Math.max(secondLargest, B);
            }

            if (C < largest) {
                secondLargest = Math.max(secondLargest, C);
            }

            System.out.println(secondLargest);
        }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PASSORFAIL)