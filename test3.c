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
    struct node **adjlist;
    int vertex;
};
struct graph *creategraph(int vertex){
    struct graph *graph=(struct graph*)malloc(sizeof(struct graph));
    graph->vertex=vertex;
    graph->adjlist=(struct node**)malloc(vertex*sizeof(struct node*));
    for(int i=0;i<vertex;i++){
        graph->adjlist[i]=NULL;
    }
    return graph;
}
void addedge(struct graph *graph,int src,int dst){
    struct node *newnode=createnode(dst);
    newnode->next=graph->adjlist[src];
    graph->adjlist[src]=newnode;
    newnode=createnode(src);
    newnode->next=graph->adjlist[dst];
    graph->adjlist[dst]=newnode;



}
void display(struct graph *graph){
    for(int i=0;i<graph->vertex;i++){
        struct node *temp=graph->adjlist[i];
        printf("%d->",i);
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main(){
    struct graph *graph=creategraph(5);
    addedge(graph,0,1);
    addedge(graph,1,2);
    addedge(graph,2,3);
    addedge(graph,3,4);
    addedge(graph,0,3);
    display(graph);
    return 0;

}