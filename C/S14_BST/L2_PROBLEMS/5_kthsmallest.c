#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct node *insertbst(struct node *root,int data){
    struct node *newnode=createnode(data);
    if(root==NULL)return newnode;
    if(root->data>data){
        root->left=insertbst(root->left,data);
    }
    else if(root->data<data){
        root->right=insertbst(root->right,data);
    }
    return root;
}


struct node* ksmallest(struct node* root, int k, int *count) {
    if (root == NULL)
        return NULL;

    struct node* left = ksmallest(root->left, k, count);
    if (left != NULL)
        return left;

    (*count)++;
    if (*count == k)
        return root;
    return ksmallest(root->right, k, count);
}
struct node *klargest(struct node *root,int k,int  *count){
    if(root==NULL)return NULL;
    struct node *right=klargest(root->right,k,count);
    if(right!=NULL)return right;
    (*count)++;
    if(*count==k){
        return root;
    }
    return klargest(root->left,k,count);
}
void postorder(struct node *root){

}

int main(){
    struct node *root=NULL;
    root=insertbst(root,67);
    root=insertbst(root,7);
    root=insertbst(root,37);
    root=insertbst(root,27);
    root=insertbst(root,47);
    root=insertbst(root,62);
    int count=0;
    // struct node *r=ksmallest(root,1,&count);
    struct node *m=klargest(root,2,&count);
    // struct node *r=FloorValue(root,45);
    printf("%d",m->data);
    return 0;
}