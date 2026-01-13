#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main() {
    // 1. Declaration
    unordered_map<string, int> umap;

    // 2. Insert elements
    umap["apple"] = 5;           // method 1
    umap.insert({"banana", 3});  // method 2 using pair
    umap.insert(make_pair("orange", 7));

    // 3. Access elements
    cout << "Apple count: " << umap["apple"] << endl;

    // Access with .at() -> throws exception if key not found
    try {
        cout << "Mango count: " << umap.at("mango") << endl;
    } catch (out_of_range& e) {
        cout << "Key 'mango' not found!" << endl;
    }

    // 4. Check if key exists
    if(umap.find("banana") != umap.end())
        cout << "Banana exists with count: " << umap["banana"] << endl;

    // 5. Iterate over unordered_map
    cout << "\nAll fruits in the map:\n";
    for(auto &pair : umap) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    // 6. Delete an element
    umap.erase("orange");  // erase by key
    cout << "\nAfter deleting 'orange':\n";
    for(auto &pair : umap)
        cout << pair.first << " -> " << pair.second << endl;

    // 7. Size and empty
    cout << "\nSize of map: " << umap.size() << endl;
    cout << "Is map empty? " << (umap.empty() ? "Yes" : "No") << endl;

    // 8. Clear map
    umap.clear();
    cout << "After clear, is map empty? " << (umap.empty() ? "Yes" : "No") << endl;

    return 0;
}
