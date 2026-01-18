import java.util.Deque;
import java.util.LinkedList;

public class _2_LinkedList {
    public static void main(String[] args) {
        Deque<String> deque = new LinkedList<>();

        // 1. Add elements at front and end
        deque.addFirst("A");  // front
        deque.addLast("B");   // end
        deque.addLast("C");   // end
        deque.offerFirst("X"); // front
        deque.offerLast("Y");  // end
        System.out.println("Deque after additions: " + deque);

        // 2. Peek first and last elements
        System.out.println("First element: " + deque.getFirst());
        System.out.println("Last element: " + deque.getLast());
        System.out.println("Peek first: " + deque.peekFirst());
        System.out.println("Peek last: " + deque.peekLast());

        // 3. Remove elements from front and end
        System.out.println("Removed first: " + deque.removeFirst());
        System.out.println("Removed last: " + deque.removeLast());
        System.out.println("Deque after removals: " + deque);

        // 4. Use as queue (FIFO)
        deque.offerLast("Q1");
        deque.offerLast("Q2");
        System.out.println("Deque as FIFO queue: " + deque);
        System.out.println("Poll first: " + deque.pollFirst());
        System.out.println("Deque now: " + deque);

        // 5. Use as stack (LIFO)
        deque.push("S1");  // push to front
        deque.push("S2");  // push to front
        System.out.println("Deque as stack: " + deque);
        System.out.println("Pop element: " + deque.pop());
        System.out.println("Deque after pop: " + deque);

        // 6. Iteration
        System.out.println("Iterating over deque:");
        for (String elem : deque) {
            System.out.println(elem);
        }
    }
}
