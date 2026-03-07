class ListNode {
    int val;
    ListNode next;

    ListNode() {}

    ListNode(int val) {
        this.val = val;
    }

    ListNode(int val, ListNode next) {
        this.val = val;
        this.next = next;
    }
}

public class PalindromeLinkedList {

    public ListNode findMid(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while (fast != null && fast.next != null) {
            slow = slow.next;        // move 1 step
            fast = fast.next.next;   // move 2 steps
        }

        return slow;
    }

    public boolean isPalindrome(ListNode head) {

        if (head == null || head.next == null) {
            return true;
        }

        // 1️Find Mid
        ListNode mid = findMid(head);

        // 2️ Reverse second half
        ListNode prev = null;
        ListNode current = mid;
        ListNode next;

        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }

        // 3️Compare left & right
        ListNode left = head;
        ListNode right = prev;

        while (right != null) {
            if (left.val != right.val) 
            {
                return false;
            }
            left = left.next;
            right = right.next;
        }

        return true;
    }

    public void print(ListNode head)
    {
        ListNode temp = head;
        while (temp != null) {
            System.out.print(temp.val + " -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public static void main(String[] args) {

        PalindromeLinkedList obj = new PalindromeLinkedList();

        // Creating list: 1 -> 2 -> 2 -> 1
        ListNode head = new ListNode(1);
        head.next = new ListNode(2);
        //head.next.next = new ListNode(2);
        head.next.next = new ListNode(1);

        obj.print(head);

        if (obj.isPalindrome(head)) {
            System.out.println("Linked List is Palindrome");
        } else {
            System.out.println("Linked List is NOT Palindrome");
        }
    }
}