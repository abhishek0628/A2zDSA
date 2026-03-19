class Node{
    int data;
    Node next;
    Node(int data){
        this.data=data;
        next=null;
    }
}
class graph{
    Node adjlist;
    int numsize;
    graph(numsize){
        this.numsize=numsize;
        for(int i=0;i<numsize;i++){
            adjlist[i]=null;
        }
    }
}
class graph2{

    public void addEdge(graph g,int src,int dst){
        Node newnode=new Node(dst);
        newnode.next=g.adjlist[src];
        g.adjlist[src]=newnode;
        newnode=new Node(src);
        newnode.next=g.adjlist[dst];
        g.adjlist[dst]=newnode;

    }
}
public class _1_graph{
    graph2 g=new graph2();
    graph g2=new graph(5);
    g.addEdge(g2,0,1);
    g.addEdge(g2,1,2);
    g.addEdge(g2,2,3);
    g.addEdge(g2,3,4);
}