#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    // 1. Create an unordered_map
    unordered_map<string, int> umap;

    cout << "=== Unordered Map Demo ===\n\n";

    // 2. Insert elements
    umap["Alice"] = 85;
    umap["Bob"] = 90;
    umap["Charlie"] = 78;
    umap.insert({"David", 92}); // another way to insert

    cout << "After inserting elements:\n";
    for (auto entry : umap) {
        cout << entry.first << " = " << entry.second << endl;
    }

    // 3. Access elements
    cout << "\nBob's marks: " << umap["Bob"] << endl;

    // 4. Update element
    umap["Alice"] = 95;
    cout << "\nAfter updating Alice's marks:\n";
    for (auto entry : umap) {
        cout << entry.first << " = " << entry.second << endl;
    }

    // 5. Remove element
    umap.erase("Charlie");
    cout << "\nAfter removing Charlie:\n";
    for (auto entry : umap) {
        cout << entry.first << " = " << entry.second << endl;
    }

    // 6. Search for a key
    cout << "\nContains David? ";
    if (umap.find("David") != umap.end()) cout << "Yes\n";
    else cout << "No\n";

    cout << "Contains Charlie? ";
    if (umap.find("Charlie") != umap.end()) cout << "Yes\n";
    else cout << "No\n";

    // 7. Check if value exists (manual search)
    int valueToFind = 90;
    bool found = false;
    for (auto entry : umap) {
        if (entry.second == valueToFind) {
            found = true;
            break;
        }
    }
    cout << "\nContains value " << valueToFind << "? " << (found ? "Yes" : "No") << endl;

    // 8. Iterate using iterator
    cout << "\nIterate using iterator:\n";
    for (auto it = umap.begin(); it != umap.end(); ++it) {
        cout << it->first << " = " << it->second << endl;
    }

    // 9. Size of unordered_map
    cout << "\nSize of unordered_map: " << umap.size() << endl;

    // 10. Clear all elements
    umap.clear();
    cout << "After clearing, size = " << umap.size() << endl;

    return 0;
}
