#include <iostream>
#include <set>
using namespace std;

int main() {
    // 1. Create a multiset
    multiset<int> ms;

    cout << "=== Multiset Demo ===\n";

    // 2. Insert elements
    ms.insert(5);
    ms.insert(1);
    ms.insert(7);
    ms.insert(5); // duplicate allowed
    ms.insert(3);

    cout << "After insertions: ";
    for(int x : ms) cout << x << " ";
    cout << endl;

    // 3. Size of multiset
    cout << "Size: " << ms.size() << endl;

    // 4. Count occurrences of an element
    cout << "Count of 5: " << ms.count(5) << endl;

    // 5. Find an element
    auto it = ms.find(7);
    if(it != ms.end())
        cout << "Found 7" << endl;
    else
        cout << "7 not found" << endl;

    // 6. Erase an element (all occurrences)
    ms.erase(5);
    cout << "After erasing all 5s: ";
    for(int x : ms) cout << x << " ";
    cout << endl;

    // 7. Erase only one occurrence
    ms.insert(3); ms.insert(3);
    cout << "Before erasing one 3: ";
    for(int x : ms) cout << x << " ";
    cout << endl;

    ms.erase(ms.find(3)); // erase only first occurrence
    cout << "After erasing one 3: ";
    for(int x : ms) cout << x << " ";
    cout << endl;

    // 8. Iterate using iterator
    cout << "Iterate using iterator: ";
    for(auto itr = ms.begin(); itr != ms.end(); ++itr)
        cout << *itr << " ";
    cout << endl;

    // 9. Get first and last elements
    if(!ms.empty()) {
        cout << "First element: " << *ms.begin() << endl;
        cout << "Last element: " << *ms.rbegin() << endl;
    }

    // 10. Clear all elements
    ms.clear();
    cout << "After clearing, size = " << ms.size() << endl;

    return 0;
}
