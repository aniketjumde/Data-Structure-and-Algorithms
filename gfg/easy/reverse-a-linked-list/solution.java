/* Structure of Linked List Node
class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}
*/

class Solution {
    Node reverseList(Node head) {
        // code here
        Node current=head;
        Node prev=null;
        
        while(current!=null)
        {
            Node next=current.next;
            current.next=prev;
            prev=current;
            current=next;
        }
        
        return prev;
    }
}