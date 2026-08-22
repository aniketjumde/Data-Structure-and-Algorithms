# VALENTINE - Rating 691

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Valentine is Coming

Valentine's Day is approaching and thus Chef wants to buy some chocolates for someone special.

Chef has a total of $X$ rupees and one chocolate costs $Y$ rupees. What is the  **maximum**  number of chocolates Chef can buy?

### Input Format
- First line will contain $T$, the number of test cases. Then the test cases follow.
- Each test case contains a single line of input, two integers $X, Y$ - the amount Chef has and the cost of one chocolate respectively.
### Output Format

For each test case, output the  **maximum**  number of chocolates Chef can buy.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq X,Y \leq 100$
### Sample 1:
Input
Output

```
4
5 10
16 5
35 7
100 1

```

```
0
3
5
100

```

### Explanation:

 **Test case-1:**  Chef has $5$ rupees but the cost of one chocolate is $10$ rupees. Therefore Chef can not buy any chocolates.

 **Test case-2:**  Chef has $16$ rupees and the cost of one chocolate is $5$ rupees. Therefore Chef can buy at max $3$ chocolates since buying $4$ chocolates would cost $20$ rupees.

 **Test case-3:**  Chef has $35$ rupees and the cost of one chocolate is $7$ rupees. Therefore Chef can buy at max $5$ chocolates for $35$ rupees.

 **Test case-4:**  Chef has $100$ rupees and the cost of one chocolate is $1$ rupee. Therefore Chef can buy at max $100$ chocolates for $100$ rupees.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-22T13:52:21.414Z  

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
            int x=sc.nextInt();
            int y=sc.nextInt();
            
            System.out.println(x/y);
        }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/VALENTINE)