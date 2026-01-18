#include <iostream>
#include <list>
#include <algorithm> // for sort, reverse
using namespace std;

int main() {
    // 1. Create a list
    list<int> l = {5, 2, 9, 1, 5};

    cout << "Initial list: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 2. Add elements
    l.push_back(10);   // add at end
    l.push_front(0);   // add at front
    cout << "After push_front and push_back: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 3. Remove elements
    l.pop_back();      // remove last
    l.pop_front();     // remove first
    l.remove(5);       // remove all occurrences of 5
    cout << "After removals: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 4. Insert elements using iterator
    auto it = l.begin();
    advance(it, 1);   // move iterator to second element
    l.insert(it, 7);  // insert 7 before second element
    cout << "After insert: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 5. Sort the list
    l.sort();
    cout << "After sort: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 6. Reverse the list
    l.reverse();
    cout << "After reverse: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 7. Unique (remove consecutive duplicates)
    l.push_back(7);
    l.push_back(7);
    l.sort(); // unique works on consecutive duplicates
    l.unique();
    cout << "After unique: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 8. Merge two lists
    list<int> l2 = {3, 8, 6};
    l2.sort();
    l.sort();
    l.merge(l2);
    cout << "After merge with another list: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 9. Splice (move elements from one list to another)
    list<int> l3 = {100, 200};
    auto pos = l.begin();
    advance(pos, 2);
    l.splice(pos, l3); // move all of l3 into l at pos
    cout << "After splice: ";
    for(int x : l) cout << x << " ";
    cout << endl;

    // 10. Size and empty
    cout << "List size: " << l.size() << endl;
    cout << "Is list empty? " << (l.empty() ? "Yes" : "No") << endl;

    // 11. Clear
    l.clear();
    cout << "After clear, size = " << l.size() << endl;

    return 0;
}
