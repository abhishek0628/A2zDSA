import java.util.LinkedHashMap;
import java.util.Map;

public class _2_LinkedHashMap {
    public static void main(String[] args) {
        // 1. Create a LinkedHashMap
        LinkedHashMap<String, Integer> map = new LinkedHashMap<>();

        // 2. Add elements (put)
        map.put("Alice", 85);
        map.put("Bob", 90);
        map.put("Charlie", 78);
        map.put("David", 92);

        System.out.println("Initial LinkedHashMap: " + map);

        // 3. Access element (get)
        System.out.println("Bob's marks: " + map.get("Bob"));

        // 4. Update element
        map.put("Alice", 95); // overwrites old value
        System.out.println("After updating Alice: " + map);

        // 5. Remove element
        map.remove("Charlie");
        System.out.println("After removing Charlie: " + map);

        // 6. Check if key exists
        System.out.println("Contains key 'David'? " + map.containsKey("David"));

        // 7. Check if value exists
        System.out.println("Contains value 90? " + map.containsValue(90));

        // 8. Iterate over keys
        System.out.println("\nIterating over keys:");
        for (String key : map.keySet()) {
            System.out.println(key);
        }

        // 9. Iterate over values
        System.out.println("\nIterating over values:");
        for (Integer value : map.values()) {
            System.out.println(value);
        }

        // 10. Iterate over key-value pairs (entries)
        System.out.println("\nIterating over key-value pairs:");
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            System.out.println(entry.getKey() + " = " + entry.getValue());
        }

        // 11. Size of the map
        System.out.println("\nSize of map: " + map.size());

        // 12. Clear the map
        map.clear();
        System.out.println("After clearing map: " + map);
    }
}
