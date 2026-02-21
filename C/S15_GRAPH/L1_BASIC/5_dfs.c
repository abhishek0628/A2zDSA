
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *createnode(int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
struct graph{
    int numsize;
    int *visited;
    struct node **adjlist;
};
struct graph *creategraph(int numsize){
    struct graph *graph=(struct graph*)malloc(sizeof(struct graph));
    graph->numsize=numsize;
    graph->visited=(int*)malloc(sizeof(int)*numsize);
    for(int i=0;i<numsize;i++){
        graph->visited[i]=0;
    }
    graph->adjlist=(struct node**)malloc(sizeof(struct node*)*numsize);
    for(int i=0;i<numsize;i++){
        graph->adjlist[i]=NULL;
    }
    return graph;
}
void addedge(struct graph *graph,int dst,int src){
    struct node *newnode=createnode(dst);
    newnode->next=graph->adjlist[src];
    graph->adjlist[src]=newnode;
    newnode=createnode(src);
    newnode->next=graph->adjlist[dst];
    graph->adjlist[dst]=newnode;
    
}
void dfs(struct graph*graph,int src){
    graph->visited[src]=1;
    printf("%d ",src);
    struct node *temp=graph->adjlist[src];
    while(temp!=NULL){
        int n=temp->data;
        if(graph->visited[n]==0){
            dfs(graph,n);
        }
        
        temp=temp->next;
    }
}
int main(){
    struct graph *graph=creategraph(5);
    addedge(graph,0,1);
    addedge(graph,1,2);
    addedge(graph,2,3);
    addedge(graph,3,4);
    addedge(graph,0,3);
    dfs(graph,0);
    return 0;
}