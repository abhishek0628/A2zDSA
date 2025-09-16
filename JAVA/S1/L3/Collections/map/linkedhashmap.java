import java.util.*;
public class linkedhashmap
{
    public  static void main(String[] args)
    {
        Map<Integer,String> students=new LinkedHashMap<>();
        students.put(1,"alice");
        students.put(1,"alex");
        students.put(2,"bob");
        students.put(3,"alice");
        students.put(4,"abhi");
        for(Map.Entry<Integer,String>e:students.entrySet())
        {
            System.out.println(e.getKey()+" "+e.getValue());
        }

    }
}