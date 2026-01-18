abstract class Animal {
    abstract void sound();   // abstract method

    void eat() {              // concrete method
        System.out.println("eating");
    }
}
class Dog extends Animal {
    void sound() {
        System.out.println("bark");
    }
}
