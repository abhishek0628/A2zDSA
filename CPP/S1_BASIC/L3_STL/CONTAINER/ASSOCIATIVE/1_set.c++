#include <iostream>
#include <set>
using namespace std;

int main() {
    // 1. Create a set
    set<int> s;
    cout << "=== Set Demo ===\n\n";

    // 2. Insert elements
    s.insert(10);
    s.insert(5);
    s.insert(20);
    s.insert(15);
    s.insert(5); // duplicate ignored

    cout << "After insertion: ";
    for(int x : s) cout << x << " ";
    cout << endl;

    // 3. Check size
    cout << "Size of set: " << s.size() << endl;

    // 4. Check if element exists
    int key = 10;
    if(s.find(key) != s.end())
        cout << key << " is present in the set\n";
    else
        cout << key << " is not present in the set\n";

    // 5. Remove element
    s.erase(15);
    cout << "After erasing 15: ";
    for(int x : s) cout << x << " ";
    cout << endl;

    // 6. Iterate using iterator
    cout << "Iterating using iterator: ";
    for(auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // 7. Access first and last elements
    cout << "First element: " << *s.begin() << endl;
    cout << "Last element: " << *prev(s.end()) << endl;

    // 8. Lower and upper bounds
    auto lb = s.lower_bound(10); // first >= 10
    auto ub = s.upper_bound(10); // first > 10
    cout << "Lower bound of 10: " << (lb != s.end() ? to_string(*lb) : "Not found") << endl;
    cout << "Upper bound of 10: " << (ub != s.end() ? to_string(*ub) : "Not found") << endl;

    // 9. Clear all elements
    s.clear();
    cout << "After clearing set, size = " << s.size() << endl;

    return 0;
}
