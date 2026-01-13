#include <iostream>
#include <map>
using namespace std;

int main() {
    // Create a map (key: int, value: string)
    map<int, string> students;

    // Insert elements
    students[101] = "Abhishek";
    students[103] = "Rahul";
    students[102] = "Ankit";

    // Another way to insert
    students.insert({104, "Sneha"});

    // Display all elements
    cout << "Student List:\n";
    for (auto it = students.begin(); it != students.end(); it++) {
        cout << "Roll: " << it->first
             << " Name: " << it->second << endl;
    }

    // Search for a key
    int key = 102;
    auto found = students.find(key);

    if (found != students.end()) {
        cout << "\nFound Roll " << key
             << ": " << found->second << endl;
    } else {
        cout << "\nRoll " << key << " not found\n";
    }

    // Delete an element
    students.erase(103);

    // Display after deletion
    cout << "\nAfter Deletion:\n";
    for (auto p : students) {
        cout << "Roll: " << p.first
             << " Name: " << p.second << endl;
    }

    return 0;
}
