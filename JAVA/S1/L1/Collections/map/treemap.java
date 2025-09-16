
import java.util.*;

public class treemap{
    public static void main(String[] args) {
        {
            Map <Integer,String> students=new TreeMap<>();
            students.put(1,"alex");
            students.put(2,"alice");
            for(Map.Entry<Integer,String>e:students.entrySet())
            {
                System.out.println(e.getKey()+" ");
            }
        }
    }
}