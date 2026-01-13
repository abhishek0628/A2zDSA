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
    struct node *root=(struct node *)malloc(sizeof(struct node));
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
int height(struct node *root)
{
    if(root==NULL)return -1;
    int leftheight=height(root->left);
    int rightheight=height(root->right);
    return (leftheight>rightheight?leftheight:rightheight)+1;
}
int main()
{
    struct node *root=createnode(28);
    root->left=createnode(26);
    root->right=createnode(272);
    printf("%d",height(root));
    return 0;
}