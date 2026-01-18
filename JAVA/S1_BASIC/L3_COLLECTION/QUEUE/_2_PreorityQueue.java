import java.util.PriorityQueue;

public class _2_PreorityQueue {
    public static void main(String[] args) {

        PriorityQueue<Integer> pq = new PriorityQueue<>();

        // Insert
        pq.add(40);
        pq.add(10);
        pq.add(30);
        pq.offer(20);

        System.out.println("PriorityQueue: " + pq);

        // Peek
        System.out.println("Peek: " + pq.peek());

        // Poll
        System.out.println("Poll: " + pq.poll());
        System.out.println("After poll: " + pq);

        // Remove specific element
        pq.remove(30);
        System.out.println("After removing 30: " + pq);

        // Contains
        System.out.println("Contains 20? " + pq.contains(20));

        // Size
        System.out.println("Size: " + pq.size());

        // isEmpty
        System.out.println("Is empty? " + pq.isEmpty());

        // Clear
        pq.clear();
        System.out.println("After clear: " + pq);
    }
}
