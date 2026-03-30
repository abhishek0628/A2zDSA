#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    cout << "=== Max-Heap Priority Queue ===\n";
    
    // Max-Heap (default)
    priority_queue<int> pq;

    // Push elements
    pq.push(30);
    pq.push(10);
    pq.push(20);
    pq.push(40);

    cout << "Priority queue elements (max-heap order): ";
    while(!pq.empty()) {
        cout << pq.top() << " "; // top element
        pq.pop(); // remove top
    }
    cout << "\n";

    cout << "\n=== Min-Heap Priority Queue ===\n";

    // Min-Heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(20);
    minHeap.push(40);

    cout << "Priority queue elements (min-heap order): ";
    while(!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << "\n";

    cout << "\n=== More Operations Example ===\n";

    priority_queue<int> pq2;
    pq2.push(15);
    pq2.push(5);
    pq2.push(25);

    cout << "Top element: " << pq2.top() << endl; // 25
    cout << "Size before pop: " << pq2.size() << endl; // 3

    pq2.pop();
    cout << "Top after pop: " << pq2.top() << endl; // 15
    cout << "Size after pop: " << pq2.size() << endl; // 2

    cout << "Is empty? " << (pq2.empty() ? "Yes" : "No") << endl;

    return 0;
}
