class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

public class SinglyLinkedList2 {

    Node head;

    
    public void insertAtBeginning(int data) {

        Node newNode = new Node(data);

        newNode.next = head;
        head = newNode;
    }


    public void insertAtEnd(int data) {

        Node newNode = new Node(data);

        // Empty Linked List
        if (head == null) {
            head = newNode;
            return;
        }

        Node current = head;

        while (current.next != null) {
            current = current.next;
        }

        current.next = newNode;
    }


   
    public void insertAtPosition(int data, int position) {

        if (position < 1) {
            System.out.println("Invalid Position");
            return;
        }

        Node newNode = new Node(data);

        // Insert at beginning
        if (position == 1) {
            newNode.next = head;
            head = newNode;
            return;
        }

        Node current = head;

        // Reach node at position - 1
        for (int i = 1;
             i < position - 1 && current != null;
             i++) {

            current = current.next;
        }

        if (current == null) {
            System.out.println("Invalid Position");
            return;
        }

        newNode.next = current.next;
        current.next = newNode;
    }


    
    public void deleteAtBeginning() {

        if (head == null) {
            System.out.println("Linked List is empty");
            return;
        }

        head = head.next;
    }


  
    public void deleteAtEnd() {

        // Empty list
        if (head == null) {
            System.out.println("Linked List is empty");
            return;
        }

        // Only one node
        if (head.next == null) {
            head = null;
            return;
        }

        Node current = head;

        // Reach second-last node
        while (current.next.next != null) {
            current = current.next;
        }

        current.next = null;
    }


    public void deleteAtPosition(int position) {

        if (position < 1) {
            System.out.println("Invalid Position");
            return;
        }

        if (head == null) {
            System.out.println("Linked List is empty");
            return;
        }

        if (position == 1) {
            head = head.next;
            return;
        }

        Node current = head;

        for (int i = 1;
             i < position - 1 && current != null;
             i++) {

            current = current.next;
        }

        if (current == null || current.next == null) {
            System.out.println("Invalid Position");
            return;
        }

        current.next = current.next.next;
    }


    public boolean search(int key) {

        Node current = head;

        while (current != null) {

            if (current.data == key) {
                return true;
            }

            current = current.next;
        }

        return false;
    }


    public int size() {

        int count = 0;

        Node current = head;

        while (current != null) {
            count++;
            current = current.next;
        }

        return count;
    }


    
    public void display() {

        Node current = head;

        while (current != null) {
            System.out.print(current.data + " -> ");
            current = current.next;
        }

        System.out.println("null");
    }


    public static void main(String[] args) {

        SinglyLinkedList2 list = new SinglyLinkedList2();

        // INSERTION

        list.insertAtEnd(10);
        list.insertAtEnd(20);
        list.insertAtEnd(30);

        System.out.println("Initial List:");
        list.display();

        list.insertAtBeginning(5);

        System.out.println("\nAfter inserting 5 at beginning:");
        list.display();

        list.insertAtEnd(40);

        System.out.println("\nAfter inserting 40 at end:");
        list.display();

        list.insertAtPosition(15, 3);

        System.out.println("\nAfter inserting 15 at position 3:");
        list.display();


        // SEARCH

        System.out.println("\nSearch 30: " + list.search(30));
        System.out.println("Search 100: " + list.search(100));


        // SIZE

        System.out.println("\nNumber of Nodes: " + list.size());

       // DELETION

        list.deleteAtBeginning();

        System.out.println("\nAfter deleting beginning:");
        list.display();

        list.deleteAtEnd();

        System.out.println("\nAfter deleting end:");
        list.display();

        list.deleteAtPosition(2);

        System.out.println("\nAfter deleting position 2:");
        list.display();


        
        System.out.println("\nFinal Size: " + list.size());
    }
}