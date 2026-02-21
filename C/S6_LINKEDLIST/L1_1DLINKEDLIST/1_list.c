#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createnode(int data){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    newnode->next=NULL;
    return newnode;
}
void display(struct node *head){
    if(head==NULL)return ;
    struct node *temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    struct node *head=createnode(34);
    display(head);
}