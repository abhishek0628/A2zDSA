#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *insertbst(struct node *root,int data){
    struct node *newnode=createnode(data);
    if(root==NULL)return newnode;
    if(root->data>data){
        root->left=insertbst(root->left,data);
    }
    else if(root->data<data){
        root->right=insertbst(root->right,data);
    }
    return root;
}
struct node *FloorValue(struct node *root,int key){
    if(root==NULL)return NULL;
    struct node *res=root;
    while(root!=NULL){
        if(root->data==key){
            return root;
        }
        else if(root->data<key){
            res=root;
            root=root->right;
        }
        else {
            root=root->left;
        }
    }
    return res;
}
int main(){
    struct node *root=NULL;
    root=insertbst(root,67);
    root=insertbst(root,7);
    root=insertbst(root,37);
    root=insertbst(root,27);
    root=insertbst(root,47);
    root=insertbst(root,62);
    struct node *r=FloorValue(root,45);
    printf("%d",r->data);
    return 0;
}