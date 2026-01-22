
class recursion{
    int sum(int n){
        if(n==0)return 0;
        return n+sum(n-1);
    }
}
public class sumN{
    public static void main(String[]args){
        recursion r=new recursion();
        System.out.print(r.sum(5));
    }
}