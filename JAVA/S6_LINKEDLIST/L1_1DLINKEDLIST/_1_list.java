


class Node{
    int data;
    Node next;
    Node(int data){
        this.data=data;
        this.next=null;
    }
}
class LinkedList{
    Node head;
    void insertbeg(int data){
        Node newnode=new Node(data);
        newnode.next=head;
        head=newnode;
    }
    void display(){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }

    }
}
public class _1_list{
    public static void main(String[] args){
        Node head=null;
        LinkedList list=new LinkedList();
        list.insertbeg(23);
        list.insertbeg(45);
        list.display();

    }
}