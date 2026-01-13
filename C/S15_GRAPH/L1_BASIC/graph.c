#include<stdio.h>
#include<stdlib.h>
#define nodes 5
int graph[nodes][nodes];
// void addedge()
// {
//     for(int i=0;i<nodes;i++)
//     {
//         for(int j=0;j<nodes;j++)
//         {
//             graph[i][j]=1
//         }
//     }
// }
void addedge(int graph[nodes][nodes],int i,int j)
{
    graph[i][j]=1;
    graph[j][i]=1;
}
int main()
{
    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            graph[i][j]=0;
            graph[j][i]=0;
        }
    }
    addedge(graph,0,1);
    for(int i=0;i<nodes;i++)
    {
        for(int j=0;j<nodes;j++)
        {
            printf("%d ",graph[i][j]);
        }
        printf("\n");
    }
    return 0;
}