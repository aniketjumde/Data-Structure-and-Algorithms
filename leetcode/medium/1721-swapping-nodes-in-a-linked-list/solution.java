/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapNodes(ListNode head, int k) {
        
        ListNode slow=head;
        ListNode dummy=head;

        for(int i=1;i<k;i++)
        {
            dummy=dummy.next;
        }
        
        ListNode fast=dummy;

        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next;
        }

        int temp=dummy.val;
        dummy.val=slow.val;
        slow.val=temp;

        return head;
    }
}