#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;;
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
int count(struct node *root)
{
    if(root==NULL)return 0;
    struct node *temp=root;
    int cnt=0;
    while(temp && temp->right)
    {
        cnt++;
        temp=temp->right;
    } 
    return cnt;
}
int kthlargest(struct node*root,int k)
{
    
    if(root==NULL)return -1;
    int cnt=count(root);
    int itr=0;
    while(root && root->right && (cnt-k)>=itr)
    {
        root=root->right;
        itr++;
    }
    return root->data;
    
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
    root=insertbst(root,15);
    root=insertbst(root,5);
    root=insertbst(root,30);
    root=insertbst(root,2);
    root=insertbst(root,10);
    root=insertbst(root,20);
    root=insertbst(root,40);
    root=insertbst(root,1);
    inorder(root);
    printf("\n");
    printf("%d",kthlargest(root,4));
    return 0;
    
}
