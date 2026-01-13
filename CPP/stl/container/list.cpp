#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    // Create a list
    list<int> l;

    // Insert elements
    l.push_back(10);      // add at end
    l.push_front(5);      // add at beginning
    l.push_back(20);
    l.push_front(1);

    cout << "List elements: ";
    for(int x : l)
        cout << x << " ";
    cout << endl;

    // Remove element from front and back
    l.pop_front();
    l.pop_back();

    cout << "After pop operations: ";
    for(int x : l)
        cout << x << " ";
    cout << endl;

    // Insert at specific position
    auto it = l.begin();
    advance(it, 1);      // move iterator forward by 1

    l.insert(it, 99);

    cout << "After inserting 99: ";
    for(int x : l)
        cout << x << " ";
    cout << endl;

    // Remove specific value
    l.remove(10);        // removes all occurrences of 10

    cout << "After removing 10: ";
    for(int x : l)
        cout << x << " ";
    cout << endl;

    // Sort the list
    l.sort();

    cout << "After sorting: ";
    for(int x : l)
        cout << x << " ";
    cout << endl;

    // Reverse the list
    l.reverse();

    cout << "After reversing: ";
    for(int x : l)
        cout << x << " ";
    cout << endl;

    // Size of list
    cout << "Size of list: " << l.size() << endl;

    // Clear the list
    l.clear();
    cout << "List cleared. Size = " << l.size() << endl;

    return 0;
}
