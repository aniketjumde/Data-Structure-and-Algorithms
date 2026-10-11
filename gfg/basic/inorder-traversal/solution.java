/* Structure of Binary Tree Node
class Node {
    int data;
    Node left, right;
    Node(int item){
        data = item;
        left = right = null;
    }
}*/

class Solution {
    
    public void order(Node root,ArrayList<Integer> result)
    {
        if(root==null)
        {
            return;
        }
        
        order(root.left,result);
        result.add(root.data);
        order(root.right,result);
    }
    
    public ArrayList<Integer> inOrder(Node root) {
        // code here
        ArrayList<Integer> result=new ArrayList<>();
        order(root,result);
        
        return result;
    }
}