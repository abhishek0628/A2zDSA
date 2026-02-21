class Node:
    def __init__(self,data):
        self.data=data
        self.next=None
class queue:
    def __init__(self, num):
        self.rear = 0
        self.front = 0
        self.arr = [0 for _ in range(num)]

    def isEmpty(self):
        return self.front == self.rear

    def enqueue(self, data):
        self.arr[self.rear] = data
        self.rear += 1

    def dequeue(self):
        if self.isEmpty():
            return -1
        p = self.arr[self.front]
        self.front += 1
        return p


class graph:
    def __init__(self, num):
        self.num = num
        self.adjlist = [None] * num
        self.visited = [0 for _ in range(num)]

    def addEdge(self, src, dst):
        newnode = Node(dst)
        newnode.next = self.adjlist[src]
        self.adjlist[src] = newnode

        newnode = Node(src)
        newnode.next = self.adjlist[dst]
        self.adjlist[dst] = newnode

    def bfs(self, src):
        q = queue(self.num)

        self.visited[src] = 1
        q.enqueue(src)

        while not q.isEmpty():
            t = q.dequeue()
            print(t, end=" ")

            temp = self.adjlist[t]
            while temp is not None:
                n = temp.data
                if not self.visited[n]:
                    self.visited[n] = 1
                    q.enqueue(n)
                temp = temp.next

if __name__=="__main__":
    g=graph(5)
    g.addEdge(0,1)
    g.addEdge(1,2)
    g.addEdge(2,3)
    g.addEdge(3,4)
    g.bfs(0)
