#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 1. Create an unordered_multimap
    unordered_multimap<string, int> umm;

    cout << "=== Unordered Multimap Demo ===\n\n";

    // 2. Insert elements
    umm.insert({"Alice", 85});
    umm.insert({"Bob", 90});
    umm.insert({"Alice", 95}); // duplicate key
    umm.insert({"Charlie", 78});

    cout << "After insertion:\n";
    for(auto entry : umm)
        cout << entry.first << " = " << entry.second << endl;

    // 3. Access elements by key
    cout << "\nAll values for key 'Alice':\n";
    auto range = umm.equal_range("Alice");
    for(auto it = range.first; it != range.second; ++it)
        cout << it->first << " = " << it->second << endl;

    // 4. Count number of elements for a key
    cout << "\nNumber of entries with key 'Alice': " << umm.count("Alice") << endl;

    // 5. Find element by key
    auto it = umm.find("Bob");
    if(it != umm.end())
        cout << "\nFound Bob = " << it->second << endl;

    // 6. Erase elements
    cout << "\nErasing all entries with key 'Alice'\n";
    umm.erase("Alice");

    cout << "After erasing Alice:\n";
    for(auto entry : umm)
        cout << entry.first << " = " << entry.second << endl;

    // 7. Check if empty and size
    cout << "\nSize of unordered_multimap: " << umm.size() << endl;
    cout << "Is empty? " << (umm.empty() ? "Yes" : "No") << endl;

    // 8. Clear all elements
    umm.clear();
    cout << "After clear, size = " << umm.size() << endl;

    return 0;
}
