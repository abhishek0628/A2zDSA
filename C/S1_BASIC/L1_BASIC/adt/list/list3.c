//circular linkedlist
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    
};
struct node *createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void insertbegin(struct node **head,int data){
    struct node *newnode=createnode(data);
    if(*head==NULL){
        *head=newnode;
        newnode->next=*head;
        return ;
    }
    struct node *temp=*head;
    while(temp->next!=*head){
        temp=temp->next;
    }

    newnode->next=*head;
    temp->next=newnode;
    *head=newnode;

}
void insertlast(struct node **head,int data){
    struct node *newnode=createnode(data);
    if(*head==NULL){
        *head=newnode;
        newnode->next=*head;
        return;
    }
    struct node *temp=*head;
    while(temp->next!=*head){
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=*head;

}
void display(struct node *head){
    if(head==NULL)return;
    struct node *temp=head;
   do{
    printf("%d ",temp->data);
    temp=temp->next;
   }while(temp!=head);
}
int main(){
    struct node *head=NULL;
    insertbegin(&head,78);
    insertlast(&head,76);
    insertlast(&head,72);
    display(head);
    return 0;
}
