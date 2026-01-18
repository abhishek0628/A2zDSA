import java.util.LinkedList;

public class _2_LinkedList {
    public static void main(String[] args) {

        LinkedList<Integer> list = new LinkedList<>();

        // Add operations
        list.add(10);
        list.add(20);
        list.add(30);
        list.addFirst(5);
        list.addLast(40);
        list.add(2, 15);

        System.out.println("After adding: " + list);

        // Access
        System.out.println("First: " + list.getFirst());
        System.out.println("Last: " + list.getLast());
        System.out.println("Index 2: " + list.get(2));

        // Update
        list.set(2, 100);
        System.out.println("After update: " + list);

        // Remove
        list.remove(Integer.valueOf(20));
        list.removeFirst();
        list.removeLast();
        System.out.println("After removals: " + list);

        // Search
        System.out.println("Contains 30? " + list.contains(30));
        System.out.println("Index of 30: " + list.indexOf(30));

        // Size
        System.out.println("Size: " + list.size());

        // Iteration
        System.out.print("Iterating: ");
        for (int x : list) {
            System.out.print(x + " ");
        }
        System.out.println();

        // Queue operations
        list.offer(50);
        System.out.println("After offer: " + list);
        System.out.println("Poll: " + list.poll());
        System.out.println("After poll: " + list);

        // Deque operations
        list.offerFirst(1);
        list.offerLast(60);
        System.out.println("After deque ops: " + list);

        // Clear
        list.clear();
        System.out.println("After clear: " + list);
    }
}
