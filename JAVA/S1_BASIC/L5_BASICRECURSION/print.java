
class recursion{
    void print(int n){
        if(n==0)
        return;
        System.out.print("hello"+" ");
        print(n-1);
    }
}
public class print{
    public static void main(String[]args){
        recursion r=new recursion();
        r.print(5);

    }
}