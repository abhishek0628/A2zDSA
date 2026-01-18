import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;

public class _1_ArrayList {

    public static void main(String[] args) {

        // 1. Create ArrayList
        ArrayList<Integer> list = new ArrayList<>();

        // 2. Add elements
        list.add(10);
        list.add(20);
        list.add(30);
        list.add(20); // duplicate allowed
        System.out.println("After adding elements: " + list);

        // 3. Add element at specific index
        list.add(1, 15);
        System.out.println("After adding at index 1: " + list);

        // 4. Access element
        System.out.println("Element at index 2: " + list.get(2));

        // 5. Update element
        list.set(2, 25);
        System.out.println("After updating index 2: " + list);

        // 6. Remove by index
        list.remove(3);
        System.out.println("After removing index 3: " + list);

        // 7. Remove by value
        list.remove(Integer.valueOf(20));
        System.out.println("After removing value 20: " + list);

        // 8. Size of ArrayList
        System.out.println("Size of list: " + list.size());

        // 9. Check if element exists
        System.out.println("Contains 10? " + list.contains(10));

        // 10. Index operations
        System.out.println("Index of 10: " + list.indexOf(10));
        System.out.println("Last index of 10: " + list.lastIndexOf(10));

        // 11. Iterate using for loop
        System.out.print("Using for loop: ");
        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i) + " ");
        }
        System.out.println();

        // 12. Enhanced for loop
        System.out.print("Using for-each loop: ");
        for (int x : list) {
            System.out.print(x + " ");
        }
        System.out.println();

        // 13. Iterator
        System.out.print("Using Iterator: ");
        Iterator<Integer> it = list.iterator();
        while (it.hasNext()) {
            System.out.print(it.next() + " ");
        }
        System.out.println();

        // 14. Sort ArrayList
        Collections.sort(list);
        System.out.println("After sorting: " + list);

        // 15. Reverse ArrayList
        Collections.reverse(list);
        System.out.println("After reversing: " + list);

        // 16. Clear ArrayList
        list.clear();
        System.out.println("After clearing list: " + list);

        // 17. Check if empty
        System.out.println("Is list empty? " + list.isEmpty());
    }
}
