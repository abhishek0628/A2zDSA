#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    // 1. Declare a vector
    vector<int> v;

    // 2. Insert elements
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);
    v.push_back(40);

    // 3. Display vector elements
    cout << "Vector elements: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 4. Access elements
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;
    cout << "Element at index 2: " << v.at(2) << endl;

    // 5. Size and capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    // 6. Sort the vector
    sort(v.begin(), v.end());

    cout << "Sorted vector: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 7. Search an element
    int key = 20;
    if (binary_search(v.begin(), v.end(), key))
        cout << key << " found in vector" << endl;
    else
        cout << key << " not found" << endl;

    // 8. Insert in middle
    v.insert(v.begin() + 2, 25);

    cout << "After insertion: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 9. Erase element
    v.erase(v.begin() + 3);

    cout << "After deletion: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 10. Pop last element
    v.pop_back();

    cout << "After pop_back: ";
    for (int x : v)
        cout << x << " ";
    cout << endl;

    // 11. Clear vector
    v.clear();

    cout << "Vector size after clear: " << v.size() << endl;

    return 0;
}
