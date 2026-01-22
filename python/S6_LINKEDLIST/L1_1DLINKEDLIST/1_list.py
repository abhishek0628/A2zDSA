class Node:
    def __init__(self,data):
        self.next=None
        self.data=data
class List:
    def __init__(self):
        self.head=None
    def insertbeg(self,data):
        newnode=Node(data)
        newnode.next=self.head
        self.head=newnode
    def display(self):
        temp=self.head
        while temp is not None:
            print(temp.data,end=" ")
            temp=temp.next
if __name__=="__main__":
    l=List()
    l.insertbeg(34)
    l.insertbeg(23)
    l.display()


        