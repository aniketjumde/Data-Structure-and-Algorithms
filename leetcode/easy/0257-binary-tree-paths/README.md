# Binary Tree Paths

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given the `root` of a binary tree.

Return all  **root-to-leaf**  paths in  **any order**.

A  **leaf**  is a node with no children.

 

 **Example 1:** 

```
Input: root = [1,2,3,null,5]
Output: ["1->2->5","1->3"]

```

 **Example 2:** 

```
Input: root = [1]
Output: ["1"]

```

 

 **Constraints:** 

- The number of nodes in the tree is in the range [1, 100].
- -100 <= Node.val <= 100

## Solution

**Language:** Java  
**Runtime:** 6 ms (beats 16.93%)  
**Memory:** 49.8 MB (beats 39.91%)  
**Submitted:** 2026-10-11T11:06:51.459Z  

```java
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {

    public void binarTree(TreeNode root,String path,List<String> result)
    {
        if(root==null)
        {
            return;
        }

        path+=root.val;
        if (root.left == null && root.right == null) {
            result.add(path);
            return;
        }
        
        path+="->";

        binarTree(root.left,path,result);
        binarTree(root.right,path,result);

    }

    public List<String> binaryTreePaths(TreeNode root) {
        
        List<String> result=new ArrayList<>();

        binarTree(root,"",result);

        return result;
    }
}
```

---

[View on LeetCode](https://leetcode.com/problems/binary-tree-paths/)