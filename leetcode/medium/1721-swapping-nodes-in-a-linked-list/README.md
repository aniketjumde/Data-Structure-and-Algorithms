# Swapping Nodes in a Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given the `head` of a linked list, and an integer `k`.

Return  *the head of the linked list after  **swapping**  the values of the* `kth`  *node from the beginning and the* `kth`  *node from the end (the list is  **1-indexed**).* 

 

 **Example 1:** 

```
Input: head = [1,2,3,4,5], k = 2
Output: [1,4,3,2,5]

```

 **Example 2:** 

```
Input: head = [7,9,6,6,7,8,3,0,9,5], k = 5
Output: [7,9,6,6,8,7,3,0,9,5]

```

 

 **Constraints:** 

- The number of nodes in the list is n.
- 1 <= k <= n <= 105
- 0 <= Node.val <= 100

## Solution

**Language:** Java  
**Runtime:** 2 ms (beats 50.67%)  
**Memory:** 118.2 MB (beats 96.45%)  
**Submitted:** 2026-10-14T06:51:20.700Z  

```java
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        
        ListNode slow=head;
        ListNode dummy=head;

        for(int i=1;i<k;i++)
        {
            dummy=dummy.next;
        }
        
        ListNode fast=dummy;

        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next;
        }

        int temp=dummy.val;
        dummy.val=slow.val;
        slow.val=temp;

        return head;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/swapping-nodes-in-a-linked-list/)