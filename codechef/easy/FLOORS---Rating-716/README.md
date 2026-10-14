# FLOORS - Rating 716

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

_Description not available._

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T09:10:10.648Z  

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
            int X=sc.nextInt();
            int Y=sc.nextInt();
            int Z=sc.nextInt();
            
            int diff=Math.abs(X-Y);
            if(diff<=Z)
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
        }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FLOORS)