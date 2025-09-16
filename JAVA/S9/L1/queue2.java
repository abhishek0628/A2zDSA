class Node{
    int data;
    Node next;
    Node(int data)
    {
        this.data=data;
        next=null;
    }

}
class que
{
    Node rear;
    Node front;
    que()
    {
        this.rear=null;
        this.front=null;
    }
}
class q{
    int isEmpty(que q)
    {
        if(q.rear==null || q.front==null)return 1;
        return 0;
    }
    void push(que q,int data)
    {
        Node newnode=new Node(data);
        if(q.rear==null)
        {
            // newnode.next=q.front;
            q.front=newnode;
            q.rear=newnode;
            return;
        }
       q.rear.next=newnode;
       q.rear=newnode;
    }
    void pop(que q)
    {
        if(isEmpty(q)==1)return ;
        q.front=q.front.next;


    }
    void display(que q)
    {
        Node temp=q.front;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;

        }
    }
}
public class queue2
{
    public static void main(String[]args)
    {
        que q=new que();
        q qt=new q();
        qt.push(q,890);
        qt.push(q,809);
        qt.push(q,89);
        qt.push(q,89);
        qt.pop(q);
        qt.display(q);
    }
}