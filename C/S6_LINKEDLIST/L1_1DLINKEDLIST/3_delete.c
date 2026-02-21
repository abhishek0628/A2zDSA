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
    return newnode;
}
struct node *insertbeg(struct node **head,int data){
    struct node *newnode=createnode(data);
    if(*head==NULL){
        (*head)=newnode;
        return *head;
    }
    newnode->next=(*head);
    (*head)=newnode;
    return *head;
}
int length(struct node *head){
    if(head==NULL)return 0;
    struct node *temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
struct node *insertpos(struct node**head,int data,int pos){
     if(pos<1)return *head;
     struct node *newnode=createnode(data);
     struct node *temp=*head;
     if(pos==1){
            newnode->next=*head;
            *head=newnode;
            return *head;
     }
     int i=1;
     while(temp!=NULL && i<pos-1){
        temp=temp->next;
        i++;
     }
     if(temp==NULL)return *head;
      newnode->next=temp->next;
      temp->next=newnode;
      return *head;
}
void insertlast(struct node *head,int data){
    struct node *newnode=createnode(data);
    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    
}
struct node *deletebeg(struct node **head){
    if(*head==NULL)return *head;
    *head=(*head)->next;
    return *head;
}
void deletelast(struct node *head){
    if(head==NULL)return ;
    struct node *temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}
struct node *deletepos(struct node **head, int pos){

    if(*head == NULL || pos < 1)
        return *head;

    struct node *temp = *head;

    // Delete first node
    if(pos == 1){
        *head = temp->next;
        free(temp);
        return *head;
    }

    int i = 1;

    while(temp != NULL && i < pos - 1){
        temp = temp->next;
        i++;
    }

    if(temp == NULL || temp->next == NULL)
        return *head;

    struct node *nodeToDelete = temp->next;

    temp->next = nodeToDelete->next;
    free(nodeToDelete);

    return *head;
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
    head=insertbeg(&head,23);
    insertlast(head,89);
    head=insertpos(&head,78,4);
    // printf("%d\n",length(head));
    head=deletepos(&head,2);
    // head=deletebeg(&head);

    display(head);
}