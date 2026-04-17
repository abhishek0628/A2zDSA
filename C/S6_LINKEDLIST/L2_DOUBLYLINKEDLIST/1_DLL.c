#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void insertbeg(struct node **head,int data){ //here head is modified so using pointer
    struct node *newnode=createnode(data);
    if(*head==NULL){
        *head=newnode;
        return ;
    }
    newnode->next=(*head);
    newnode->prev=NULL;
    (*head)->prev=newnode;
    *head=newnode;

}
void insertlast(struct node *head,int data){
    struct node *temp=head;
    struct node *newnode=createnode(data);
    while(temp!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}
int main(){
    struct node *head=NULL;
    insertbeg(&head,89);
    insertlast(head,76);
    display(head);
    return 0;
}