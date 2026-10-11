/* Structure of Binary Tree Node
class Node {
    int data;
    Node left, right;
    Node(int val){
        data = val;
        left = right = null;
    }
}
*/

class Solution {
    
    public void post(Node root,ArrayList<Integer> result) 
    {
        if(root==null) return;
        
        post(root.left,result);
        post(root.right,result);
        result.add(root.data);
    }
    
    public ArrayList<Integer> postOrder(Node root) {
        // code here
        ArrayList<Integer> result=new ArrayList<>();
        
        post(root,result);
        return result;
    }
}