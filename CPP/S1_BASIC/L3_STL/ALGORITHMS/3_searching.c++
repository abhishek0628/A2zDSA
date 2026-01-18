#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
using namespace std;

int main() {
    cout << "=== STL Searching Operations Demo ===\n\n";

    // -----------------------------
    // 1. Vector example
    // -----------------------------
    vector<int> v = {10, 20, 30, 30, 40, 50};
    cout << "--- Vector ---\n";

    // find()
    auto it = find(v.begin(), v.end(), 30);
    if(it != v.end())
        cout << "find(): Found 30 at index " << it - v.begin() << endl;
    else
        cout << "find(): 30 not found" << endl;

    // count()
    int cnt = count(v.begin(), v.end(), 30);
    cout << "count(): 30 occurs " << cnt << " times\n";

    // binary_search() requires sorted container
    sort(v.begin(), v.end());
    if(binary_search(v.begin(), v.end(), 40))
        cout << "binary_search(): 40 found\n";
    else
        cout << "binary_search(): 40 not found\n";

    // lower_bound / upper_bound
    auto lb = lower_bound(v.begin(), v.end(), 30);
    auto ub = upper_bound(v.begin(), v.end(), 30);
    cout << "lower_bound(30) at index " << lb - v.begin() << endl;
    cout << "upper_bound(30) at index " << ub - v.begin() << endl;
    cout << "Count of 30 using bounds = " << ub - lb << endl;

    cout << "\n";

    // -----------------------------
    // 2. Set example
    // -----------------------------
    set<int> s = {10, 20, 30, 40};
    cout << "--- Set ---\n";

    if(s.find(20) != s.end())
        cout << "set.find(): 20 found\n";
    else
        cout << "set.find(): 20 not found\n";

    if(s.find(50) != s.end())
        cout << "set.find(): 50 found\n";
    else
        cout << "set.find(): 50 not found\n";

    cout << "\n";

    // -----------------------------
    // 3. Map example
    // -----------------------------
    map<string, int> m = {{"Alice", 85}, {"Bob", 90}, {"Charlie", 78}};
    cout << "--- Map ---\n";

    string key = "Bob";
    auto mit = m.find(key);
    if(mit != m.end())
        cout << "map.find(): " << key << " found with value " << mit->second << endl;
    else
        cout << "map.find(): " << key << " not found\n";

    key = "David";
    mit = m.find(key);
    if(mit != m.end())
        cout << "map.find(): " << key << " found with value " << mit->second << endl;
    else
        cout << "map.find(): " << key << " not found\n";

    cout << "\nAll done.\n";

    return 0;
}
