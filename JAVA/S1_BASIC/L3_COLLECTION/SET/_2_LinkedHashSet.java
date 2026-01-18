import java.util.Iterator;
import java.util.LinkedHashSet;

public class _2_LinkedHashSet {

    public static void main(String[] args) {

        // Create LinkedHashSet
        LinkedHashSet<Integer> set = new LinkedHashSet<>();

        // Add elements
        set.add(10);
        set.add(20);
        set.add(30);
        set.add(40);
        set.add(20); // duplicate, ignored

        System.out.println("After adding elements:");
        System.out.println(set);

        // Remove element
        set.remove(30);
        System.out.println("\nAfter removing 30:");
        System.out.println(set);

        // Contains
        System.out.println("\nContains 20? " + set.contains(20));
        System.out.println("Contains 50? " + set.contains(50));

        // Size
        System.out.println("\nSize of set: " + set.size());

        // Iteration using for-each
        System.out.println("\nIterating using for-each:");
        for (int x : set) {
            System.out.println(x);
        }

        // Iteration using Iterator
        System.out.println("\nIterating using Iterator:");
        Iterator<Integer> it = set.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }

        // Convert to array
        Object[] arr = set.toArray();
        System.out.println("\nConverted to array:");
        for (Object o : arr) {
            System.out.println(o);
        }

        // Check empty
        System.out.println("\nIs set empty? " + set.isEmpty());

        // Clear set
        set.clear();
        System.out.println("\nAfter clear:");
        System.out.println(set);
        System.out.println("Is set empty now? " + set.isEmpty());
    }
}
