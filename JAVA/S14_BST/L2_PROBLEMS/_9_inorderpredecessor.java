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
    Node max(Node root){
        if(root==null)return null;
        Node curr=root;
        while(curr!=null && curr.right !=null){
            curr=curr.right;
        }
        return curr;
    }
    Node predecessor(Node root,int data){
        if(root==null)return null;
        Node curr=root;
        Node pre=null;
        while(curr!=null){
            if(curr.data<data){
                pre=curr;
                curr=curr.right;
            }
            else if(curr.data>data){
                curr=curr.left;
            }
            else{
                if(curr.left!=null){
                    return max(curr.left);
                }
                else break;
            }
            
        }
        return pre;
    }
   
    
}
public class _9_inorderpredecessor{
    public static void main(String[]args){
        Node root=null;
        Bst b=new Bst();
        root=b.insert(root,67);
        root=b.insert(root,6);
        root=b.insert(root,607);
        root=b.insert(root,60);
        root=b.insert(root,617);
        root=b.insert(root,63);
        Node s=b.predecessor(root,60);
        // b.inorder(root);
        System.out.print(s.data);
    }
}