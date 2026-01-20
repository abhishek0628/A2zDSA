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
    int search(int key){
        Node temp=head;
        int count=1;
        while(temp!=null){
            if(temp.data==key){
                return count;
            }
            count++;
            temp=temp.next;
        }
        if(temp==null)return -1;
        return count;
    }
}
public class _5_search{
    public static void main(String[] args){
        LinkedList list=new LinkedList();
        list.insertbeg(23);
        list.insertbeg(26);
        list.insertbeg(203);
        list.insertbeg(260);
        list.insertbeg(231);
        list.insertbeg(263);
        System.out.print(list.search(203));

    }
}