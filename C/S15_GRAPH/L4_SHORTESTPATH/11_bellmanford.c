// #include<stdio.h>
// #define nodes 5
// #define inf 9999
// struct edge
// {
//     int v;
//     int w;
//     int u;
// };
// void bellmanford(struct edge Edge[],int E,int V,int src)
// {
//     int dist[V];
//     for(int i=0;i<V;i++)
//     {
//         dist[i]=inf;

//     }
//     for(int i=0;i<V;i++)
//     {
//         for(int j=0;j<E;j++)
//         {
//             int v=Edge[j].v;
//             int w=Edge[j].w;
//             int u=Edge[j].u;
//             if(dist[u]+w>dist[v])
//             {
//                 dist[v]=dist[u]+w;
//             }
//         }
//     }
//     for(int j=0;j<E;j++)
//     {
//         int v=Edge[j].v;
//         int w=Edge[j].w;
//         int u=Edge[j].u;
//         if(dist[u]+w>dist[v])
//         {
//             dist[v]=dist[u]+w;
//         }
//     }
//     for(int i=0;i<V;i++)
//     {
//         if(dist[i]==inf)
//         {
//             printf("inf ");
//         }
//         else{
//             printf("%d ",dist[i]);
//         }
//     }
// }
// int main()
// {
//     int V=5;
//     int E=8;
//     struct edge edges[] = {
//         {0, 1, -1}, {0, 2, 4},
//         {1, 2, 3},  {1, 3, 2},
//         {1, 4, 2},  {3, 2, 5},
//         {3, 1, 1},  {4, 3, -3}
//     };
//     bellmanford(edges,E,V,0);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

#define INF 99999

// A structure to represent an edge
struct Edge {
    int u, v, w;
};

void BellmanFord(struct Edge edges[], int V, int E, int src) {
    int dist[V];

    // Step 1: Initialize distances
    for (int i = 0; i < V; i++)
        dist[i] = INF;
    dist[src] = 0;

    // Step 2: Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if (dist[u] != INF && dist[u] + w < dist[v])
                dist[v] = dist[u] + w;
        }
    }

    // Step 3: Check for negative weight cycles
    for (int j = 0; j < E; j++) {
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].w;

        if (dist[u] != INF && dist[u] + w < dist[v]) {
            printf("Graph contains a negative weight cycle!\n");
            return;
        }
    }

    // Print the shortest distances
    printf("Vertex   Distance from Source %d\n", src);
    for (int i = 0; i < V; i++) {
        if (dist[i] == INF)
            printf("%d \t\t INF\n", i);
        else
            printf("%d \t\t %d\n", i, dist[i]);
    }
}

int main() {
    int V = 5;  // Number of vertices
    int E = 8;  // Number of edges

    // Example graph (directed, weighted)
    struct Edge edges[] = {
        {0, 1, -1}, {0, 2, 4},
        {1, 2, 3},  {1, 3, 2},
        {1, 4, 2},  {3, 2, 5},
        {3, 1, 1},  {4, 3, -3}
    };

    BellmanFord(edges, V, E, 0);
    return 0;
}
