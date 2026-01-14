#include<stdio.h>
#include<stdlib.h>
#define inf 99999
#define nodes 5
struct node
{
    int vertex;
    int weight;
    struct node *next;
};
struct node *createnode(int v,int w)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->vertex=v;
    newnode->weight=w;
    newnode->next=NULL;
    return newnode;
}
struct graph 
{
    struct node *adjlist[nodes];
    int *visited;
    int *distance;
};
struct graph *creategraph()
{
    struct graph *graph=(struct graph*)malloc(sizeof(struct graph));
    graph->visited=(int *)malloc(sizeof(int)*10);
    graph->distance=(int *)malloc(sizeof(int)*10);
    for(int i=0;i<nodes;i++)
    {
        graph->adjlist[i]=NULL;
        graph->visited[i]=0;
        graph->distance[i]=inf;
    }
    return graph;
}
int min(struct graph *graph)
{
    int min=inf,min_index=-1;
    for(int i=0;i<nodes;i++)
    {
        if(graph->visited==0 &&graph->distance[i]<min)
        {
            min=graph->distance[i];
            min_index=i;
        }
        
    }
    return min_index;
}
void addedge(struct graph *graph, int src, int dst, int weight) {
    struct node *newnode = createnode(dst, weight);
    newnode->next = graph->adjlist[src];
    graph->adjlist[src] = newnode;

    // undirected graph → add reverse edge
    newnode = createnode(src, weight);
    newnode->next = graph->adjlist[dst];
    graph->adjlist[dst] = newnode;
}

void dijkstra(struct graph *graph,int src)
{
    graph->distance[src]=0;
    // int u=min(graph);
    for(int i=0;i<nodes-1;i++)
    {
        int u=min(graph);
        if(u==-1)break;
        graph->visited[u]=1;
        struct node *temp=graph->adjlist[u];
        while(temp!=NULL)
        {
            int v=temp->vertex;
            int w=temp->weight;
            if(!graph->visited[v] &&graph->distance[v]>graph->distance[u]+w)
            {
                graph->distance[v]=graph->distance[u]+w;
            }
            temp=temp->next;
        }
    }
    printf("Vertex\tDistance from Source %d\n", src);
    for (int i = 0; i < nodes; i++) {
        printf("%d\t%d\n", i, graph->distance[i]);
    }
}
int main() {
    struct graph *g = creategraph();
    addedge(g,0,1,10);
    addedge(g,0,4,5);
    addedge(g,1,2,1);
    addedge(g,1,4,2);
    addedge(g,2,3,4);
    addedge(g,3,0,7);
    addedge(g,3,2,6);
    addedge(g,4,1,3);
    addedge(g,4,2,9);
    addedge(g,4,3,2);

    dijkstra(g,1);
    return 0;
}

