#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // Declare an iterator
    vector<int>::iterator it;

    // Traverse vector using iterator
    cout << "Vector elements: ";
    for(it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";  // dereference to get value
    }
    cout << endl;

    return 0;
}
