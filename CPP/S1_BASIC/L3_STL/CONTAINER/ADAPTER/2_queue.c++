#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    cout << "=== Regular Queue Demo ===\n";

    // 1. Add elements (enqueue)
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "After push: ";
    queue<int> temp = q; // copy to display
    while(!temp.empty()) {
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    // 2. Access front and back
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // 3. Remove element (dequeue)
    q.pop();
    cout << "After pop, front: " << q.front() << endl;

    // 4. Size
    cout << "Queue size: " << q.size() << endl;

    // 5. Check if empty
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
