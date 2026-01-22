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
        
            
    def maximum(self,root):
        if root is None:
            return None
        temp=root
        while temp.right is not None:
            temp=temp.right
        return temp
    def minimum(self,root):
        if root is None:
            return None
        temp=root
        while temp.left is not None:
            temp=temp.left
        return temp
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
    min=b.minimum(b.root)
    max=b.maximum(b.root)
    print(min.data)
    print(max.data)
    b.postorder(b.root)
    