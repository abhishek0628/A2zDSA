//singly linkedlist
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
void insertbeg(struct node **head,int data){
    struct node *newnode=createnode(data);
    if((*head)==NULL){
        (*head)=newnode;
        return;
    }
    newnode->next=(*head);
    (*head)=(*head)->next;
    // return *head;
}
// struct node *insertbeg(struct node**head,int data){
//     struct node *newnode=createnode(data);
//     if((*head)==NULL){
//         return newnode;
//     }
//     newnode->next=(*head);
//     (*head)=newnode;
//     return *head;
// }
void display(struct node*head){
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    struct node *head=NULL;
    // head=insertbeg(&head,89);
    insertbeg(&head,67);
    display(head);
    return 0;

}