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
    def insertlast(self,data):
        newnode=Node(data)
        temp=self.head
        while temp.next is not None:
            temp=temp.next
        temp.next=newnode
    def deletebeg(self):
        self.head=self.head.next
    def deletelast(self):
        temp=self.head
        while(temp.next.next is not None):
            temp=temp.next
        temp.next=None
    def display(self):
        temp=self.head
        while temp is not None:
            print(temp.data,end=" ")
            temp=temp.next
if __name__=="__main__":
    l=List()
    l.insertbeg(34)
    l.insertbeg(23)
    l.insertlast(78)
    l.insertlast(74)
    l.insertbeg(374)
    l.deletebeg()
    l.deletelast()
    l.display()


        