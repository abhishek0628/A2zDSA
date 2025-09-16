class que
{
    int rear;
    int front;
    int capacity;
    int []arr;
    que(int capacity)
    {
        this.rear=-1;
        this.front=-1;
        arr=new int[capacity];
        this.capacity=capacity;

    }
}
class qq{
    int isEmpty(que q)
    {
        if(q.rear==-1)return 1;
        return 0;
    }
    int isFull(que q)
    {
        if(q.rear==q.capacity-1)return 1;
        return 0;
    }
    void push(que q,int data)
    {
        if(isFull(q)==1)return ;
        if(q.rear==-1 && q.front==-1)
        {
            q.rear=0;
            q.front=0;
            q.arr[q.rear]=data;
            return;
        }
        q.arr[++(q.rear)]=data;
    }
    int pop(que q)
    {
        if(isEmpty(q)==1)return -1;
        int p=q.arr[q.front++];
        if(q.front==q.rear)
        {
            q.rear=-1;
            q.front=-1;
        }
        return p;
    }
    void display(que q)
    {
        for(int i=q.front;i<=q.rear;i++)
        {
            System.out.print(q.arr[i]+" ");
        }
    }
}
public class queue
{
    public static void main(String[] args) {
        {
            int cap=10;
            que q=new que(cap);
            qq qt=new qq();
            qt.push(q,67);
            qt.display(q);
            

        }
    }
}