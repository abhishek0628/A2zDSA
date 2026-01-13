#include<stdio.h>
#include<stdlib.h>
#define nodes 5

struct node
{
    int data;
    struct node *next;
};
struct node *createnode(int data)
{
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct queue 
{
    int rear;
    int front;
    int *arr;

};
struct queue *createqueue(int capacity)
{
    struct queue *q=(struct queue *)malloc(sizeof(struct queue));
    q->rear=-1;
    q->front=0;
    q->arr=(int *)malloc(sizeof(int)*capacity);
    return q;
}
int isEmpty(struct queue *q)
{
    return q->front>q->rear;
}
void enqueue(struct queue *q,int data)
{
    
    q->arr[++(q->rear)]=data;
}
int dequeue(struct queue *q)
{
    if(isEmpty(q))return -1;
    return q->arr[(q->front)++];
    
}
struct graph 
{
    struct node *adjlist[nodes];
    int visited[nodes];
};
struct graph *creategraph()
{
    struct graph *g=(struct graph *)malloc(sizeof(struct graph));
    for(int i=0;i<nodes;i++)
    {
        g->adjlist[i]=NULL;
        g->visited[i]=0;
    }
    return g;
}
void addedge(struct graph *g,int src,int dst)
{
    struct node *newnode=createnode(dst);
    newnode->next=g->adjlist[src];
    g->adjlist[src]=newnode;
    newnode=createnode(src);
    newnode->next=g->adjlist[dst];
    g->adjlist[dst]=newnode;
}
void bfs(struct graph *graph,int src)
{
   struct queue *q=createqueue(10);
   enqueue(q,src);
   graph->visited[src]=1;
   while(!isEmpty(q))
   {
    int curr=dequeue(q);
    printf("%d ",curr);
    struct node *temp=graph->adjlist[curr];
    while(temp!=NULL)
    {
        int t=temp->data;
        if(graph->visited[t]==0)
        {
            graph->visited[t]=1;
            enqueue(q,t);
        }
        temp=temp->next;
    }
   }
}
int main()
{
    struct graph *g=creategraph();
    addedge(g,0,1);
    addedge(g,1,2);
    addedge(g,2,3);
    addedge(g,3,4);
   
    bfs(g,0);
    return 0;

}