# Is Linked List Length Even

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a linked list, check whether the length of the linked list is even or not. Return true if it is even, otherwise false.

 **Examples:** 

```
Input: Linked list: 12->52->10->47->95->0

Output: true
Explanation: The length of the linked list is 6 which is even.
```

```
Input: Linked list: 9->4->3

Output: false
Explanation: The length of the linked list is 3 which is odd.
```

**Constraints:
**1 ≤ number of nodes ≤ 105
1 ≤ elements of the linked list ≤ 105

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T06:08:13.370Z  

```java
/* structure of link list node
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
*/
class Solution {
    public boolean isEven(Node head) {
        // code here
        int count=0;
        
        while(head!=null)
        {
            count++;
            head=head.next;
        }
        
        return count%2==0;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1)