#include<stdio.h>
#include<stdlib.h>
struct node {
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
struct stack {
    struct node *top;


};
struct stack *createstack()
{
    struct stack*s=(struct stack*)malloc(sizeof(struct stack));
    s->top=NULL;
    return s;
}
int isEmpty(struct stack *s)
{
    return s->top==NULL;
}
void push(struct stack *s,int data)
{
    struct node *newnode=createnode(data);
    newnode->next=s->top;
    s->top=newnode;

}
int pop(struct stack *s)
{
    if(isEmpty(s))return -1;
    return s->top->data;

}
void display(struct stack *s)
{
    if(isEmpty(s))return;
    struct node *temp=s->top;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main()
{
    struct stack *s=createstack();
    push(s,90);
    push(s,892);
    display(s);
    return 0;
}