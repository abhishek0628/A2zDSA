import java.util.ArrayDeque;
import java.util.Deque;
import java.util.Iterator;

public class _1_ArrayDeque {
    public static void main(String[] args) {
        // Create a deque
        Deque<String> deque = new ArrayDeque<>();

        System.out.println("=== Adding Elements ===");
        deque.addFirst("A");   // add at front
        deque.addLast("B");    // add at back
        deque.add("C");        // addLast() by default
        deque.offerFirst("D"); // add at front (safe)
        deque.offerLast("E");  // add at back (safe)
        System.out.println("Deque after additions: " + deque);

        System.out.println("\n=== Access Elements ===");
        System.out.println("First element (getFirst): " + deque.getFirst());
        System.out.println("Last element (getLast): " + deque.getLast());
        System.out.println("First element (peekFirst): " + deque.peekFirst());
        System.out.println("Last element (peekLast): " + deque.peekLast());

        System.out.println("\n=== Removing Elements ===");
        System.out.println("Removed first (removeFirst): " + deque.removeFirst());
        System.out.println("Removed last (removeLast): " + deque.removeLast());
        System.out.println("Removed first (pollFirst): " + deque.pollFirst());
        System.out.println("Removed last (pollLast): " + deque.pollLast());
        System.out.println("Deque after removals: " + deque);

        System.out.println("\n=== Using as Stack ===");
        deque.push("X"); // push at front
        deque.push("Y");
        deque.push("Z");
        System.out.println("Deque after pushes: " + deque);
        System.out.println("Pop element: " + deque.pop()); // removes front
        System.out.println("Deque after pop: " + deque);

        System.out.println("\n=== Using as Queue (FIFO) ===");
        deque.offer("M"); // add at back
        deque.offer("N");
        System.out.println("Deque as queue: " + deque);
        System.out.println("Poll element: " + deque.poll()); // removes front
        System.out.println("Deque after poll: " + deque);

        System.out.println("\n=== Iterating Elements ===");
        System.out.println("Forward iteration:");
        for (String s : deque) {
            System.out.print(s + " ");
        }
        System.out.println();

        System.out.println("Using Iterator:");
        Iterator<String> it = deque.iterator();
        while (it.hasNext()) {
            System.out.print(it.next() + " ");
        }
        System.out.println();

        System.out.println("\n=== Size & Empty Check ===");
        System.out.println("Size of deque: " + deque.size());
        System.out.println("Is deque empty? " + deque.isEmpty());

        System.out.println("\n=== Clear Deque ===");
        deque.clear();
        System.out.println("Deque after clear: " + deque);
        System.out.println("Is deque empty now? " + deque.isEmpty());
    }
}
