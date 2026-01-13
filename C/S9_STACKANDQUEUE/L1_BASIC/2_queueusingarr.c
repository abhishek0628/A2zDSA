#include<stdio.h>
#define size 10
int rear=-1;
int front=-1;
int arr[size];
int isFull()
{
    return rear>=size-1;
}
int isEmpty()
{
    return front>rear;
}
void push(int data)
{
    if(isFull()){
        printf("queue is full");
        return;
    }
    if(rear==-1 && front ==-1)
    {
        rear=0;
        front=0;
        arr[rear]=data;
        return ;
    }
    arr[++rear]=data;
}
int pop()
{
    if(isEmpty()){
        printf("queue is empty, can not remove element\n");
        return -1;
    }
    return arr[front++];
}
void display()
{
    if(isEmpty()){
        printf("queue is empty\n");
        return;
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    push(282);
    push(22);
    push(273);
    display();
    printf("\n");
    pop();
    pop();
    pop();
    pop();
    // pop();
    display();
    return 0;
}