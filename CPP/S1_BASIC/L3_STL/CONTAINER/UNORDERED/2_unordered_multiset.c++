#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    cout << "=== unordered_multiset Demo ===\n\n";

    // 1. Create an unordered_multiset
    unordered_multiset<int> ums;

    // 2. Insert elements
    ums.insert(10);
    ums.insert(20);
    ums.insert(10); // duplicate allowed
    ums.insert(30);
    ums.insert(20); // duplicate allowed

    cout << "After insertion: ";
    for(int x : ums) cout << x << " ";
    cout << "\n";

    // 3. Count occurrences of a value
    cout << "Count of 10: " << ums.count(10) << endl;
    cout << "Count of 20: " << ums.count(20) << endl;

    // 4. Find an element
    auto it = ums.find(30);
    if(it != ums.end()) {
        cout << "Found element 30" << endl;
    } else {
        cout << "Element 30 not found" << endl;
    }

    // 5. Erase a single element (one occurrence)
    ums.erase(10); // removes **all occurrences** of 10
    cout << "After erasing 10: ";
    for(int x : ums) cout << x << " ";
    cout << "\n";

    // 6. Erase using iterator
    it = ums.find(20);
    if(it != ums.end()) {
        ums.erase(it); // removes **only one occurrence**
    }
    cout << "After erasing one occurrence of 20: ";
    for(int x : ums) cout << x << " ";
    cout << "\n";

    // 7. Size of the unordered_multiset
    cout << "Size of unordered_multiset: " << ums.size() << endl;

    // 8. Check if empty
    cout << "Is empty? " << (ums.empty() ? "Yes" : "No") << endl;

    // 9. Clear all elements
    ums.clear();
    cout << "After clear, size = " << ums.size() << endl;

    return 0;
}
