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
        
        
    def min(self,root):
        temp=root
        while temp.left is not None:
            temp=temp.left
        return temp
    def delete(self,root,key):
        if root is None:
            return None
        if root.data>key:
            root.left=self.delete(root.left,key)
        elif root.data<key:
            root.right=self.delete(root.right,key)
        else:
            if root.left is None:
                return root.right
            elif root.right is None:
                return root.left
            else:
                temp=self.min(root.right)
                root.data=temp.data
                root.right=self.delete(root.right,temp.data)
        return root
            

        
            


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
    b.root=b.delete(b.root,34)
    b.postorder(b.root)
    