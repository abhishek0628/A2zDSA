import java.util.Iterator;
import java.util.TreeSet;

public class _3_TreeSet{
    public static void main(String[] args) {

        // 1. Create TreeSet
        TreeSet<Integer> ts = new TreeSet<>();

        // 2. Add elements
        ts.add(40);
        ts.add(10);
        ts.add(30);
        ts.add(20);
        ts.add(20); // duplicate, ignored

        System.out.println("TreeSet: " + ts); // sorted automatically

        // 3. Remove element
        ts.remove(30);
        System.out.println("After removing 30: " + ts);

        // 4. Check element
        System.out.println("Contains 20? " + ts.contains(20));
        System.out.println("Contains 50? " + ts.contains(50));

        // 5. Size
        System.out.println("Size: " + ts.size());

        // 6. First and Last
        System.out.println("First element: " + ts.first());
        System.out.println("Last element: " + ts.last());

        // 7. Higher and Lower
        System.out.println("Higher than 20: " + ts.higher(20));
        System.out.println("Lower than 20: " + ts.lower(20));

        // 8. Ceiling and Floor
        System.out.println("Ceiling of 25: " + ts.ceiling(25));
        System.out.println("Floor of 25: " + ts.floor(25));

        // 9. Poll first and last (retrieve + remove)
        System.out.println("Poll first: " + ts.pollFirst());
        System.out.println("Poll last: " + ts.pollLast());
        System.out.println("After polling: " + ts);

        // Re-adding elements
        ts.add(10);
        ts.add(20);
        ts.add(40);

        // 10. Iteration using for-each
        System.out.print("For-each iteration: ");
        for (int x : ts) {
            System.out.print(x + " ");
        }
        System.out.println();

        // 11. Iterator
        System.out.print("Iterator: ");
        Iterator<Integer> it = ts.iterator();
        while (it.hasNext()) {
            System.out.print(it.next() + " ");
        }
        System.out.println();

        // 12. Descending order
        System.out.println("Descending set: " + ts.descendingSet());

        // 13. SubSet, HeadSet, TailSet
        System.out.println("SubSet (10 to 40): " + ts.subSet(10, 40));
        System.out.println("HeadSet (<20): " + ts.headSet(20));
        System.out.println("TailSet (>=20): " + ts.tailSet(20));

        // 14. Clear TreeSet
        ts.clear();
        System.out.println("After clear(): " + ts);

        // 15. Is empty
        System.out.println("Is TreeSet empty? " + ts.isEmpty());
    }
}
