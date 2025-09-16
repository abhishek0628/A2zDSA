class s{
    int size;
    int top=-1;
    int[]arr=new int[10];
    int isEmpty()
    {
        if(top==-1)return 1;
        return 0;
    }
    int isFull()
    {
        if(top==9)return 1;
        return 0;
    }
    void push(int data)
    {
        if(isFull()==1)return;
        arr[++top]=data;

    }
    int pop()
    {
        if(isEmpty()==1)return -1;
        return arr[top--];
        

    }
    void display()
    {
        for(int i=0;i<=top;i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}
public class stack
{
    public static void main(String[]args)
    {
        // int size=10;
        s st=new s();
        st.push(78);
        st.push(272);
        st.display();
    }
}