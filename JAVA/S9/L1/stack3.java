class Node{
    int data;
    Node next;
    Node(int data)
    {
        this.data=data;
        next=null;
    }
}
class stack
{
    Node top;
    // int capacity;
    stack()
    {
        // this.capacity=capacity;
        top=null;
    }
}
class sb{
    int isEmpty(stack s)
    {
        if(s.top==null)return 1;
        return 0;
    }
    void push(stack s,int data)
    {
        Node newnode=new Node(data);
        newnode.next=s.top;
        s.top=newnode;
    }
    Node pop(stack s)
    {
        if(isEmpty(s)==1)return null;
        Node temp=s.top;
        s.top=s.top.next;
        return temp;
    }
    void display(stack s)
    {
        Node temp=s.top;
        while(temp!=null)
        {
            System.out.print(temp.data+" ");
            temp=temp.next;
        }
    }
}
class stack3
{
    public static void main(String[]args)
    {
        stack st=new stack();
        sb s=new sb();
        s.push(st,267);
        s.push(st,76);
        s.display(st);
        System.out.println();
        s.pop(st);
        s.display(st);
            }
}