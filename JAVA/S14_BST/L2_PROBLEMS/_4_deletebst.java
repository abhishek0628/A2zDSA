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
    Node min(Node root){
        Node curr=root;
        while(curr!=null && curr.left!=null){
            curr=curr.left;
        }
        return curr;
    }
    Node successor(Node root,int data){
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
                if(curr.right!=null){
                    return min(curr.right);
                }
                else break;
            }
        }
        return succ;
    }
    Node deletebst(Node root,int data){
        if(root==null)return null;
        if(root.data>data){
            root.left=deletebst(root.left,data);
        }
        else if(root.data<data){
            root.right=deletebst(root.right,data);
        }
        else{
            if(root.left==null){
                Node temp=root.right;
                return temp;
            }
            else if(root.right==null){
                Node temp=root.left;
                return temp;
            }
            else{
                Node temp=min(root.right);
                root.data=temp.data;
                root.right=deletebst(root,temp.data);

            }
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
public class _4_deletebst{
    public static void main(String[]args){
        Node root=null;
        Bst b=new Bst();
        root=b.insert(root,67);
        root=b.insert(root,6);
        root=b.insert(root,607);
        root=b.insert(root,60);
        root=b.insert(root,617);
        root=b.insert(root,63);
        root=b.deletebst(root,6);
        
        b.inorder(root);
        
    }
}