class TreeNode:
    def __init__(self,model_num,model_name,price):
        self.model_num=model_num
        self.model_name=model_name
        self.price=price
        self.left=None
        self.right=None
class BST:
    def Add(self,root,model_num,model_name,price):
        if root is None:
            return TreeNode(model_num,model_name,price)
        if root.model_num>model_num:
            root.left=self.Add(root.left,model_num,model_name,price)
        elif root.model_num<model_num:
            root.right=self.Add(root.right,model_num,model_name,price)
        return root
    def Search(self,root,model_num):
        if root is None:
            return root
        if root.model_num==model_num:
            return root
        if root.model_num>model_num:
            return self.Search(root.left,model_num)
        elif root.model_num<model_num:
            return self.Search(root.right,model_num)
    def minvalue(self,root):
        curr=root
        while curr and curr.left is not None:
            curr=curr.left
        return curr
        
    def delete(self,root,model_num):
        if root is None:
            return root
        if root.model_num>model_num:
            root.left=self.delete(root.left,model_num)
        elif root.model_num<model_num:
            root.right=self.delete(root.right,model_num)
        else:
            if root.left is None:
                temp=root.right
                return temp
            elif root.right is None:
                temp=root.left
                return temp
            else:
                temp=self.minvalue(root.right)
                root.model_num=temp.model_num
                root.model_name=temp.model_name
                root.price=temp.price
                root.right=self.delete(root.right,temp.model_num)
        return root
        
        
    def inorder(self,root):
        if root is None:
            return
        self.inorder(root.left)
        print(root.model_num," ",root.model_name," ",root.price)
        self.inorder(root.right)
    
    def postorder(self,root):
        if root is None:
            return
        self.postorder(root.left)
        self.postorder(root.right)
        print(root.model_num," ",root.model_name," ",root.price)

    
    def preorder(self,root):
        if root is None:
            return
        # self.preorder(root.left)
        print(root.model_num," ",root.model_name," ",root.price)
        self.preorder(root.left)
        self.preorder(root.right)

     

if __name__ == "__main__":
    root = None
    B = BST()

    while True:
        parts = input().strip().split()

        if not parts:
            continue

        cmd = parts[0]

        if cmd == 'a':
            model_num = int(parts[1])
            model_name = parts[2]
            price = int(parts[3])
            root = B.Add(root, model_num, model_name, price)

        elif cmd == 'd':
            model_num = int(parts[1])
            root = B.delete(root, model_num)

        elif cmd == 's':
            model_num = int(parts[1])
            temp = B.Search(root, model_num)
            if temp is not None:
                print(temp.model_num, temp.model_name, temp.price)
            else:
                print("-1")

        elif cmd == 'i':
            B.inorder(root)

        elif cmd == 'p':
            B.preorder(root)

        elif cmd == 't':
            B.postorder(root)

        elif cmd == 'e':
            break 
