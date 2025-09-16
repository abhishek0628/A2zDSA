abstract class shape
{
    abstract void draw();
}
class Circle extends shape
{
    @Override
    void draw()
    {
        System.out.println("draws circle");
    }
}
interface parent{
    void fun();
}
class child implements parent{
     @Override
    public void fun()
    {
        System.out.println("abstraction");
    }
}
public class abstraction{
    public static void main(String[]args)
    {
        shape s=new Circle();
        // parent p=new parent();
        parent p2=new child();
        s.draw();
        p2.fun();
    }
}