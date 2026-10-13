# Linked List Traversal

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a linked list that contains integer elements. Iterate through the given list and print its elements separated by a space.

 **Examples:** 

```
Input:

Output: 1 2 3 4
Explanation: Iterating through the linked list prints 1, 2, 3, and 4.
```

```
Input:

Output: 2 7 10 9 8 
Explanation: Iterating through the linked list prints 2, 7, 10, 9 and 8.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T06:10:54.775Z  

```java
/*
class Node {
    int data;
    Node next;

    Node(int val) {
        data = val;
        next = null;
    }
}
*/

class Solution {
    void printList(Node head) {
        // code here
        
        while(head!=null)
        {
            System.out.print(head.data+" ");
            head=head.next;
        }
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/linkedlist-traversal/1)