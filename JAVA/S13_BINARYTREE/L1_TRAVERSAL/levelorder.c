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
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct queue
{
    int rear;
    int front;
    struct node **arr;
    int capacity;
};
struct queue *createqueue(int capacity)
{
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->rear=-1;
    q->front=0;
    q->arr=(struct node **)malloc(sizeof(struct node*)*capacity);
    q->capacity=capacity;
    return q;
}
int isEmpty(struct queue *q)
{
    return q->front>q->rear;
}
void push(struct queue *q,struct node * root)
{

    q->arr[++(q->rear)]=root;
}
struct node *pop(struct queue *q)
{
    if(isEmpty(q))return NULL;
    return q->arr[(q->front)++];
}
// void level(struct node *root) {
//     if (root == NULL) return;
//     struct queue *q = createqueue(100);
//     push(q, root);

//     while (!isEmpty(q)) {
//         int levelSize = q->rear - q->front + 1;  // count nodes in this level

//         for (int i = 0; i < levelSize; i++) {
//             struct node *temp = pop(q);
//             printf("%d ", temp->data);

//             if (temp->left) push(q, temp->left);
//             if (temp->right) push(q, temp->right);
//         }
//         printf("\n");  // ✅ new line after finishing this level
//     }
// }

void level(struct node *root)
{
    struct queue *q=createqueue(100);
    push(q,root);
    while(!isEmpty(q))
    {
        int size=q->rear-q->front+1;
        for(int i=0;i<size;i++)
        {
            struct node *temp=pop(q);
            printf("%d ",temp->data);
            if(temp->left)push(q,temp->left);
            if(temp->right)push(q,temp->right);
        }
        printf("\n");
    }

}
int main()
{
    struct node *root=createnode(100);
    root->left=createnode(29);
    root->right=createnode(262);
    level(root);
    return 0;
}