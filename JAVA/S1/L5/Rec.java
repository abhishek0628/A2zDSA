import java.util.Scanner;
class recursion
{
    void print(int n)
    {
        if(n==0)return;
        print(n-1);
        System.out.print(n+" ");
    }
}
public class Rec{
    public static void main(String[] args) {
        {
            Scanner sc=new Scanner(System.in);
            int n=sc.nextInt();
            recursion r1=new recursion();
            r1.print(n);
            sc.close();

        }
    }
}