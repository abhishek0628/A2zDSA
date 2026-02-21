class graph:
    def __init__(self,V):
        self.matrix=[[0 for _ in range(V)] for _ in range(V)]
        self.V=V
    def addEdge(self,src,dst):
        self.matrix[src][dst]=1
        self.matrix[dst][src]=1
    def display(self):
        for i in range(self.V):
            for j in range(self.V):
                print(self.matrix[i][j],end=" ")
            print(end="\n")
    
if __name__=="__main__":
    g=graph(5)
    g.addEdge(0,1)
    g.addEdge(1,2)
    g.addEdge(2,3)
    g.addEdge(3,4)
    g.display()


            