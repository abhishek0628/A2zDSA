#include <iostream>
#include <vector>
#include <algorithm> // sort, reverse, stable_sort, partial_sort, nth_element
using namespace std;

int main() {
    // 1. Basic vector
    vector<int> v = {5, 2, 9, 1, 5, 6};

    cout << "Original vector: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 2. Sort ascending
    sort(v.begin(), v.end());
    cout << "Sorted ascending: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 3. Sort descending
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted descending: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 4. Reverse
    reverse(v.begin(), v.end());
    cout << "Reversed vector: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 5. Stable sort (maintains relative order of equal elements)
    vector<int> v2 = {5, 2, 9, 2, 5, 6};
    stable_sort(v2.begin(), v2.end());
    cout << "Stable sort ascending: ";
    for(int x : v2) cout << x << " ";
    cout << "\n";

    // 6. Partial sort (sort first k elements)
    vector<int> v3 = {10, 3, 5, 8, 2, 6};
    partial_sort(v3.begin(), v3.begin() + 3, v3.end());
    cout << "Partial sort (first 3 elements sorted): ";
    for(int x : v3) cout << x << " ";
    cout << "\n";

    // 7. nth_element (nth smallest element in correct position)
    vector<int> v4 = {7, 2, 1, 6, 8, 5};
    nth_element(v4.begin(), v4.begin() + 2, v4.end()); // 3rd smallest at index 2
    cout << "nth_element (3rd smallest at index 2): ";
    for(int x : v4) cout << x << " ";
    cout << "\n";
    cout << "3rd smallest element: " << v4[2] << "\n";

    // 8. Sort with custom comparator (even first, then odd)
    vector<int> v5 = {1,2,3,4,5,6,7};
    sort(v5.begin(), v5.end(), [](int a, int b){
        if(a%2==0 && b%2!=0) return true; // even before odd
        if(a%2!=0 && b%2==0) return false;
        return a < b; // ascending within even or odd
    });
    cout << "Custom sort (even first, ascending): ";
    for(int x : v5) cout << x << " ";
    cout << "\n";

    // 9. Sort vector of pairs by first element
    vector<pair<int,int>> vp = {{3,100},{1,50},{2,75},{1,25}};
    sort(vp.begin(), vp.end()); // sorts by first, then second
    cout << "Sort pairs by first element: ";
    for(auto p : vp) cout << "(" << p.first << "," << p.second << ") ";
    cout << "\n";

    // 10. Sort vector of pairs by second element
    sort(vp.begin(), vp.end(), [](pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    });
    cout << "Sort pairs by second element: ";
    for(auto p : vp) cout << "(" << p.first << "," << p.second << ") ";
    cout << "\n";

    return 0;
}
