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
struct node *insert(struct node *root, int data)
{
    if (root == NULL)
        return createnode(data);
    if (root->data > data)
    {
        root->left = insert(root->left, data);
    }
    else if (root->data < data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}
int countnodes(struct node *root)
{
    if (root == NULL)
        return 0;
    return countnodes(root->left) + countnodes(root->right) + 1;
}
void inorder(struct node *root, int arr[], int *index)
{
    if (root == NULL)
        return;
    inorder(root->left, arr, index);
    arr[++(*index)] = root->data;
    inorder(root->right, arr, index);
}
void in(struct node *root)
{
    if(root==NULL)return;
    in(root->left);
    printf("%d ",root->data);
    in(root->right);
}
struct node *merge(struct node *root1, struct node *root2)
{
    if (root1 == NULL) return root2;
    if (root2 == NULL) return root1;

    int n1 = countnodes(root1);
    int n2 = countnodes(root2);

    // pick the smaller tree to flatten into array
    int smaller = (n1 < n2) ? n1 : n2;
    int *arr = (int *)malloc(sizeof(int) * smaller);
    int index = -1;

    if (n1 >= n2) {
        inorder(root2, arr, &index);
        for (int i = 0; i <= index; i++) {
            root1 = insert(root1, arr[i]);
        }
        free(arr);
        return root1;
    } else {
        inorder(root1, arr, &index);
        for (int i = 0; i <= index; i++) {
            root2 = insert(root2, arr[i]);
        }
        free(arr);
        return root2;
    }
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
    struct node *root1 = NULL;
    struct node *root2 = NULL;
    root1 = insert(root1, 78);
    root1 = insert(root1, 708);
    root1 = insert(root1, 780);
    root1 = insert(root1, 28);
    root1 = insert(root1, 718);
    root2 = insert(root2, 23);
    root2 = insert(root2, 33);
    root2 = insert(root2, 223);
    root2 = insert(root2, 923);
    struct node *root = merge(root1, root2);
    // postorder(root);
    in(root);
    // printf("\n");
    // in(root2);
    return 0;
}