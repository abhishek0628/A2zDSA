import java.util.Map;
import java.util.TreeMap;

public class _3_TreeMap {
    public static void main(String[] args) {
        // 1. Create a TreeMap
        TreeMap<String, Integer> map = new TreeMap<>();

        System.out.println("=== TreeMap Demo ===\n");

        // 2. Add elements (put)
        map.put("Charlie", 78);
        map.put("Alice", 85);
        map.put("Bob", 90);
        map.put("David", 92);

        System.out.println("After adding elements:");
        printMap(map);

        // 3. Update an element (put with existing key)
        map.put("Alice", 95);
        System.out.println("\nAfter updating Alice's marks:");
        printMap(map);

        // 4. Access value by key (get)
        System.out.println("\nBob's marks: " + map.get("Bob"));

        // 5. Remove an element (remove)
        map.remove("Charlie");
        System.out.println("\nAfter removing Charlie:");
        printMap(map);

        // 6. Check if a key exists (containsKey)
        System.out.println("\nContains Alice? " + map.containsKey("Alice"));
        System.out.println("Contains Charlie? " + map.containsKey("Charlie"));

        // 7. Check if a value exists (containsValue)
        System.out.println("\nContains value 92? " + map.containsValue(92));
        System.out.println("Contains value 78? " + map.containsValue(78));

        // 8. Get all keys (keySet)
        System.out.println("\nAll keys: " + map.keySet());

        // 9. Get all values (values)
        System.out.println("All values: " + map.values());

        // 10. Iterate using entrySet
        System.out.println("\nIterate using entrySet:");
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " = " + entry.getValue());
        }

        // 11. First and Last keys
        System.out.println("\nFirst key: " + map.firstKey());
        System.out.println("Last key: " + map.lastKey());

        // 12. Ceiling and Floor
        System.out.println("\nCeiling key for 'B': " + map.ceilingKey("B"));
        System.out.println("Floor key for 'C': " + map.floorKey("C"));

        // 13. Poll first and last entries (removes them)
        System.out.println("\nPoll first entry: " + map.pollFirstEntry());
        System.out.println("Poll last entry: " + map.pollLastEntry());

        System.out.println("\nAfter polling first and last entries:");
        printMap(map);

        // 14. Clear all entries
        map.clear();
        System.out.println("\nAfter clearing map, size = " + map.size());
    }

    // Helper method to print TreeMap nicely
    static void printMap(TreeMap<String, Integer> map) {
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " = " + entry.getValue());
        }
    }
}
