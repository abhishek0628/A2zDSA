#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    cout << "=== Multimap Demo ===\n\n";

    // 1. Create a multimap
    multimap<string, int> mm;

    // 2. Insert elements
    mm.insert({"Alice", 85});
    mm.insert({"Bob", 90});
    mm.insert({"Charlie", 78});
    mm.insert({"Alice", 95}); // duplicate key allowed

    cout << "After insertion:\n";
    for (auto entry : mm)
        cout << entry.first << " = " << entry.second << endl;

    // 3. Access elements by key (equal_range)
    cout << "\nAll marks of Alice:\n";
    auto range = mm.equal_range("Alice");
    for (auto it = range.first; it != range.second; ++it)
        cout << it->first << " = " << it->second << endl;

    // 4. Count number of elements with a key
    cout << "\nNumber of Alice entries: " << mm.count("Alice") << endl;

    // 5. Find an element
    auto it = mm.find("Bob");
    if (it != mm.end())
        cout << "\nFound Bob with marks = " << it->second << endl;

    // 6. Erase by key (erases all entries with that key)
    mm.erase("Charlie");
    cout << "\nAfter erasing Charlie:\n";
    for (auto entry : mm)
        cout << entry.first << " = " << entry.second << endl;

    // 7. Erase by iterator (single element)
    it = mm.find("Alice");
    if (it != mm.end()) {
        mm.erase(it); // removes only first Alice
    }
    cout << "\nAfter erasing first Alice:\n";
    for (auto entry : mm)
        cout << entry.first << " = " << entry.second << endl;

    // 8. Iterate using iterator
    cout << "\nIterating using iterator:\n";
    for (auto itr = mm.begin(); itr != mm.end(); ++itr)
        cout << itr->first << " = " << itr->second << endl;

    // 9. Check if multimap is empty
    cout << "\nIs multimap empty? " << (mm.empty() ? "Yes" : "No") << endl;

    // 10. Size of multimap
    cout << "Size of multimap: " << mm.size() << endl;

    // 11. Clear all elements
    mm.clear();
    cout << "After clearing, size = " << mm.size() << endl;

    return 0;
}
