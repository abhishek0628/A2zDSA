class Node{
    int data;
    Node left;
    Node right;
    Node(int data)
    {
        this.data=data;
        this.left=null;
        this.right=null;
    }
}
class tree{
    // Node root;
    Node insertbst(Node root,int data)
    {
        if(root==null)
        {
            root=new Node(data);
            return root;
        }
        if(root.data>data)
        {
            root.left=insertbst(root.left,data);
        }
        else if(root.data<data)
        {
            root.right=insertbst(root.right,data);
        }
        return root;
    }
    Node search(Node root,int data)
    {
        if(root==null)return null;
        if(root.data==data)return root;
        if(root.data>data)
        {
            return search(root.left,data);
        }
        return search(root.right,data);
    }
    Node maximum(Node root)
    {
        if(root==null)return null;
        while(root!=null && root.right!=null)
        {
            root=root.right;

        }
        return root;

    }
    Node minimum(Node root)
    {
        if(root==null)return null;
        while(root!=null && root.left!=null)root=root.left;
        return root;
    }
   
Node inorderPredecessor(Node root, int data) {
    if (root == null) return null;

    Node curr = root;
    Node pred = null;

    while (curr != null) {
        if (curr.data > data) {
            // Go left, but do not update predecessor
            curr = curr.left;
        } else if (curr.data < data) {
            // Potential predecessor
            pred = curr;
            curr = curr.right;
        } else {
            // Node found
            if (curr.left != null) {
                return maximum(curr.left);
            }
            break;
        }
    }
    return pred;
}

    Node inorderSuccesor(Node root,int data)
    {
        if(root==null)return null;
        if(data==maximum(root).data)
        {
            System.out.print("maxim element has not any inordersuccesor ");
            return null;
        }
        Node temp=search(root,data);
        if(temp==null)return null;
        if(temp.right!=null)return minimum(temp.right);
        Node s=null;
        while(root!=null)
        {
        if(temp.data>root.data)
        {
            s=root;
            root=root.right;
            // s=root;
        }
        else if(root.data>temp.data)
        {
            s=root;
            root=root.left;
            // s=root;
        }
        else break;
        }
        
        return s;
    }
    void inorder(Node root)
    {
        if(root==null)return;
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }

}
public class bst
{
    public static void main(String[]args)
    {
        Node root=null;
        tree t=new tree();
        root=t.insertbst(root,87);
        root=t.insertbst(root,97);
        root=t.insertbst(root,17);
        root=t.insertbst(root,817);
        root=t.insertbst(root,870);
        //Node s=t.search(root,17)
        t.inorder(root);
        System.out.println();
        Node m=t.maximum(root);
        Node s=t.inorderPredecessor(root,80);
        if(s==null)System.out.print("null value");
        else
        // t.inorder(root);
        System.out.print(s.data);
        System.out.println();
        t.inorder(root);
    }
}