class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data=data;
        this.left=null;
        this.right=null;
    }
}
class Bst{
    Node insert(Node root,int data){
        Node newnode=new Node(data);
        if(root==null){
            return newnode;
        }
        if(root.data>data){
            root.left=insert(root.left,data);
        }
        if(root.data<data){
            root.right=insert(root.right,data);
        }
        return root;

    }
    public void inorder(Node root){
        if(root==null){
            return;
        }
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
   
    
}
public class _3_insertbst{
    public static void main(String[]args){
        Node root=null;
        Bst b=new Bst();
        root=b.insert(root,67);
        root=b.insert(root,6);
        root=b.insert(root,607);
        root=b.insert(root,60);
        root=b.insert(root,617);
        root=b.insert(root,63);
        
        b.inorder(root);
        
    }
}