import java.util.HashMap;
import java.util.Map;

public class _1_HashMap {
    public static void main(String[] args) {
        // 1. Create a HashMap
        HashMap<String, Integer> studentMarks = new HashMap<>();

        System.out.println("=== HashMap Demo ===\n");

        // 2. Add key-value pairs
        studentMarks.put("Alice", 85);
        studentMarks.put("Bob", 90);
        studentMarks.put("Charlie", 78);
        System.out.println("After adding entries: " + studentMarks);

        // 3. Update a value for an existing key
        studentMarks.put("Alice", 95); // update Alice's marks
        System.out.println("After updating Alice: " + studentMarks);

        // 4. Get value by key
        System.out.println("Bob's marks: " + studentMarks.get("Bob"));

        // 5. Check if a key exists
        System.out.println("Contains key 'Charlie'? " + studentMarks.containsKey("Charlie"));

        // 6. Check if a value exists
        System.out.println("Contains value 90? " + studentMarks.containsValue(90));

        // 7. Remove a key-value pair
        studentMarks.remove("Charlie");
        System.out.println("After removing Charlie: " + studentMarks);

        // 8. Size of the map
        System.out.println("Size of HashMap: " + studentMarks.size());

        // 9. Iterate over keys
        System.out.println("\nIterate using keySet():");
        for (String key : studentMarks.keySet()) {
            System.out.println(key + " = " + studentMarks.get(key));
        }

        // 10. Iterate over values
        System.out.println("\nIterate using values():");
        for (Integer value : studentMarks.values()) {
            System.out.println(value);
        }

        // 11. Iterate over entries
        System.out.println("\nIterate using entrySet():");
        for (Map.Entry<String, Integer> entry : studentMarks.entrySet()) {
            System.out.println(entry.getKey() + " = " + entry.getValue());
        }

        // 12. Clear all entries
        studentMarks.clear();
        System.out.println("\nAfter clear(), HashMap: " + studentMarks);
        System.out.println("Is HashMap empty? " + studentMarks.isEmpty());
    }
}
