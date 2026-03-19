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
    Node min(Node root){
        if(root==null)return null;
        Node curr=root;
        while(curr!=null && curr.left !=null){
            curr=curr.left;
        }
        return curr;
    }
    Node successor(Node root,int data){
        if(root==null)return null;
        Node curr=root;
        Node succ=null;
        while(curr!=null){
        if(curr.data>data){
            succ=curr;
            curr=curr.left;
            
        }
        else if(curr.data<data){
            curr=curr.right;
        }
        else{
            if(curr.right !=null){
                return min(curr.right);
            }
            else {
                break;
            }
        }
        }
        return succ;
    }
    
}
public class _14_inordersuccessor{
    public static void main(String[]args){
        Node root=null;
        Bst b=new Bst();
        root=b.insert(root,67);
        root=b.insert(root,6);
        root=b.insert(root,607);
        root=b.insert(root,60);
        root=b.insert(root,617);
        root=b.insert(root,63);
        Node s=b.successor(root,6);
        // b.inorder(root);
        System.out.print(s.data);
    }
}