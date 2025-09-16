class stack{
    int top;
    int size;
    int []arr;
    stack(int size)
    {
        this.size=size;
        top=-1;
        arr=new int[size];
    }
}
class s{
    int isFull(stack st)
    {
        if(st.top==st.size-1)return 1;
        return 0;
        
    }
    int isEmpty(stack st)
    {
        if(st.top==-1)return 1;
        return 0;
    }
    void push(int data,stack st)
    {
        if(isFull(st)==1)return ;
        st.arr[++st.top]=data;

    }
    int pop(stack st)
    {
        if(isEmpty(st)==1)return -1;
        return st.arr[st.top];

    }
    void display(stack st)
    {
        for(int i=0;i<=st.top;i++)
        {
            System.out.print(st.arr[i]+" ");
        }
    }
}
public class stack2
{
    public static void main(String[] args) {
        {
            int size=10;
            stack st=new stack(size);
            s stt=new s();
            stt.push(282,st);
            stt.push(272,st);
            stt.display(st);
        }
    }
}