#include <iostream>
#include <stack>
using namespace std;

int main() {
    // 1. Create a stack
    stack<int> st;

    cout << "=== Stack Operations Demo ===\n\n";

    // 2. Check if empty
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;

    // 3. Push elements
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "\nAfter pushing 10, 20, 30, 40\n";
    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;

    // 4. Pop elements
    st.pop();
    cout << "\nAfter pop()\n";
    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;

    // 5. Push another element
    st.push(50);
    cout << "\nAfter pushing 50\n";
    cout << "Top element: " << st.top() << endl;
    cout << "Stack size: " << st.size() << endl;

    // 6. Access all elements (iterate by popping)
    cout << "\nPopping all elements:\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\nIs stack empty now? " << (st.empty() ? "Yes" : "No") << endl;

    return 0;
}
