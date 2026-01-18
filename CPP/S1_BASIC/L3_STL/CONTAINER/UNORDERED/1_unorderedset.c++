#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    // 1. Create an unordered_set
    unordered_set<int> us;
    cout << "=== Unordered Set Demo ===\n\n";

    // 2. Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(20); // duplicate ignored
    cout << "After insertions: ";
    for (int x : us) cout << x << " ";
    cout << "\n";

    // 3. Check size
    cout << "Size of set: " << us.size() << "\n";

    // 4. Check if element exists
    int check = 20;
    if (us.find(check) != us.end()) {
        cout << check << " is present in the set.\n";
    } else {
        cout << check << " is not present in the set.\n";
    }

    // 5. Remove element
    us.erase(10);
    cout << "After erasing 10: ";
    for (int x : us) cout << x << " ";
    cout << "\n";

    // 6. Iterate using iterator
    cout << "Iterating using iterator: ";
    for (unordered_set<int>::iterator it = us.begin(); it != us.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    // 7. Insert multiple elements
    us.insert({40, 50, 60});
    cout << "After inserting multiple elements: ";
    for (int x : us) cout << x << " ";
    cout << "\n";

    // 8. Count elements (returns 0 or 1)
    cout << "Count of 30: " << us.count(30) << "\n";
    cout << "Count of 100: " << us.count(100) << "\n";

    // 9. Clear all elements
    us.clear();
    cout << "After clearing set, size = " << us.size() << "\n";

    return 0;
}
