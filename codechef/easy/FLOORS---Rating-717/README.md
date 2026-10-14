# FLOORS - Rating 717

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

### Too many Floors

Chef and Chefina are residing in a hotel.

There are $10$ floors in the hotel and each floor consists of $10$ rooms.

- Floor $1$ consists of room numbers $1$ to $10$.
- Floor $2$ consists of room numbers $11$ to $20$. $\ldots$
- Floor $i$ consists of room numbers $10 \cdot (i-1) + 1$ to $10 \cdot i$.

You know that Chef's room number is $X$ while Chefina's Room number is $Y$.
If Chef starts from his room, find the number of floors he needs to travel to reach Chefina's room.

### Input Format
- First line will contain $T$, number of test cases. Then the test cases follow.
- Each test case contains of a single line of input, two integers $X, Y$, the room numbers of Chef and Chefina respectively.
### Output Format

For each test case, output the number of floors Chef needs to travel to reach Chefina's room.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq X, Y \leq 100$
- $X \neq Y$
### Sample 1:
Input
Output

```
4
1 100
42 50
53 30
81 80

```

```
9
0
3
1

```

### Explanation:

 **Test Case $1$:**  Since Room $1$ is on $1^{st}$ floor and Room $100$ is on $10^{th}$ floor, Chef needs to climb $9$ floors to reach Chefina's Room.

 **Test Case $2$:**  Since Room $42$ is on $5^{th}$ floor and Room $50$ is also on $5^{th}$ floor, Chef does not need to climb any floor.

 **Test Case $3$:**  Since Room $53$ is on $6^{th}$ floor and Room $30$ is on $3^{rd}$ floor, Chef needs to go down $3$ floors to reach Chefina's Room.

 **Test Case $4$:**  Since Room $81$ is on $9^{th}$ floor and Room $80$ is on $8^{th}$ floor, Chef needs to go down $1$ floors to reach Chefina's Room.

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T12:33:15.059Z  

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
            
            int floorX=(X-1)/10+1;
            int floorY=(Y-1)/10+1;
            
            int ans=Math.abs(floorX-floorY);
            
            System.out.println(ans);
        }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FLOORS)