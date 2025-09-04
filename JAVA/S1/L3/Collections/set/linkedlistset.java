import java.util.*;
public class linkedlistset
{
    public static void main(String[] args)
    {
        Set<Integer>numbers=new LinkedHashSet<>();
        numbers.add(78);
        numbers.add(289);
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