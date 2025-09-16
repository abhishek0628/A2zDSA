class Node
{
    int data;
    Node next;
    Node(int data)
    {
        this.data=data;
        this.next=null;
    }
}
class list{
    Node head;
    void insertbegin(int data)
    {
        Node newnode=new Node(data);
        newnode.next=head;
        head=newnode;
    }
    void insertend(int data)
    {
        Node newnode=new Node(data);
        Node temp=head;
        while(temp.next!=null)
        {
            temp=temp.next;
        }
        temp.next=newnode;
    }
    void deletefirst()
    {
        // Node temp=head.next;
        head=head.next;
        // free(temp);
    }
    void deletelast()
    {
        Node temp=head;
        while(temp.next.next!=null)
        {
            temp=temp.next;
        }
        temp.next=null;
    }

    void display()
    {
        Node temp=head;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
}
public class linkedlist
{
    public static void main(String[] args) {
        {
    }
    Node head=null;
    list l=new list();
    l.insertbegin(87);
    l.insertend(272);
    l.display();
    }


}