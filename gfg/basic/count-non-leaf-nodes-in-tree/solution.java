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