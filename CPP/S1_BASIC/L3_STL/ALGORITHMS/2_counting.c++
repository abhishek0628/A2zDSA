#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate

using namespace std;

int main() {
    cout << "=== STL Algorithms Demo ===\n\n";

    vector<int> v = {5, 2, 9, 1, 5, 6};
    cout << "Original vector: ";
    for(int x : v) cout << x << " ";
    cout << "\n\n";

    // 1. Sort ascending
    sort(v.begin(), v.end());
    cout << "Sorted ascending: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 2. Sort descending
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted descending: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 3. Reverse
    reverse(v.begin(), v.end());
    cout << "Reversed: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 4. Max/Min element
    cout << "Max element: " << *max_element(v.begin(), v.end()) << "\n";
    cout << "Min element: " << *min_element(v.begin(), v.end()) << "\n";

    // 5. Count occurrences of 5
    int cnt5 = count(v.begin(), v.end(), 5);
    cout << "Count of 5: " << cnt5 << "\n";

    // 6. Find element 9
    auto it = find(v.begin(), v.end(), 9);
    if(it != v.end()) cout << "Found 9 at index: " << it - v.begin() << "\n";
    else cout << "9 not found\n";

    // 7. Accumulate (sum)
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of elements: " << sum << "\n";

    // 8. Remove element 5
    v.erase(remove(v.begin(), v.end(), 5), v.end());
    cout << "After removing 5: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 9. Replace 9 with 10
    replace(v.begin(), v.end(), 9, 10);
    cout << "After replacing 9 with 10: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 10. Transform (multiply each element by 2)
    transform(v.begin(), v.end(), v.begin(), [](int x){ return x * 2; });
    cout << "After multiplying each element by 2: ";
    for(int x : v) cout << x << " ";
    cout << "\n";

    // 11. Lower bound / Upper bound (need sorted vector)
    sort(v.begin(), v.end());
    auto lb = lower_bound(v.begin(), v.end(), 4);
    auto ub = upper_bound(v.begin(), v.end(), 4);
    cout << "Lower bound of 4: " << (lb - v.begin()) << "\n";
    cout << "Upper bound of 4: " << (ub - v.begin()) << "\n";

    // 12. all_of / any_of / none_of
    cout << "All elements > 0? " << (all_of(v.begin(), v.end(), [](int x){ return x>0; }) ? "Yes" : "No") << "\n";
    cout << "Any element > 20? " << (any_of(v.begin(), v.end(), [](int x){ return x>20; }) ? "Yes" : "No") << "\n";
    cout << "No element < 0? " << (none_of(v.begin(), v.end(), [](int x){ return x<0; }) ? "Yes" : "No") << "\n";

    return 0;
}
