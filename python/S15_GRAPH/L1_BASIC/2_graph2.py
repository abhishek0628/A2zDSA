class Node:
    def __init__(self,data):
        self.data=data
        self.next=None


class graph:
    def __init__(self,num):
        self.num=num
        self.adjlist=[None]*num

    def addEdge(self,src,dst):
        newnode=Node(dst)
        newnode.next=self.adjlist[src]
        self.adjlist[src]=newnode
        newnode=Node(src)
        newnode.next=self.adjlist[dst]
        self.adjlist[dst]=newnode
    def display(self):
        for i in range(self.num):
            temp=self.adjlist[i]
            print(i,"->",end="")
            while temp is not None:
                print(temp.data,end=" ")
                temp=temp.next
            print(end="\n")
if __name__=="__main__":
    g=graph(5)
    g.addEdge(0,1)
    g.addEdge(1,2)
    g.addEdge(2,3)
    g.addEdge(3,4)
    g.addEdge(0,2)
    g.display()





