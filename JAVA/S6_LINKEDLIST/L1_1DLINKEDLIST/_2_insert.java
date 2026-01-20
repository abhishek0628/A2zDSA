


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
    void insertlast(int data){
        Node newnode=new Node(data);
        Node temp=head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=newnode;
    }
    void insertpos(int data,int pos){
        Node newnode=new Node(data);
        if(pos==1){
            newnode.next=head;
            head=newnode;
            return;
        }
        int count=1;
        Node temp=head;
        while(temp!=null && count<pos-1){
            temp=temp.next;
            count++;
        }
       if(temp==null)return;
       newnode.next=temp.next;
       temp.next=newnode;


    }
    void display(){
        Node temp=head;
        while(temp!=null){
            System.out.print(temp.data+" ");
            temp=temp.next;
        }

    }
}
public class _2_insert{
    public static void main(String[] args){
        Node head=null;
        LinkedList list=new LinkedList();
        list.insertbeg(23);
        list.insertbeg(45);
        list.insertpos(65,1);
        list.display();

    }
}