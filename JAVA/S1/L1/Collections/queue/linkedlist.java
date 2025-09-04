import java.util.*;
public class linkedlist{
    public static void main(String[] args) {
        Queue<Integer> numbers=new LinkedList<>();
        numbers.add(47);
        numbers.add(23);
        for(int i:numbers)
        {
            System.out.print(i+" ");
        }
    }
}