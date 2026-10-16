# FLOW017 - Rating 730

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Second Largest

Three numbers  **A**,  **B**  and  **C**  are the inputs. Write a program to find second largest among them.

 **Note:**  Duplicates are handled naturally — if two numbers are equal and largest, the second largest is that same value (as in the median definition).

### Input Format

The first line contains an integer  **T**, the total number of testcases. Then  **T**  lines follow, each line contains three integers  **A**,  **B**  and  **C**.

### Output Format

For each test case, display the second largest among  **A**,  **B**  and  **C**, in a new line.

### Constraints
- 1 ≤ T ≤ 1000
- 1 ≤ A,B,C ≤ 1000000
### Sample 1:
Input
Output

```
3 
120 11 400
10213 312 10
10 3 450
```

```
120
312
10
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-16T07:43:37.275Z  

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

[View on CodeChef](https://www.codechef.com/problems/FLOW017)