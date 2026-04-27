//using linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct queue{
    struct node *rear;
    struct node *front;

};
struct queue *createQue(){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->rear=NULL;
    q->front=NULL;
    return q;
}
int main(){
    return 0;
    
}
