#include <iostream>
#include <array>
using namespace std;

int main() {
    array<int,5> arr = {10, 20, 30, 40, 50};
    
    cout << "Original: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    arr[2] = 100;
    arr.at(4) = 500;

    cout << "Modified: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    arr.fill(0);
    cout << "After fill: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    array<int,5> arr2 = {1,2,3,4,5};
    arr.swap(arr2);

    cout << "Arr after swap: ";
    for(int x : arr) cout << x << " ";
    cout << endl;

    cout << "Arr2 after swap: ";
    for(int x : arr2) cout << x << " ";
    cout << endl;

    cout << "Size of arr: " << arr.size() << endl;
    cout << "First element: " << arr.front() << ", Last element: " << arr.back() << endl;
}
