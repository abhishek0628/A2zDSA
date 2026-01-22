class recursion{
    void oneton(int n){
        if(n==0)return ;
        oneton(n-1);
        System.out.print(n+" ");
    }
}
public class oneton{
    public static void main(String[]args){
        recursion r=new recursion();
        r.oneton(5);
    }
}