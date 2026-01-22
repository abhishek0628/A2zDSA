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
    Node search(Node root,int key){
        if(root==null)return null;
        if(root.data==key){
            return root;
        }
        if(root.data>key){
            return search(root.left,key);
        }
        return search(root.right,key);
    }
    void postorder(Node root){
        if(root==null)return;
        postorder(root.left);
        postorder(root.right);
        System.out.print(root.data+" ");
    }
}
public class _2_search{
    public static void main(String[] args){
        BST b=new BST();
        b.root=b.insertbst(b.root,67);
        b.root=b.insertbst(b.root,69);
        b.root=b.insertbst(b.root,62);
        b.root=b.insertbst(b.root,61);
        Node t=b.search(b.root,67);
        System.out.println(t.data);
        b.postorder(b.root);
    }
}