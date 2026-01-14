#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *insertbst(struct node *root,int data)
{
    if(root==NULL)return createnode(data);
    if(data>root->data)root->right=insertbst(root->right,data);
    else if(data<root->data)root->left=insertbst(root->left,data);
    return root;
}
bool isBst(struct node *root,int min,int max)
{
    if(root==NULL)return true;
    if(root->data<min||max<root->data)return false;
    return isBst(root->left,min,root->data) && isBst(root->right,root->data,max);
}
int isbst(struct node *root )
{
    return isBst(root,INT_MIN,INT_MAX);
}
int countnodes(struct node *root)
{
    if(root==NULL)return 0;
    int l=countnodes(root->left);
    int r=countnodes(root->right);
    return l+r+1;
}
struct node *largestbst(struct node*root)
{
    if(root==NULL)return NULL;
    if(isbst(root))return root;
    
    struct node *l=largestbst(root->left);
    struct node *r=largestbst(root->right);
    return (countnodes(l)>=countnodes(r)?l:r);
}
void inorder(struct node *root)
{
    if(root==NULL)return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
int main()
{
    struct node *root=NULL;
    // root=insertbst(root,15);
    // root=insertbst(root,5);
    // root=insertbst(root,30);
    // root=insertbst(root,2);
    // root=insertbst(root,10);
    // root=insertbst(root,20);
    // root=insertbst(root,40);
    // root=insertbst(root,1);
    // // inorder(root);
    // // printf("\n");
    // // printf("%d",kthlargest(root,4));
    // printf("%d",countnodes(root));
    root=createnode(78);
    root->left=createnode(290);
    root->right=createnode(2);
    root->left->left=createnode(987);
    root->right->right=createnode(6);
    struct node *l=largestbst(root);
    inorder(l);
    return 0;
    
}