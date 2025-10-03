import java.util.*;
class Node{
    int data;
    Node left;
    Node right;
    Node(int data)
    {
        this.data=data;
        left=null;
        right=null;
    }
}
class Tree{
    Node insert(Node root,int data)
    {
        if(root==null){
            root=new Node(data);
            return root;
        }
        if(root.data>data)
        {
            root.left=insert(root.left,data);
        }
        else if(root.data<data)
        {
            root.right=insert(root.right,data);
        }
        return root;
    }
    void inorder(Node root)
    {
        if(root==null)return;
        inorder(root.left);
        System.out.print(root.data+" ");
        inorder(root.right);
    }
    
    public List<String>Path(Node root)
    {
        List<String>result=new ArrayList<>();
        if(root==null)return result;
        dfs(root,"",result);
        return result;
    }
     private void dfs(Node root,String path,List<String>result)
        {
            if(root==null)return;
            if(path.isEmpty())
            {
                path=""+root.data;
            }
            else path=path+"->"+root.data;

            if(root.left==null && root.right==null)
            {
                result.add(path);
            }
            else {
            dfs(root.left,path,result);
            dfs(root.right,path,result);
            }

            

        }
   
}
public class path{
    public static void main(String[] args) {
        {
            Node root=null;
            Tree t=new Tree();
            root=t.insert(root,70);
            root=t.insert(root,76);
            root=t.insert(root,7);
            root=t.insert(root,736);
            root=t.insert(root,71);
            root=t.insert(root,36);
            root=t.insert(root,16);
            root=t.insert(root,706);
            t.inorder(root);
            System.out.println();
            List<String>path= t.Path(root);
            for(String s:path)
            {
                System.out.println(s);
            }

        }
       
    }
}
// import java.util.*;

// class Node {
//     int data;
//     Node left;
//     Node right;
//     Node(int data) {
//         this.data = data;
//         left = null;
//         right = null;
//     }
// }

// class Tree {
//     Node insert(Node root, int data) {
//         if (root == null) {
//             return new Node(data);
//         }
//         if (root.data > data) {
//             root.left = insert(root.left, data);
//         } else if (root.data < data) {
//             root.right = insert(root.right, data);
//         }
//         return root;
//     }

//     void inorder(Node root) {
//         if (root == null) return;
//         inorder(root.left);
//         System.out.print(root.data + " ");
//         inorder(root.right);
//     }

//     public List<String> Path(Node root) {
//         List<String> result = new ArrayList<>();
//         if (root == null) return result;
//         dfs(root, "", result);
//         return result;
//     }

//     private void dfs(Node root, String path, List<String> result) {
//         if (root == null) return;

//         if (path.isEmpty()) {
//             path = "" + root.data;
//         } else {
//             path = path + "->" + root.data;  // fix: append instead of replace
//         }

//         if (root.left == null && root.right == null) {
//             result.add(path);
//         } else {
//             dfs(root.left, path, result);
//             dfs(root.right, path, result); // fix: go right, not back into root
//         }
//     }
// }

// public class path {
//     public static void main(String[] args) {
//         Node root = null;
//         Tree t = new Tree();

//         root = t.insert(root, 70);
//         root = t.insert(root, 76);
//         root = t.insert(root, 7);
//         root = t.insert(root, 736);
//         root = t.insert(root, 71);
//         root = t.insert(root, 36);
//         root = t.insert(root, 16);
//         root = t.insert(root, 706);

//         System.out.print("Inorder: ");
//         t.inorder(root);
//         System.out.println();

//         List<String> paths = t.Path(root);
//         System.out.println("Root-to-leaf paths:");
//         for (String s : paths) {
//             System.out.println(s);
//         }
//     }
// }
