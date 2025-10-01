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
bool isbst(struct node *root,int min,int max)
{
    if(root==NULL)return true;
    if(root->data<=min ||root->data>=max)
    {
        return false;
    }
    return isbst(root->left,min,root->data) && isbst(root->right,root->data,max);
    


}
int Isbst(struct node *root)
{
    bool t=isbst(root,INT_MIN,INT_MAX);
    return t; 
}
int main()
{
    struct node *root=createnode(10);
    root->left=createnode(60);
    root->right=createnode(18);
    
    printf("%d",Isbst(root));
    return 0;
}