#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 1. Create a deque
    deque<int> dq;

    cout << "=== Deque Demo ===\n";

    // 2. Add elements at the back (push_back)
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);

    cout << "After push_back: ";
    for(int x : dq) cout << x << " ";
    cout << endl;

    // 3. Add elements at the front (push_front)
    dq.push_front(5);
    dq.push_front(2);

    cout << "After push_front: ";
    for(int x : dq) cout << x << " ";
    cout << endl;

    // 4. Remove elements from back (pop_back)
    dq.pop_back();
    cout << "After pop_back: ";
    for(int x : dq) cout << x << " ";
    cout << endl;

    // 5. Remove elements from front (pop_front)
    dq.pop_front();
    cout << "After pop_front: ";
    for(int x : dq) cout << x << " ";
    cout << endl;

    // 6. Access elements
    cout << "First element: " << dq.front() << endl;
    cout << "Last element: " << dq.back() << endl;
    cout << "Element at index 1: " << dq.at(1) << endl;

    // 7. Size and empty check
    cout << "Size of deque: " << dq.size() << endl;
    cout << "Is deque empty? " << (dq.empty() ? "Yes" : "No") << endl;

    // 8. Insert at specific position (iterator)
    dq.insert(dq.begin() + 1, 15); // insert 15 at index 1
    cout << "After insert 15 at index 1: ";
    for(int x : dq) cout << x << " ";
    cout << endl;

    // 9. Erase element at specific position
    dq.erase(dq.begin() + 2); // remove element at index 2
    cout << "After erase index 2: ";
    for(int x : dq) cout << x << " ";
    cout << endl;

    // 10. Clear deque
    dq.clear();
    cout << "After clear, is empty? " << (dq.empty() ? "Yes" : "No") << endl;

    return 0;
}
