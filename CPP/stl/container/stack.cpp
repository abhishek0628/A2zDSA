#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;

    // 1. push() – insert element
    st.push(10);
    st.push(20);
    st.push(30);

    // Stack now: [10, 20, 30] (30 is top)

    // 2. top() – access top element
    cout << "Top element: " << st.top() << endl;  // 30

    // 3. size() – number of elements
    cout << "Stack size: " << st.size() << endl;  // 3

    // 4. empty() – check if stack is empty
    if (!st.empty())
        cout << "Stack is not empty" << endl;

    // 5. pop() – remove top element
    st.pop();  // removes 30

    cout << "Top after pop: " << st.top() << endl; // 20

    // 6. push again
    st.push(40);

    cout << "Top now: " << st.top() << endl; // 40

    // 7. Pop all elements
    cout << "Popping elements: ";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    // 8. Final empty check
    if (st.empty())
        cout << "Stack is empty now" << endl;

    return 0;
}
