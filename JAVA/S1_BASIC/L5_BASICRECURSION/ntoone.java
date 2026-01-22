class recursion{
    void nto1(int n){
        if(n==0)return;
        System.out.print(n+" ");
        nto1(n-1);

    }
    
}
public class ntoone{
    public static void main(String[] args){
        recursion r=new recursion();
        r.nto1(5);
    }
}