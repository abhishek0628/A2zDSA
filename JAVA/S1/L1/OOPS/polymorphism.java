class calculator{
    int add(int a,int b)
    {
        return a+b;
    }
    double add(int a,int b,double c)//method overloading at compile time
    {
        return a+b+c;
    }
}
class cc extends calculator{
    @Override
    int add(int a,int b)
    {
        // return a+b;
        System.out.println(a+b);
        return 4;
    }
}
public class polymorphism
{
    public static void main(String[] args) {
        {
            calculator c=new calculator();
            cc c1=new cc();
            System.out.println(c.add(37,282));
            System.out.println(c.add(37,282,90.292));
            // System.out.println(c1.add(76,282));
            c1.add(78,87);
        }
    }
}