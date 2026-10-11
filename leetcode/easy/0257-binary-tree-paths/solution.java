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