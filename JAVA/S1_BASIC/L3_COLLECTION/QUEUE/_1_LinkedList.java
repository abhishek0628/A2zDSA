import java.util.LinkedList;
import java.util.Queue;

public class _1_LinkedList {
    public static void main(String[] args) {

        Queue<Integer> q = new LinkedList<>();

        // Enqueue
        q.offer(10);
        q.offer(20);
        q.offer(30);
        q.offer(40);
        System.out.println("Queue after enqueue: " + q);

        // Dequeue
        System.out.println("Removed element: " + q.poll());
        System.out.println("Queue after dequeue: " + q);

        // Peek
        System.out.println("Front element: " + q.peek());

        // Size
        System.out.println("Queue size: " + q.size());

        // Check empty
        System.out.println("Is queue empty? " + q.isEmpty());

        // Search
        System.out.println("Queue contains 30? " + q.contains(30));

        // Iterate
        System.out.print("Queue elements: ");
        for (int x : q) {
            System.out.print(x + " ");
        }
        System.out.println();

        // Remove all elements
        while (!q.isEmpty()) {
            System.out.println("Removing: " + q.poll());
        }

        System.out.println("Queue after clearing: " + q);
    }
}
