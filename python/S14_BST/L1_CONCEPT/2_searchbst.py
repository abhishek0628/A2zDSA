class Node:
    def __init__(self,data):
        self.left=None
        self.right=None
        self.data=data
class bst:
    def __init__(self):
        self.root=None
    def insertbst(self,root,data):
        if root is None:
            return Node(data)
        if root.data>data:
            root.left=self.insertbst(root.left,data)
        elif root.data<data:
            root.right=self.insertbst(root.right,data)
        return root
        
            
    def search(self,root,key):
        if root is None:
            return None
        if root.data==key:
            return root
        if root.data>key:
            return self.search(root.left,key)
        elif root.data<key:
            return self.search(root.right,key)
        
    
    def postorder(self,root):
        if root is None:
            return
        self.postorder(root.left)
        self.postorder(root.right)
        print(root.data,end=" ")
if __name__=="__main__":
    b=bst()
    b.root=b.insertbst(b.root,34)
    b.root=b.insertbst(b.root,30)
    b.root=b.insertbst(b.root,35)
    b.root=b.insertbst(b.root,33)
    b.root=b.insertbst(b.root,32)
    temp=b.search(b.root,34)
    if temp is None:
        print("no")
    else:
        print("yes")
    b.postorder(b.root)
    