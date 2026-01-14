#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node *max(struct node *root)
{
    if (root == NULL)
        return NULL;
    while (root && root->right)
    {
        root = root->right;
    }
    return root;
}
struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        root=createnode(data);
        return root;
    }
    if(root->data>data)
    {
        root->left=insert(root->left,data);
    }
    else if(root->data<data)
    {
        root->right=insert(root->right,data);
    }
    return root;
}
struct node *inorderpredecessor(struct node *root, int data)
{
    if (root == NULL)
        return NULL;
    struct node *curr = root;
    struct node *pre = NULL;
    while (curr!=NULL)
    {
        if (curr->data > data)
        {
            
            curr = curr->left;
        }
        else if (curr->data < data)
        {
            pre=curr;
            curr = curr->right;
        }
        else
        {
            if (curr->left)
                return max(curr->left);
            else
                break;
        }
    }
    return pre;
}
int main()
{
    struct node *root=NULL;
    root=insert(root,67);
    root=insert(root,89);
    root=insert(root,809);
    root=insert(root,890);
    root=insert(root,829);
    struct node *pre=inorderpredecessor(root,89);
    if(pre==NULL)printf("not exist");
    printf("%d",pre->data);
    return 0;

    
}