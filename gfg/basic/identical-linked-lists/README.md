# Identical Linked Lists

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given two singly linked lists,  **head1**  and  **head2**, the task is to determine whether the two linked lists are identical.

Two linked lists are considered identical if they have the same number of nodes and each corresponding node contains the same data in the same order.

 **Examples:** 

```
Input: head1: 1->2->3->4->5->6, head2: 99->59->42->20
Output: false
Explanation:

As shown in figure the two lists are not identical.
```

```
Input: head1: 1->2->3->4->5, head2: 1->2->3->4->5
Output: true
Explanation: 
 
As shown in figure both are identical.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T06:05:16.254Z  

```java
/* Structure of a Node
class Node {
    int data;
    Node next;

    public Node(int data){
        this.data = data;
        this.next = null;
    }
}*/
class Solution {
    public boolean areIdentical(Node head1, Node head2) {
        // code here
      while (head1 != null && head2 != null) {

                 if (head1.data != head2.data) {
                     return false;
                 }

                 head1 = head1.next;
                 head2 = head2.next;
             }

             // Both lists must end at the same time
             return head1 == null && head2 == null;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/identical-linked-lists/1)