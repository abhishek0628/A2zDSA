#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int rear;
    int front;
    int capacity;
    int *arr;
};
struct queue *initqueue(int capacity)
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->rear=-1;
    q->front=-1;
    q->capacity=capacity;
    q->arr=(int*)malloc(sizeof(int)*capacity);
    return q;
}
int isEmpty(struct queue *q)
{
    return q->front>q->rear;
}
int isFull(struct queue *q)
{
    return q->rear>=q->capacity-1;
}
void push(struct queue *q,int data)
{
    if(isFull(q)){
        printf("queue is full,can not insert element");
        return ;
    }
    if(q->rear==-1 && q->front==-1)
    {
        q->rear=0;
        q->front=0;
        q->arr[0]=data;
        return;
    }
    q->arr[++(q->rear)]=data;
}
int pop(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("queue is emepty,can not remove lement\n");
        return -1;
    }
    return q->arr[(q->front)++];
}
void display(struct queue *q)
{
    if(isEmpty(q))
    {
        printf("queue is empty");
        return;
    }
    for(int i=q->front;i<=q->rear;i++)
    {
        printf("%d ",q->arr[i]);
    }
}
int main()
{
    struct queue *q=initqueue(10);
    push(q,89);
    push(q,171);
    push(q,36);
    display(q);
    return 0;
}