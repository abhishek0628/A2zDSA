#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Max-heap (default)
    priority_queue<int> pq;

    // Push elements
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(15);

    cout << "Max-heap top: " << pq.top() << endl; // 20

    // Pop elements
    pq.pop();
    cout << "After pop, new top: " << pq.top() << endl; // 15

    // Check size
    cout << "Size: " << pq.size() << endl; // 3

    // Check if empty
    if (!pq.empty())
        cout << "Priority queue is not empty" << endl;

    // Iterate through and pop all
    cout << "All elements in descending order: ";
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    // Min-heap using greater<int>
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(15);

    cout << "Min-heap top: " << minHeap.top() << endl; // 5

    return 0;
}
