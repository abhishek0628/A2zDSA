import java.util.*;
public class treeset
{
    public static void main(String[] args)
    {
        Set<Integer>numbers=new TreeSet<>();
        numbers.add(27);
        numbers.add(207);
        numbers.add(270);
        numbers.add(277);
        numbers.add(227);
        for(int i:numbers)
        {
            System.out.print(i+" ");
        }
    }
}