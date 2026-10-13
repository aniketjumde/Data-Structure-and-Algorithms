/* Structure of linked list Node
class Node{
    int data;
    Node next;

    Node(int a){
        data = a;
        next = null;
    }
}
*/
class Solution {
    public int getCount(Node head) {
        // code here
        Node temp=head;
        if(head==null)
        {
            return 0;
        }
        
        int count=0;
        
        while(temp!=null)
        {
            count++;
            temp=temp.next;
        }
        
        
        return count;
    }
}