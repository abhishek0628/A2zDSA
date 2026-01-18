#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, max_element, min_element
using namespace std;

int main() {
    cout << "=== Vector Demo ===\n\n";

    // 1. Create a vector
    vector<int> v; // empty vector
    cout << "Initial size: " << v.size() << endl;

    // 2. Add elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << "\nAfter push_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 3. Access elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 1: " << v[1] << endl;

    // 4. Remove last element
    v.pop_back();
    cout << "\nAfter pop_back: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 5. Insert element at specific position
    v.insert(v.begin() + 1, 15); // insert 15 at index 1
    cout << "\nAfter insert 15 at index 1: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 6. Erase element at specific position
    v.erase(v.begin()); // erase first element
    cout << "\nAfter erase first element: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 7. Size and capacity
    cout << "\nSize: " << v.size() << ", Capacity: " << v.capacity() << endl;

    // 8. Check if empty
    cout << "Is vector empty? " << (v.empty() ? "Yes" : "No") << endl;

    // 9. Resize vector
    v.resize(5, 100); // resize to 5 elements, fill new elements with 100
    cout << "\nAfter resize to 5 with 100: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 10. Clear vector
    v.clear();
    cout << "\nAfter clear, size: " << v.size() << endl;

    // 11. Re-add elements for algorithms
    v = {5, 3, 8, 1, 9};

    // 12. Sort
    sort(v.begin(), v.end());
    cout << "\nSorted vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 13. Reverse
    reverse(v.begin(), v.end());
    cout << "Reversed vector: ";
    for(int x : v) cout << x << " ";
    cout << endl;

    // 14. Max and Min elements
    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;
    cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;

    // 15. Find element
    auto it = find(v.begin(), v.end(), 8);
    if(it != v.end()) cout << "Found 8 at index: " << it - v.begin() << endl;
    else cout << "8 not found" << endl;

    // 16. Iterate using iterator
    cout << "\nIterate using iterator: ";
    for(auto it = v.begin(); it != v.end(); ++it) cout << *it << " ";
    cout << endl;

    return 0;
}
