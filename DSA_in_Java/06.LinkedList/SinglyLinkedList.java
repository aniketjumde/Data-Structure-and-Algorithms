class Node
{
    int data;
    Node next;

    public Node(int data)
    {
        this.data=data;
        this.next=null;
    }
}

public class SinglyLinkedList 
{
    public static Node head;
    public static Node tail;

    public void insert(int data)
    {
        Node newNode=new Node(data);

        if(head==null)
        {
            head=tail=newNode;
            return;
        }

        Node temp=head;
        while(temp.next!=null)
        {
            temp=temp.next;
        }

        temp.next=newNode;
        tail=newNode;

    }

    public void addFirst(int data)
    {
        Node newNode=new Node(data);

        if(head==null)
        {
            head=tail=newNode;
            return;
        }

        newNode.next=head;

        head=newNode;

    }

    public void addLast(int data)
    {
        Node newNode=new Node(data);

        if(head==null)
        {
            head=tail=newNode;
            return;
        }
        tail.next=newNode;
        tail=newNode;
    }

    public void print()
    {
        Node temp=head;
        while(temp!=null)
        {
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.println("null");
    }

    public void removeFirst()
    {
        if(head == null)
        {
            return;
        }

        head=head.next;

         if(head == null)
        {
            tail=null ;
            return;
        }
    }

    public void removeLast()
    {
        if(head == null) return;

         if(head.next == null)
        {
            head = tail = null;
            return;
        }

        Node temp=head;

        while(temp.next.next!=null)
        {
            temp=temp.next;
        }
        temp.next=null;
        tail = temp;
    }

   public void remove(int index)
    {
        if(head == null) return;

        if(index == 0)
        {
            removeFirst();
            return;
        }

        Node temp = head;
        int i = 0;

        while(i < index-1 && temp.next != null)
        {
            temp = temp.next;
            i++;
        }

        if(temp.next == null) return;

        temp.next = temp.next.next;

        if(temp.next == null)
            tail = temp;
    }

    public void reverse()
    {
       Node prev=null;
       Node current=head;
       Node next;

       while(current!=null)
       {
            next=current.next;
            current.next=prev;
            prev=current;
            current=next;
       }

       head=prev;
    }

    public int getSize()
    {
        Node temp=head;
        int size=1;
        while(temp!=null)
        {
            temp=temp.next;
            size++;
        }

        return size;
    }

    public int search(int key)
    {
        Node temp=head;
        int index=0;

        while(temp!=null)
        {
            if(temp.data==key)
            {
                return index;
            }
            temp=temp.next;
            index++;
        }

        return -1;
    }

    public static void main(String[] args)
    {
        SinglyLinkedList ll = new SinglyLinkedList();

        ll.addFirst(10);
        ll.addLast(20);
        ll.addLast(30);
        ll.addFirst(5);

        ll.print();

        ll.reverse();
        ll.print();

        ll.remove(2);
        ll.print();

        System.out.println("Size: " + ll.getSize());
        System.out.println("Search 20: " + ll.search(20));
    }


    
}
