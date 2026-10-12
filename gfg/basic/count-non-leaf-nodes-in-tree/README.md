# Count Internal Nodes in Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Basic-red)

## Problem

Given a Binary Tree of size  **n**, your task is to return the count of all the non-leaf nodes of the given binary tree.

 **Examples:** 

```
Input: root[] = [1, 2, 3, 4, 5]

Output: 2
Explanation: Nodes 1 and 2 are the only non leaf nodes.
```

```
Input: root[] = [10, 5, 20, 3, 7, 15, 25]

Output: 3
Explanation: Nodes 10, 5 and 20 are the only non leaf nodes.
```

```
Input: root[] = [8, 3, 9, 1, 6, 4, 7]

Output: 3
Explanation: Nodes 8, 3 and 6 are the only non leaf nodes.
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-12T05:38:50.458Z  

```java
/* Binary Tree Node Structure
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}*/

class Solution {
    int countNonLeafNodes(Node root) {
        // code here
        if(root==null)
        {
            return 0;
        }
        
        if(root.left==null && root.right==null)
        {
            return 0;
        }
        
        return 1+countNonLeafNodes(root.left)+countNonLeafNodes(root.right);
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1)