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
struct node *min(struct node *root)
{
    if (root == NULL)
        return NULL;
    while (root && root->left)
    {
        root = root->left;
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
struct node *inordersuccessor(struct node *root, int data)
{
    if (root == NULL)
        return NULL;
    struct node *curr = root;
    struct node *succ = NULL;
    while (curr!=NULL)
    {
        if (curr->data > data)
        {
            succ = curr;
            curr = curr->left;
        }
        else if (curr->data < data)
        {
            curr = curr->right;
        }
        else
        {
            if (curr->right)
                return min(curr->right);
            else
                break;
        }
    }
    return succ;
}
int main()
{
    struct node *root=NULL;
    root=insert(root,67);
    root=insert(root,89);
    root=insert(root,809);
    root=insert(root,890);
    root=insert(root,829);
    struct node *s=inordersuccessor(root,89);
    if(s==NULL)printf("not exist");
    else
    printf("%d",s->data);
    return 0;

    
}