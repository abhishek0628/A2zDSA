#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*createnode(int data){
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct queue{
    int rear;
    int front;
    int *arr;
};
struct queue *createque(int size){
    struct queue *q=(struct queue*)malloc(sizeof(struct queue));
    q->arr=(int*)malloc(sizeof(int)*size);
    q->rear=-1;
    q->front=0;
    return q;
}
struct graph {
    int numsize;
    struct node **adjlist;
    int *visited;

};
int isEmpty(struct queue*q){
    return q->front>q->rear;
}
void enqueue(struct queue*q,int data){
    q->arr[++q->rear]=data;
}
int deque(struct queue*q){
    if(isEmpty(q))return -1;
    return q->arr[q->front++];
}
struct graph *creategraph(int numsize){
    struct graph *graph=(struct graph*)malloc(sizeof(struct graph));
    graph->numsize=numsize;
    graph->adjlist=(struct node**)malloc(sizeof(struct node*)*numsize);
    graph->visited=(int*)malloc(sizeof(int)*numsize);
    for(int i=0;i<numsize;i++){
        graph->adjlist[i]=NULL;
        graph->visited[i]=0;
    }
    return graph;
}
void addEdge(struct graph *graph,int src,int dst){
    struct node *newnode=createnode(src);
    newnode->next=graph->adjlist[dst];
    graph->adjlist[dst]=newnode;
    newnode=createnode(dst);
    newnode->next=graph->adjlist[src];
    graph->adjlist[src]=newnode;
}
void bfs(struct graph *graph,int src){
    struct queue*q=createque(graph->numsize);
    graph->visited[src]=1;
    enqueue(q,src);
    while(!isEmpty(q)){
        int n=deque(q);
        printf("%d ",n);
        struct node*temp=graph->adjlist[n];
        while(temp!=NULL){
            int t=temp->data;
            if(graph->visited[t]==0){
                graph->visited[t]=1;
                enqueue(q,t);
            }
            temp=temp->next;
        }
    }

}
int main(){
    struct graph *graph=creategraph(5);
    addEdge(graph,0,1);
    addEdge(graph,1,2);
    addEdge(graph,2,3);
    addEdge(graph,3,4);
    addEdge(graph,0,3);
    bfs(graph,0);
    return 0;
}