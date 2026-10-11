# Symmetric Tree

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given  a root of binary tree, check whether it is symmetric, i.e., whether the tree is a mirror image of itself.

 **Note:**  A binary tree is symmetric if the left subtree is a mirror reflection of the right subtree.

 **Examples:** 

```
Input: root = [10, 5, 5, 2, N, N, 2] 
   
Output: true
Explanation: As the left and right half of the above tree is mirror image, the tree is symmetric.

```

```
Input: root = [8, 4, 4, N, 6, N, 6]
   
Output: false
Explanation:  As the left and right half of the above tree is not the mirror image, the tree is not symmetric. 
```

## Solution

**Language:** Java  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-11T10:34:50.164Z  

```java
/* Structure of binary tree node
class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data = data;
        left=null;
        right=null;
    }
}
*/

class Solution {
    public boolean isSymmetric(Node root) {
        // code here
        if(root==null)
        {
            return true;
        }
        
        
        return isMirror(root.left,root.right);
    }
    
    public boolean isMirror(Node r1,Node r2)
    {
        if(r1==null && r2==null)
        {
            return true;
        }
        
        if(r1==null || r2==null)
        {
            return false;
        }
        
        if(r1.data!=r2.data)
        {
            return false;
        }
        
        return isMirror(r1.left,r2.right) && isMirror(r1.right,r2.left);
    }
}
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/symmetric-tree/1)