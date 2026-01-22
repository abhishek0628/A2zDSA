class Node{
    int data;
    Node left;
    Node right;
    Node(int data){
        this.data=data;
        left=null;
        right=null;
    }
}
class BST{
    Node root;
    Node insertbst(Node root,int data){
        Node newnode=new Node(data);
        if(root==null){
            // Node newnode=new Node(data);
            root=newnode;
            return root;
        }
        if(root.data>data){
            root.left=insertbst(root.left,data);
        }
        else root.right=insertbst(root.right,data);
        return root;

    }
    void postorder(Node root){
        if(root==null)return;
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data+" ");
    }
}
public class _1_bst{
    public static void main(String[] args){
        BST b=new BST();
        b.root=b.insertbst(b.root,67);
        b.postorder(b.root);
    }
}