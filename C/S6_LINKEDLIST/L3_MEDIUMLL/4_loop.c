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
int isCycle(struct node *head){
    struct node *slow=head;
    struct node *fast=head;
    while(fast!=NULL&& fast->next!=NULL){
        
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return 1;
        }
    }
    return 0;
}
int main(){
    struct node *head=NULL;
    insertbeg(&head,78);
    insertbeg(&head,79);
    insertbeg(&head,8);
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=head;
    printf("%d",isCycle(head));
    return 0;
}