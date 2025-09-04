import java.util.*;
class graphmatrix
{
    private int[][]matrix;
    private int vertices;
    graphmatrix(int vertices)
    {
        this.vertices=vertices;
        matrix=new int[vertices][vertices];
    }
    void addEdge(int src,int dst)
    {
        matrix[dst][src]=1;
        matrix[src][dst]=1;
    }
    void printgraph()
    {
        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++)
            {
                System.out.print(matrix[i][j]+" ");
            }
            System.out.println();
        }
    }
}
class graphlist
{
    private int vertices;
   private  LinkedList<Integer>[] adj;
    graphlist(int vertices)
    {
        this.vertices=vertices;
        adj=new LinkedList[vertices];
        for(int i=0;i<vertices;i++)
        {
            adj[i]=new LinkedList<>();
        }
    }
    void addEdge(int src,int dst)
    {
        adj[src].add(dst);
        adj[dst].add(src);
    }
    void printGraph()
    {
        for(int i=0;i<vertices;i++){
            System.out.print(i+" :");
            for(int node :adj[i])
            {
                System.out.print(node+" ");
            }
            System.out.println();

        }
    }
}
public class graph{
    public static void main(String[] args)
    {
        // graphmatrix g=new graphmatrix(5);
        // g.addEdge(0, 1);
        // g.addEdge(0, 4);
        // g.addEdge(1, 2);
        // g.addEdge(1, 3);
        // g.addEdge(1, 4);
        graphlist g = new graphlist(5);
        g.addEdge(0, 1);
        g.addEdge(0, 4);
        g.addEdge(1, 2);
        g.addEdge(1, 3);
        g.addEdge(1, 4);


        g.printGraph();



    }
}