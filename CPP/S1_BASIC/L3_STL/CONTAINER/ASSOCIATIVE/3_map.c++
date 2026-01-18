#include <iostream>
#include <map>
using namespace std;

int main() {
    cout << "=== STL Map Demo ===\n\n";

    // 1. Create a map
    map<string, int> studentMarks;

    // 2. Insert elements (insert or [])
    studentMarks["Alice"] = 85;         // using []
    studentMarks["Bob"] = 90;
    studentMarks.insert({"Charlie", 78}); // using insert()

    cout << "After insertion:\n";
    for(auto entry : studentMarks)
        cout << entry.first << " = " << entry.second << endl;

    // 3. Access elements
    cout << "\nBob's marks: " << studentMarks["Bob"] << endl;

    // 4. Update elements
    studentMarks["Alice"] = 95;
    cout << "\nAfter updating Alice's marks:\n";
    for(auto entry : studentMarks)
        cout << entry.first << " = " << entry.second << endl;

    // 5. Remove element by key
    studentMarks.erase("Charlie");
    cout << "\nAfter removing Charlie:\n";
    for(auto entry : studentMarks)
        cout << entry.first << " = " << entry.second << endl;

    // 6. Check if key exists
    string key = "Bob";
    if(studentMarks.find(key) != studentMarks.end())
        cout << "\n" << key << " is present\n";
    else
        cout << "\n" << key << " is not present\n";

    // 7. Size of map
    cout << "Size of map: " << studentMarks.size() << endl;

    // 8. Iterate using iterator
    cout << "\nIterate using iterator:\n";
    for(map<string,int>::iterator it = studentMarks.begin(); it != studentMarks.end(); ++it) {
        cout << it->first << " = " << it->second << endl;
    }

    // 9. Clear map
    studentMarks.clear();
    cout << "\nAfter clearing map, size = " << studentMarks.size() << endl;

    return 0;
}
