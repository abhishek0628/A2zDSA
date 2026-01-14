#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int capacity;
    int *arr;
};
struct stack *initstack(int capacity)
{
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->top=-1;
    s->capacity=capacity;
    s->arr=(int *)malloc(sizeof(int)*capacity);
    return s;

}
int isFull(struct stack *s)
{
    return s->top==s->capacity-1;
}
int isEmpty(struct stack *s)
{
    return s->top==-1;
}
void push(struct stack *s,int data)
{
    if(isFull(s))
    {
        printf("stack is Full,can not insert element\n");
        return;
    }
    s->arr[++(s->top)]=data;
}
int pop(struct stack *s)
{
    if(isEmpty(s))
    {
        printf("stack is empty,can not remove element\n");
        return -1;
    }
    return s->arr[(s->top)++];
}
void display(struct stack *s)
{
    if(isEmpty(s))
    {
        printf("stack is Empty\n");
        return ;
    }
    for(int i=0;i<=s->top;i++)
    {
        printf("%d ",s->arr[i]);
    }
}
int main()
{
    struct stack *s=initstack(10);
    push(s,98);
    push(s,272);
    push(s,373);
    display(s);
    return 0;

}