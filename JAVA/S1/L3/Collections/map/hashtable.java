import java.util.*;
public class hashtable
{
    public static void main(String []args)
    {
        Map<Integer,String>students=new Hashtable<>();
        students.put(1,"alex");
        students.put(2,"alex");
        students.put(3,"alex");
        for(Map.Entry<Integer,String>e:students.entrySet())
        {
            System.out.println(e.getKey());
        }
    }
}