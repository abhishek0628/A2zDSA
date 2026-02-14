#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data){
    struct node *root=(struct node*)malloc(sizeof(struct node));
    root->left=NULL;
    root->right=NULL;
    root->data=data;
    return root;
}
struct node *insertbst(struct node *root,int data){
    struct node *newnode=createnode(data);
    if(root==NULL){
        return newnode;
    }
    if(root->data<data){
        root->right=insertbst(root->right,data);
    }
    else if(root->data>data){
        root->left=insertbst(root->left,data);
    }
    return root;
}
int search(struct node *root,int key){
    if(root==NULL)return 0;
    if(root->data==key){
        return 1;
    }
    if(root->data>key){
        return search(root->left,key);
    }
    return search(root->right,key);
}
void postorder(struct node *root){
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main(){
    struct node *root=NULL;
    root=insertbst(root,56);
    root=insertbst(root,564);
    int s=search(root,596);
    postorder(root);
    printf("\n%d",s);
    return 0;
}