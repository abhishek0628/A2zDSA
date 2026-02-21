class treeNode:
    def __init__(self,data):
        self.data=data
        self.left=None
        self.right=None
class Tree:
    def __init__(self):
            self.preindex=0
    def build(self,l,h,inorder,preorder):
        # def __init__(self):
        #     self.preindex=0
        if l>h:
            return None
        key=preorder[self.preindex]
        self.preindex+=1
        root=treeNode(key)
        if l==h:
            return root
        for i in range(l,h+1):
            if inorder[i]==key:
                break
        root.left=self.build(l,i-1,inorder,preorder)
        root.right=self.build(i+1,h,inorder,preorder)
        return root
    def printleaf(self,root):
        if root is None:
            return
        if root.left is None and root.right is None:
            print(root.data,end=" ")
        self.printleaf(root.left)
        self.printleaf(root.right)
    def postorder(self,root):
        if root is None:
            return
        self.postorder(root.left)
        self.postorder(root.right)
        print(root.data,end=" ")

if __name__=="__main__":
    T=Tree()
    inorder=[4,2,1,3,5]
    preorder=[1,2,4,3,5]
    # preindex=0
    root=T.build(0,len(inorder)-1,inorder,preorder)

    # T.postorder(root)
    T.printleaf(root)