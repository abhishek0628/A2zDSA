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
    Node minValue(Node root){
        Node temp=root;
        while(temp.left!=null){
            temp=temp.left;
        }
        return temp;
    }
    Node maxValue(Node root){
        Node temp=root;
        while(temp.right!=null){
            temp=temp.right;
        }
        return temp;
    }
    void postorder(Node root){
        if(root==null)return;
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data+" ");
    }
}
public class _3_minmax{
    public static void main(String[] args){
        BST b=new BST();
        b.root=b.insertbst(b.root,67);
        b.root=b.insertbst(b.root,69);
        b.root=b.insertbst(b.root,62);
        b.root=b.insertbst(b.root,601);
        Node min=b.minValue(b.root);
        Node max=b.maxValue(b.root);
        System.out.println(min.data);
        System.out.println(max.data);
        b.postorder(b.root);
    }
}