#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // 1. push() – insert element at rear
    q.push(10);
    q.push(20);
    q.push(30);

    // Queue now: 10 20 30

    // 2. front() – access front element
    cout << "Front: " << q.front() << endl;   // 10

    // 3. back() – access last element
    cout << "Back: " << q.back() << endl;     // 30

    // 4. size() – number of elements
    cout << "Size: " << q.size() << endl;     // 3

    // 5. empty() – check if queue is empty
    if (!q.empty())
        cout << "Queue is not empty" << endl;

    // 6. pop() – remove front element
    q.pop();   // removes 10

    cout << "Front after pop: " << q.front() << endl; // 20

    // 7. Display all elements
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
