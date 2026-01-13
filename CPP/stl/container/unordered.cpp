#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> us;

    // Insert elements
    us.insert(10);
    us.insert(20);
    us.insert(30);
    us.insert(20);   // duplicate, ignored

    // Traversing unordered_set
    cout << "Elements in unordered_set:\n";
    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;

    // Search element
    int key = 20;
    if (us.find(key) != us.end()) {
        cout << key << " found in set\n";
    } else {
        cout << key << " not found\n";
    }

    // Erase element
    us.erase(10);

    cout << "After deletion:\n";
    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;

    // Size of set
    cout << "Size: " << us.size() << endl;

    // Clear all elements
    us.clear();
    cout << "Size after clear: " << us.size() << endl;

    return 0;
}
