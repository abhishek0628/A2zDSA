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

    def dfs(self,src):
        self.visited[src]=1
        temp=self.adjlist[src]
        while temp is not None:
            n=temp.data
            if self.visited[n]:
                self.dfs(n)
            temp=temp.next

