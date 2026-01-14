#include<stdio.h>
#include<stdlib.h>
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
    if(root==NULL)
    {
        root=createnode(data);
        return root;
    }
    if(root->data>data)
    {
        root->left=insertbst(root->left,data);
    }
    else if(root->data<data)
    {
        root->right=insertbst(root->right,data);
    }
    // else
    return root;
}
int max(struct node *root)
{
    if(root==NULL)return -1;
    while(root &&root->right)
    {
        root=root->right;
    }
    return root->data;
}
int min(struct node *root)
{
    if(root==NULL)return -1;
    while(root&& root->left)
    {
        root=root->left;
    }
    return root->data;
}
int search(struct node *root,int data)
{
    if(root==NULL)return -1;
    if(root->data==data)return 1;
    if(root->data>data)
    {
        return search(root->left,data);
    }
    return search(root->right,data);
}
void preorder(struct node *root)
{
    if(root==NULL)return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
    
}
int main()
{
    struct node *root=NULL;
    root=insertbst(root,78);
    root=insertbst(root,89);
    root=insertbst(root,708);
    root=insertbst(root,819);
    root=insertbst(root,8);
    root=insertbst(root,890);
    preorder(root);
    printf("\n%d %d",max(root),min(root));
    printf("\n");
    preorder(root);
    printf("\n%d",search(root,890));
    return 0;
}