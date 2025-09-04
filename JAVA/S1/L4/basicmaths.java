import java.util.Scanner;
class maths
{
    int countdigit(int n)
    {
        int count=0;
        while(n>0)
        {
            count++;
            n=n/10;
        }
        return count;
    }

    
}
public class basicmaths{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        maths c1=new maths();
        System.out.println(c1.countdigit(n));
    }
}