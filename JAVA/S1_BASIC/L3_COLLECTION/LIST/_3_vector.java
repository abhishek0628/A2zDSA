import java.util.Vector;

public class _3_vector {
    public static void main(String[] args) {

        Vector<Integer> v = new Vector<>(5, 3);

        // Add elements
        v.add(10);
        v.add(20);
        v.add(30);
        v.add(40);
        v.add(20);

        System.out.println("Vector: " + v);

        // Add at index
        v.add(2, 15);
        System.out.println("After insert: " + v);

        // Access
        System.out.println("Element at index 0: " + v.get(0));

        // Update
        v.set(3, 25);
        System.out.println("After update: " + v);

        // Remove
        v.remove(1);
        System.out.println("After remove index 1: " + v);

        v.remove(Integer.valueOf(20));
        System.out.println("After remove value 20: " + v);

        // Size & capacity
        System.out.println("Size: " + v.size());
        System.out.println("Capacity: " + v.capacity());

        // Search
        System.out.println("Contains 30? " + v.contains(30));
        System.out.println("Index of 30: " + v.indexOf(30));

        // First & last element
        System.out.println("First element: " + v.firstElement());
        System.out.println("Last element: " + v.lastElement());

        // Iteration
        System.out.println("Iterating:");
        for (int num : v) {
            System.out.println(num);
        }

        // Clone
        Vector<Integer> copy = (Vector<Integer>) v.clone();
        System.out.println("Cloned Vector: " + copy);

        // Clear
        v.clear();
        System.out.println("After clear: " + v);
    }
}
