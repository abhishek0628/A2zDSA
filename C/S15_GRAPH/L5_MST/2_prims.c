// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>
// #include<stdbool.h>
// #define V 5
// int minkey(int key[],bool mst[])
// {
//     int min=INT_MAX;
//     int min_index;
//     for(int i=0;i<V;i++)
//     {
//         if(!mst[i] &&key[i]<min)
//         {
//             min=key[i];
//             min_index=i;
//         }

//     }
//     return min_index;
// }
// void printmst(int parent[],int graph[V][V])
// {
//     for(int i=0;i<V;i++)
//     {
//         printf("%d\t%d\t%d",parent[i],i,graph[i][parent[i]]);
//     }
// }
// void prim(int graph[V][V])
// {
//     int parent[V];
//     bool mst[V];
//     int key[V];
//     for(int i=0;i<V;i++)
//     {
//         key[i]=INT_MAX;
//         mst[i]=false;

//     }
//     parent[0]=-1;
//     key[0]=0;
//     for(int count=0;count<V;count++)
//     {
//         int u=minkey(key,mst);
//         mst[u]=true;
//         for(int v=0;v<V;v++)
//         {
//             if(graph[u][v] && !mst[v] && graph[u][v]<key[v])
//             {
//                 parent[u]=v;
//                 graph[u][v]=key[v];
//             }
//         }

//     }
//     printmst(parent,graph);
// }
// int main() {
//     int graph[V][V] = {
//         {0, 2, 0, 6, 0},
//         {2, 0, 3, 8, 5},
//         {0, 3, 0, 0, 7},
//         {6, 8, 0, 0, 9},
//         {0, 5, 7, 9, 0}
//     };

//     prim(graph);

//     return 0;
// }
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define V 5

// Function to find vertex with minimum key value not in MST
int minKey(int key[], bool mstSet[]) {
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (!mstSet[v] && key[v] < min)
            min = key[v], min_index = v;

    return min_index;
}

// Function to print MST stored in parent[]
void printMST(int parent[], int graph[V][V]) {
    printf("Edge \tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d \t%d\n", parent[i], i, graph[i][parent[i]]);
}

// Function to construct MST using Prim's algorithm
void primMST(int graph[V][V]) {
    int parent[V]; // Array to store MST
    int key[V];    // Key values used to pick minimum weight edge
    bool mstSet[V]; // To track vertices in MST

    // Initialize all keys as INFINITE and mstSet[] as false
    for (int i = 0; i < V; i++)
        key[i] = INT_MAX, mstSet[i] = false;

    // Start from first vertex
    key[0] = 0;
    parent[0] = -1; // First node is root of MST

    // MST has V vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet); // Pick min key vertex
        mstSet[u] = true;

        // Update key and parent of adjacent vertices
        for (int v = 0; v < V; v++)
            if (graph[u][v] && !mstSet[v] && graph[u][v] < key[v])
                parent[v] = u, key[v] = graph[u][v];
    }

    printMST(parent, graph);
}

int main() {
    int graph[V][V] = {
        {0, 2, 0, 6, 0},
        {2, 0, 3, 8, 5},
        {0, 3, 0, 0, 7},
        {6, 8, 0, 0, 9},
        {0, 5, 7, 9, 0}
    };

    primMST(graph);

    return 0;
}

