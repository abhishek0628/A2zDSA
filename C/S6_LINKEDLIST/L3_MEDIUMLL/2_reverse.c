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
    if(*head==NULL){
        *head=newnode;
        return;
    }
    newnode->next=*head;
    *head=newnode;
}
void display(struct node *head){
    if(head==NULL)return;
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void reverse(struct node **head){
    if(*head==NULL)return;
    struct node *prev=NULL;
    struct node *curr=*head;
    struct node *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head=prev;
}
int main(){
    struct node *head=NULL;
    insertbeg(&head,98);
    insertbeg(&head,928);
    insertbeg(&head,981);
    insertbeg(&head,983);
    insertbeg(&head,9128);
    printf("general order: ");
    display(head);
    printf("\nreversed order: ");
    display(head);
    return 0;


}