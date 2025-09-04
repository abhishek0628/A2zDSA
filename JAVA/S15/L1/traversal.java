// // class graphlist{
// //     private int vertices;
// //     private LinkedList<Integer>[] adj;
// //     int [] visited;
// //     graphlist(int vertices)
// //     {
// //         this.vertices=vertices;
// //         adj=new LinkedList[vertices];
// //         for(int i=0;i<vertices;i++)
// //         {
// //             adj[i]=new LinkedList<>();
// //         }
// //     }
// //     void addedge(int src,int dst)
// //     {
// //         adj[src].add(dst);
// //         adj[dst].add(src);
// //     }
// //     void dfs(int src)
// //     {
// //         adj[src];
// //     }
// // }
// // class graph
// // {
// //     void addedge(int src,int dst)
// //     {
        
// //     }
    
// // }
class Node{
    int data;
    Node next;
    Node(int data)
    {
        this.data=data;
        this.next=null;
    }

}
class graphlist
{
    int size;
    Node []adjlist;
    int []visited;
    graphlist(int size)
    {
        this.size=size;
        adjlist=new Node[size];
        visited=new int[size];
        for(int i=0;i<size;i++)
        {
            adjlist[i]=null;
            visited[i]=0;
        }
        
    }
}
class graph
{
    
    void addEdge(graphlist g,int src,int dst)
    {
        Node newnode=new Node(dst);
        newnode.next=g.adjlist[src];
        g.adjlist[src]= newnode;

        newnode=new Node(src);
        newnode.next=g.adjlist[dst];
        g.adjlist[dst]= newnode;
    }
    void dfs(graphlist g,int src)
    {
        
        g.visited[src]=1;
        System.out.print(src+" ");
        Node temp=g.adjlist[src];
        while(temp!=null)
        {
            int n=temp.data;
            if(g.visited[n]==0)
            {
                dfs(g,n);
            }
            temp=temp.next;
        }

    }
}
public class traversal
{
    public static void main(String[] args) {
        {
            int size=5;
             graphlist g=new graphlist(size);
            graph graph=new graph();
            // graphlist g=new graphlist(size);

        graph.addEdge(g, 0, 1);
        graph.addEdge(g, 0, 2);
        graph.addEdge(g, 1, 3);
        graph.addEdge(g, 1, 4);

            graph.dfs(g,0);

        }
    }
}
// class Node {
//     int data;
//     Node next;

//     Node(int data) {
//         this.data = data;
//         this.next = null;
//     }
// }

// class GraphList {
//     int size;
//     Node[] adjlist;
//     int[] visited;

//     GraphList(int size) {
//         this.size = size;
//         adjlist = new Node[size];
//         visited = new int[size];
//         for (int i = 0; i < size; i++) {
//             adjlist[i] = null;
//             visited[i] = 0;
//         }
//     }
// }

// class Graph {
//     void addEdge(GraphList g, int src, int dst) {
//         // Add edge src -> dst
//         Node newNode = new Node(dst);
//         newNode.next = g.adjlist[src];
//         g.adjlist[src] = newNode;

//         // For undirected graph: add edge dst -> src
//         newNode = new Node(src);
//         newNode.next = g.adjlist[dst];
//         g.adjlist[dst] = newNode;
//     }

//     void dfs(GraphList g, int src) {
//         g.visited[src] = 1;
//         System.out.print(src + " ");
//         Node temp = g.adjlist[src];
//         while (temp != null) {
//             int n = temp.data;
//             if (g.visited[n] == 0) {
//                 dfs(g, n);
//             }
//             temp = temp.next;
//         }
//     }
// }

// public class traversal {
//     public static void main(String[] args) {
//         int size = 5;
//         GraphList g = new GraphList(size);
//         Graph graph = new Graph();

//         // Add edges
//         graph.addEdge(g, 0, 1);
//         graph.addEdge(g, 0, 2);
//         graph.addEdge(g, 1, 3);
//         graph.addEdge(g, 1, 4);

//         // Perform DFS starting from node 0
//         System.out.println("DFS Traversal:");
//         graph.dfs(g, 0);
//     }
// }
