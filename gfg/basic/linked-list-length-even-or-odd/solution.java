/* structure of link list node
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
*/
class Solution {
    public boolean isEven(Node head) {
        // code here
        int count=0;
        
        while(head!=null)
        {
            count++;
            head=head.next;
        }
        
        return count%2==0;
    }
}