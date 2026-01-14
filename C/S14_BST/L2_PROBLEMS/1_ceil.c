#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode( int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}
struct node *insertbst(struct node *root, int data)
{
    if (root == NULL)
    {
        // root = createnode(data);
        // return root;
        return createnode(data);
    }
    if (root->data > data)
    {
        root->left = insertbst(root->left, data);
    }
    else if (root->data < data)
    {
        root->right = insertbst(root->right, data);
    }
    return root;
}

struct node *Ceil_value(struct node *root, int data)
{
    if (root == NULL)
        return NULL;
    struct node *c = NULL;
    struct node *curr = root;
   
    while (curr!=NULL)
    {
        if(curr->data==data)
        {
            return curr;
        }
        else if(curr->data<data)
        {
            curr=curr->right;

        }
        else{
            c=curr;
            curr=curr->left;
        }
    }
    return c;
}
int main()
{
    struct node *root = NULL;
    root = insertbst(root, 15);
    root = insertbst(root, 5);
    root = insertbst(root, 30);
    root = insertbst(root, 2);
    root = insertbst(root, 10);
    root = insertbst(root, 20);
    root = insertbst(root, 40);
    root = insertbst(root, 1);
    struct node*c=Ceil_value(root,1);
    if(c!=NULL)
    printf("%d",c->data);
    else printf("does not exist");
    return 0;


}
