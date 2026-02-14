/*
Given a root of binary search tree and a key(node) value, find the floor and ceil value for that particular key value.



Floor Value Node: Node with the greatest data lesser than or equal to the key value. 


Ceil Value Node: Node with the smallest data larger than or equal to the key value.


If a particular floor or ceil value is not present then output -1.


Example 1

Input : root = [8, 4, 12, 2, 6, 10, 14] , key = 11

Output : [10, 12]
*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node*createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *insertbst(struct node *root,int data){
    struct node*newnode=createnode(data);
    if(root==NULL)return newnode;
    if(root->data>data){
        root->left=insertbst(root->left,data);
    }
    else if(root->data<data){
        root->right=insertbst(root->right,data);
    }
    return root;
}
struct node *CeilValue(struct node*root,int key){
    if(root==NULL)return NULL;
    struct node *res=root;
    while(root!=NULL){
        if(root->data==key){
            return root;
        }
        else if(root->data>key){
            res=root;
            root=root->left;
        }
        else{
            root=root->right;
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
    struct node *r=CeilValue(root,45);
    printf("%d",r->data);
    return 0;
}