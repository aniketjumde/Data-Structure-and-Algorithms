/* Structure of doubly linked list Node
class Node {
  public int data;
  public Node next;
  public Node prev;

  public Node(int x) {
      data = x;
      next = null;
      prev = null;
  }
};*/
class Solution {
    public List<List<Integer>> displayList(Node head) {
        // code here

        List<List<Integer>> result = new ArrayList<>();

                List<Integer> forward = new ArrayList<>();
                List<Integer> backward = new ArrayList<>();

                Node curr = head;
                Node last = null;

                // Forward traversal
                while (curr != null) {
                    forward.add(curr.data);
                    last = curr;
                    curr = curr.next;
                }

                // Backward traversal
                curr = last;

                while (curr != null) {
                    backward.add(curr.data);
                    curr = curr.prev;
                }

                result.add(forward);
                result.add(backward);

                return result; 
         
    }
}