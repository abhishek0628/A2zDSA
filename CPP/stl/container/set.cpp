#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create a set (stores unique elements in sorted order)
    set<int> s;

    // Insert elements
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(10);   // duplicate, ignored silently

    // Display elements
    cout << "Set elements: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Size of set
    cout << "Size: " << s.size() << endl;

    // Find an element
    int key = 5;
    if (s.find(key) != s.end()) {
        cout << key << " found in set" << endl;
    } else {
        cout << key << " not found" << endl;
    }

    // Erase an element
    s.erase(10);

    cout << "After deleting 10: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // Lower bound and upper bound
    cout << "Lower bound of 15: " << *s.lower_bound(15) << endl;
    cout << "Upper bound of 15: " << *s.upper_bound(15) << endl;

    // Count (always 0 or 1 in set)
    cout << "Count of 20: " << s.count(20) << endl;

    // Clear the set
    s.clear();
    cout << "Set empty? " << (s.empty() ? "Yes" : "No") << endl;

    return 0;
}
