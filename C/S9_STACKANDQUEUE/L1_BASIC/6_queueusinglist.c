#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *createnode(int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct queue
{
    struct node *rear;
    struct node *front;

};
struct queue *createqueue()
{
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->rear=NULL;
    q->front=NULL;
    return q;
}
int isEmpty(struct queue *q)
{
    return q->front==NULL;
}
void push(struct queue *q,int data)
{
    struct node *newnode=createnode(data);
    if(q->rear==NULL && q->front==NULL)
    {
        q->rear=newnode;
        q->front=newnode;
        return;
    }
    q->rear->next=newnode;
    // newnode->next=q->rear;
    q->rear=newnode;
}
void display(struct queue *q)
{
    struct node *temp=q->front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct queue *q=createqueue();
    push(q,89);
    push(q,262);
    display(q);
    return 0;
}