#include<stdio.h>
#define size 10
int top=-1;
int arr[size];
int isEmpty()
{
    return top==-1;
}
int isFull()
{
    return top==size-1;
}
void push(int data)
{
    if(isFull()){
        printf("stack is full,can not insert element");
        return;
    }
    arr[++top]=data;
}
int pop()
{
    if(isEmpty())
    {
        printf("stack is empty,can not pop element");
        return -1;
    }
    return arr[top--];
}
void display()
{
    if(isEmpty()){
        printf("stack is empty");
        return;
    }
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    push(23);
    push(27);
    push(272);
    push(89);
    printf("element inserted:");
    display();
    printf("\n");
    pop();
    printf("stack after top element is deleted:");
    display();
    return 0;
}
