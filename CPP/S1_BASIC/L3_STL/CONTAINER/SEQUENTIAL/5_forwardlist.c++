#include <iostream>
#include <forward_list>
using namespace std;

int main() {
    // 1. Create a forward_list
    forward_list<int> fl = {10, 20, 30};
    cout << "Initial list: ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 2. Add element to the front
    fl.push_front(5);
    cout << "After push_front(5): ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 3. Insert after a given position (using iterator)
    auto it = fl.begin(); // points to first element
    ++it; // move iterator to second element
    fl.insert_after(it, 15); // insert 15 after second element
    cout << "After insert_after second element (15): ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 4. Remove specific value
    fl.remove(20);
    cout << "After remove(20): ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 5. Remove element after a given position
    it = fl.begin();
    ++it; // second element
    fl.erase_after(it); // erase element after second
    cout << "After erase_after second element: ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 6. Add multiple elements at front
    fl.push_front(2);
    fl.push_front(1);
    cout << "After push_front 1 and 2: ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 7. Sort the list
    fl.sort();
    cout << "After sort(): ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 8. Reverse the list
    fl.reverse();
    cout << "After reverse(): ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 9. Remove duplicates (useful after sort)
    fl.push_front(5);
    fl.sort();
    fl.unique(); // removes consecutive duplicates
    cout << "After unique(): ";
    for(int x : fl) cout << x << " ";
    cout << endl;

    // 10. Access first element
    cout << "Front element: " << fl.front() << endl;

    // 11. Clear the list
    fl.clear();
    cout << "After clear(), empty? " << (fl.empty() ? "Yes" : "No") << endl;

    return 0;
}
