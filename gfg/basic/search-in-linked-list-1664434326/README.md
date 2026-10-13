# Search in Linked List

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given the  **head**  of a singly linked list and an integer  **key**, check if the key is present in the linked list or not.

 **Example:** 

```
Input: key = 3,
      
Output: true 
Explanation: 3 is present in Linked List.
```

```
Input: key = 4,
   
Output: false
Explanation: 4 is not present in Linked List.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-13T06:06:51.719Z  

```java
/* Structure of Linked List Node
class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}*/

class Solution {
    public boolean searchKey(Node head, int key) {
        // Code here
        
        while(head!=null)
        {
            if(head.data==key)
            {
                return true;
            }
            
            head=head.next;
        }
        
        return false;
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1)