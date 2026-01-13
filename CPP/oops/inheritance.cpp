// #include<iostream>
// using namespace std;
// class Vehicle{
//     public:
//     string brand;
//     void start()
//     {
//         cout<<brand<<" is starting";
//     }
// };
// class car:public Vehicle{
//     public:
//     string model;
//     void info()
//     {
//         cout<<brand<<" "<<model;
//     }
// };
// int main()
// {
//     car c;
//     c.brand="toyota";
//     c.model="corolla";
//     c.info();
//     return 0;

// }

// #include <iostream>
// using namespace std;

// class A {
// public:
//     void displayA() { cout << "Class A" << endl; }
// };

// class B {
// public:
//     void displayB() { cout << "Class B" << endl; }
// };

// class C : public A, public B {
// };

// int main() {
//     C obj;
//     obj.displayA();
//     obj.displayB();
//     return 0;
// }
#include <iostream>
using namespace std;

class A {
public:
    void displayA() { cout << "Class A" << endl; }
};

class B {
public:
    void displayB() { cout << "Class B" << endl; }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    return 0;
}

