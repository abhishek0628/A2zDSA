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
struct node *insertleft(struct node *root,int data)
{
    struct node *newnode=createnode(data);
    root->left=newnode;
    return root->left;
}
struct node *insertright(struct node *root,int data)
{
    struct node *newnode=createnode(data);
    root->right=newnode;
    return root->right;
}
void inorder(struct node *root)
{
    if(root==NULL)return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void preorder(struct node *root)
{
    if(root==NULL)return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);

}
void postorder(struct node *root)
{
    if(root==NULL)return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
int main()
{
    struct node *root=createnode(10);
    // root->left=createnode(102);
    // root->right=createnode(26);
    root->left=insertleft(root,78);
    root->right=insertright(root,89);
    inorder(root);
    return 0;
}