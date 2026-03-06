#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal makes a sound\n"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Dog barks\n"; }
};

class Cat : public Animal {
public:
    void sound() override { cout << "Cat meows\n"; }
};

int main() {
    Animal* a;

    Dog d;
    Cat c;

    a = &d;
    a->sound();  // Dog barks

    a = &c;
    a->sound();  // Cat meows
}
