#include<iostream>
using namespace std;
class Animal {
public:
    void eat() { cout << "Animal eats" << endl; }
};

class Mammal : public Animal {
public:
    void walk() { cout << "Mammal walks" << endl; }
};

class Dog : public Mammal {
public:
    void bark() { cout << "Dog barks" << endl; }
};

int main() {
    Dog d;
    d.eat();  // from Animal
    d.walk(); // from Mammal
    d.bark(); // own
}
