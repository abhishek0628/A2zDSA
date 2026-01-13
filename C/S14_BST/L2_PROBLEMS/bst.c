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
struct node *min(struct node *root)
{
    if(root==NULL)return NULL;
    while(root && root->left)
    {
        root=root->left;
    }
    return root;
}
struct node *max(struct node *root)
{
    if(root==NULL)return NULL;
    while(root&&root->right)
    {
        root=root->right;
    }
    return root;
}
struct node *inordersuccessor(struct node *root,int data)
{
    if(root==NULL)return NULL;
    struct node *curr=root;
    struct node *succ=NULL;
    while(curr)
    {
        if(curr->data>data)
        {
            succ=curr;
            curr=curr->left;
        }
        else if(curr->data<data)
        {
            curr=curr->right;
        }
        else{
            if(curr->right)
            {
                return min(curr->right);
            }
            else 
            {
                break;
            }
        }
    }
    return succ;
}
struct node *inorderpredecessor(struct node *root,int data)
{
    if(root==NULL)return NULL;
    struct node *curr=root;
    struct node *pre=NULL;
    while(curr)
    {
        if(data>curr->data)
        {
            pre=curr;
            curr=curr->right;
        }
        else if(data<curr->data)
        {
            curr=curr->left;
        }
        else{
            if(curr->left)return max(curr->left);
            else break;
        }
    }
    return pre;
}
struct node *delete(struct node *root,int data)
{
    if(root==NULL)return NULL;
    if(root->data>data)
    {
        root->left=delete(root->left,data);
    }
    else if(root->data<data)
    {
        root->right=delete(root->right,data);
    }
    else{
         if(root->right==NULL)
         {
            struct node *temp=root->left;
            free(root);
            
            return temp;
         }
         else if(root->left==NULL)
         {
            struct node *temp=root->right;
            free(root);
            
            return temp;
         }
         else 
         {
            struct node *temp=min(root->right);
            root->data=temp->data;
            root->right=delete(root->right,temp->data);
            
         }
    }
    return root;
}
void inorder(struct node *root)
{
    if(root==NULL)return ;
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
    delete(root,2);
    printf("\n");
    inorder(root);

    // struct node *temp=inordersuccessor(root,5);
    // struct node *pre=inorderpredecessor(root,30);
    // printf("%d\n",temp->data);
    // printf("%d",pre->data);
    return 0;
    
}