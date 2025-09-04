import java.util.*;
public class hashmapp{
    public static void main(String[] args)
    {
        Map <Integer,String> students=new HashMap<>();
        students.put(1,"alex");
        students.put(2,"bob");
        students.put(3,"alice");
        students.put(4,"abhi");
        for(Map.Entry<Integer,String>e:students.entrySet())
        {
            System.out.println("roll no:"+e.getKey()+" , "+"name:"+e.getValue());

        }
    }
}