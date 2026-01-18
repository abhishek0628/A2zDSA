class Animal {
    void sound() {
        System.out.println("animal sound");
    }
}

class Dog extends Animal {
    @Override
    void sound() {
        System.out.println("bark");
    }
}
public class runtime{
    public static void main(String[] args){
        Animal d=new Dog();
        d.sound();
    }
}