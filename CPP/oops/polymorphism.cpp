// #include<iostream>
// using namespace std;
// class Print{
//     public:
//     void show(int x){
//         cout<<"Int "<<x;
//     }
//     void show(double y){
//         cout<<"double "<<y;
//     }
// };
// class Complex {
// public:
//     int r, i;
//     Complex(int r, int i) : r(r), i(i) {}

//     Complex operator + (const Complex& other) {
//         return Complex(r + other.r, i + other.i);
//     }
// };


#include <iostream>
using namespace std;

class Animal {
public:
    virtual void speak() {
        cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() override {
        cout << "Woof!" << endl;
    }
};

class Cat : public Animal {
public:
    void speak() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    Animal* a1 = new Dog();
    Animal* a2 = new Cat();

    a1->speak();   // Woof!
    a2->speak();   // Meow!
}

