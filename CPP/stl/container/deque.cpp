#include <iostream>
#include <deque>
using namespace std;

int main() {
    // 1. Declare a deque
    deque<int> dq;

    // 2. Add elements
    dq.push_back(10);    // add at end
    dq.push_back(20);
    dq.push_front(5);    // add at front
    dq.push_front(2);

    cout << "Deque after pushes: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    // Output: 2 5 10 20

    // 3. Remove elements
    dq.pop_back();       // remove from end
    dq.pop_front();      // remove from front

    cout << "Deque after pops: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    // Output: 5 10

    // 4. Access elements
    cout << "First element: " << dq.front() << endl;   // 5
    cout << "Last element: " << dq.back() << endl;     // 10
    cout << "Element at index 1: " << dq[1] << endl;  // 10

    // 5. Insert at specific position
    auto it = dq.begin() + 1;
    dq.insert(it, 15);   // insert 15 at index 1

    cout << "After insert: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    // Output: 5 15 10

    // 6. Erase element
    dq.erase(dq.begin());  // erase first element

    cout << "After erase: ";
    for(int x : dq) cout << x << " ";
    cout << endl;
    // Output: 15 10

    // 7. Size and empty
    cout << "Size: " << dq.size() << endl;        // 2
    cout << "Is empty? " << dq.empty() << endl;  // 0 (false)

    // 8. Clear deque
    dq.clear();
    cout << "After clear, is empty? " << dq.empty() << endl; // 1 (true)

    return 0;
}
