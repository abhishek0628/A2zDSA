import java.util.*;
public class myarraylist{
    public static void main(String[] args) {
        {
            List<Integer>numbers=new ArrayList<>();
            numbers.add(12);
            numbers.add(27);
            numbers.add(26);
            numbers.add(100);
            numbers.add(2,781);//zero based indexing
            numbers.add(0,873);
            numbers.add(0,35);
            numbers.set(1,120); 
            numbers.add(100); 
            for(int i:numbers)
            {
                System.out.print(i+" ");
            }
            System.out.println();
            Collections.reverse(numbers);
            for(int i:numbers)
            {
                System.out.print(i+" ");
            }
            System.out.println();
            Collections.sort(numbers);
            for(int i:numbers)
            {
                System.out.print(i+" ");
            }
            System.out.println();
            // numbers.set(1, 120);
            numbers.remove(0);
            for(int i:numbers)
            {
                System.out.print(i+" ");
            }
            System.out.print("\n"+numbers.get(2));
            System.out.print("\n"+numbers.size());
            System.out.print("\n"+numbers.contains(2));
            System.out.print("\n"+numbers.indexOf(120));
            System.out.print("\n"+numbers.lastIndexOf(100));
        }
    }

}