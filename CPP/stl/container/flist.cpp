#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    // 1. Create a forward_list
    forward_list<int> fl = {10, 20, 30};
    
    cout << "Initial list: ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 2. Insert at front
    fl.push_front(5);
    cout << "After push_front(5): ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 3. Insert after a specific element
    auto it = fl.begin();
    ++it; // points to 10
    fl.insert_after(it, 15);
    cout << "After insert_after(10, 15): ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 4. Delete first element
    fl.pop_front();
    cout << "After pop_front(): ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 5. Delete a specific element
    fl.remove(20);
    cout << "After remove(20): ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 6. Remove elements based on a condition
    fl.remove_if([](int x){ return x > 15; });
    cout << "After remove_if(x>15): ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 7. Reverse the list
    fl.reverse();
    cout << "After reverse(): ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 8. Sort the list
    fl.push_front(25);
    fl.push_front(1);
    fl.sort();
    cout << "After adding 1, 25 and sort(): ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 9. Merge two forward_lists (both must be sorted)
    forward_list<int> fl2 = {3, 7, 12};
    fl.merge(fl2);
    cout << "After merging fl2: ";
    for (int x : fl) cout << x << " ";
    cout << "\n";

    // 10. Clear the list
    fl.clear();
    cout << "After clear(), size: " << distance(fl.begin(), fl.end()) << "\n";

    return 0;
}
