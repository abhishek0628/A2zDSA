// #include<stdio.h>
// #include<stdlib.h>
// #define n 5
// #define inf 9999

// // int distance[n][n];
// void print(int dist[n][n])
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(dist[i][j]==inf)printf("inf ");
//             else printf("%d ",dist[i][j]);
//         }
//         printf("\n");
//     }
// }
// void floyedwarshell(int graph[n][n])
// {
//     int distance[n][n];
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             distance[i][j]=graph[i][j];
//         }
//     }

// for(int k=0;k<n;k++)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             if(distance[i][k]+distance[k][j]<distance[i][j])
//             {
//                 distance[i][j]=distance[i][k]+distance[k][j];
//             }
//         }
//     }
// }
// print(distance);
// }
// // void print(int dist[n][n])
// // {
// //     for(int i=0;i<n;i++)
// //     {
// //         for(int j=0;j<n;j++)
// //         {
// //             if(dist[i][j]==inf)printf("inf ");
// //             else printf("%d ",dist[i][j]);
// //         }
// //         printf("\n");
// //     }
// // }
// int main()
// {
//     int graph[n][n]={
//          {0,   5,  inf, 10,8},
//         {inf, 0,  2, 3, inf},
//         {9, inf, 0,  9, 1},
//         {inf, 2, inf, 10},
//         {2,4,7,inf,8}
//     };
//     floyedwarshell(graph);
//     return 0;
// }
#include <stdio.h>
#define INF 99999  // A large number representing infinity
#define V 4        // Number of vertices in the graph

// Function to print the solution matrix
void printSolution(int dist[V][V]) {
    printf("Shortest distance matrix:\n");
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                printf("%7s", "INF");
            else
                printf("%7d", dist[i][j]);
        }
        printf("\n");
    }
}

// Floyd–Warshall algorithm
void floydWarshall(int graph[V][V]) {
    int dist[V][V];  

    // Step 1: Initialize distance = input graph
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            dist[i][j] = graph[i][j];

    // Step 2: Add all vertices one by one as intermediate
    for (int k = 0; k < V; k++) {
        // Pick all vertices as source
        for (int i = 0; i < V; i++) {
            // Pick all vertices as destination
            for (int j = 0; j < V; j++) {
                // If vertex k is on the shortest path from i to j
                if (dist[i][k] + dist[k][j] < dist[i][j])
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    // Step 3: Print the shortest path distance matrix
    printSolution(dist);
}

int main() {
    // Example graph (4 vertices)
    int graph[V][V] = {
        {0,   5,  INF, 10},
        {INF, 0,   3, INF},
        {INF, INF, 0,   1},
        {INF, INF, INF, 0}
    };

    floydWarshall(graph);
    return 0;
}
