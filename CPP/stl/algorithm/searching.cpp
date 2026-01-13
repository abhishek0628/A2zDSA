#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9, 3, 5};

    // 1. find -> returns iterator to first occurrence
    auto it = find(v.begin(), v.end(), 5);
    if(it != v.end())
        cout << "Found 5 at index: " << distance(v.begin(), it) << endl;
    else
        cout << "5 not found\n";

    // 2. count -> number of occurrences
    int cnt = count(v.begin(), v.end(), 3);
    cout << "3 appears " << cnt << " times\n";

    // 3. count_if -> count elements satisfying a condition
    int even_count = count_if(v.begin(), v.end(), [](int x){ return x % 2 == 0; });
    cout << "Number of even elements: " << even_count << endl;

    // 4. binary_search -> check if element exists (container must be sorted)
    sort(v.begin(), v.end());  // binary_search needs sorted container
    if(binary_search(v.begin(), v.end(), 7))
        cout << "7 exists in vector\n";
    else
        cout << "7 does not exist\n";

    // 5. lower_bound -> first element >= value
    auto lb = lower_bound(v.begin(), v.end(), 5);
    cout << "Lower bound of 5 at index: " << distance(v.begin(), lb) << endl;

    // 6. upper_bound -> first element > value
    auto ub = upper_bound(v.begin(), v.end(), 5);
    cout << "Upper bound of 5 at index: " << distance(v.begin(), ub) << endl;

    // 7. any_of, all_of, none_of
    bool any_gt_8 = any_of(v.begin(), v.end(), [](int x){ return x > 8; });
    bool all_positive = all_of(v.begin(), v.end(), [](int x){ return x > 0; });
    bool none_negative = none_of(v.begin(), v.end(), [](int x){ return x < 0; });

    cout << "Any element > 8? " << (any_gt_8 ? "Yes" : "No") << endl;
    cout << "All elements positive? " << (all_positive ? "Yes" : "No") << endl;
    cout << "No element negative? " << (none_negative ? "Yes" : "No") << endl;

    return 0;
}
