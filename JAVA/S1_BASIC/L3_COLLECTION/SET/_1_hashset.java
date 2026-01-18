import java.util.HashSet;
import java.util.Iterator;

public class _1_hashset {

    public static void main(String[] args) {

        // 1. Create HashSet
        HashSet<Integer> set = new HashSet<>();

        // 2. Add elements
        set.add(10);
        set.add(20);
        set.add(30);
        set.add(20);   // duplicate, ignored
        set.add(null); // allowed (only once)

        System.out.println("Initial HashSet: " + set);

        // 3. Size of HashSet
        System.out.println("Size: " + set.size());

        // 4. Check if element exists
        System.out.println("Contains 20? " + set.contains(20));
        System.out.println("Contains 50? " + set.contains(50));

        // 5. Remove element
        set.remove(30);
        System.out.println("After removing 30: " + set);

        // 6. Iterate using for-each
        System.out.println("Iterating using for-each:");
        for (Integer x : set) {
            System.out.println(x);
        }

        // 7. Iterate using Iterator
        System.out.println("Iterating using Iterator:");
        Iterator<Integer> it = set.iterator();
        while (it.hasNext()) {
            System.out.println(it.next());
        }

        // 8. Check if empty
        System.out.println("Is empty? " + set.isEmpty());

        // 9. Convert HashSet to Array
        Object[] arr = set.toArray();
        System.out.println("Converted to array:");
        for (Object obj : arr) {
            System.out.println(obj);
        }

        // 10. Clear HashSet
        set.clear();
        System.out.println("After clear(): " + set);

        // 11. Check again if empty
        System.out.println("Is empty now? " + set.isEmpty());
    }
}
