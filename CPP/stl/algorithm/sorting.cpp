#include <bits/stdc++.h>
using namespace std;

struct Item {
    int val;
    char ch;
};

int main() {
    // Original vector
    vector<int> v = {5, 3, 2, 4, 1};
    cout << "Original vector: ";
    for(int x : v) cout << x << " ";
    cout << "\n\n";

    // 1. sort() - ascending
    sort(v.begin(), v.end());
    cout << "After sort (ascending): ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // sort() - descending
    sort(v.begin(), v.end(), greater<int>());
    cout << "After sort (descending): ";
    for(int x : v) cout << x << " ";
    cout << "\n\n";

    // 2. stable_sort() - preserves relative order
    vector<Item> items = {{2,'a'}, {1,'b'}, {2,'c'}, {1,'d'}};
    stable_sort(items.begin(), items.end(), [](Item a, Item b){ return a.val < b.val; });
    cout << "After stable_sort: ";
    for(auto it : items) cout << "(" << it.val << "," << it.ch << ") ";
    cout << "\n\n";

    // 3. partial_sort() - only first k elements sorted
    vector<int> v2 = {9, 7, 5, 3, 1};
    partial_sort(v2.begin(), v2.begin() + 3, v2.end()); // first 3 smallest sorted
    cout << "After partial_sort (first 3 sorted): ";
    for(int x : v2) cout << x << " ";
    cout << "\n\n";

    // 4. nth_element() - nth element in sorted position
    vector<int> v3 = {8, 4, 6, 2, 10};
    nth_element(v3.begin(), v3.begin() + 2, v3.end()); // 3rd element in sorted position
    cout << "After nth_element (3rd smallest at index 2): ";
    for(int x : v3) cout << x << " ";
    cout << "\n";
    cout << "3rd smallest element: " << v3[2] << "\n\n";

    // 5. reverse() - reverse the order
    vector<int> v4 = {1, 2, 3, 4, 5};
    reverse(v4.begin(), v4.end());
    cout << "After reverse: ";
    for(int x : v4) cout << x << " ";
    cout << "\n";

    return 0;
}
