class Node{
    int data;
    Node next;
    Node(int data){
        this.data=data;
        next=null;
    }
}
class LinkedList{
    Node head;
    void insertbeg(int data){
        Node newnode=new Node(data);
        newnode.next=head;
        head=newnode;
    }
    int length(){
        Node temp=head;
        int count=0;
        while(temp!=null){
            count++;
            temp=temp.next;
        }
        return count;
    }
}
public class _4_length{
    public static void main(String[] args){
        LinkedList list=new LinkedList();
        list.insertbeg(23);
        list.insertbeg(26);
        System.out.print(list.length());

    }
}