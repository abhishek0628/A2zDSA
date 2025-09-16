class Animal{
    void eat()
    {
        System.out.println("animal eats");
    }
     void sound()
    {
        System.out.println("animal makes sound");
    }
    protected void display()
    {
        System.out.println("displayed");
    }
}
class dog extends Animal{
    void bark()
    {
        System.out.println("dog barks");
    }
    @Override
    void sound()

    {
        System.out.println("dog barks");
    }
    @Override
    public void display()
    {
        System.out.println("displayed in the child class");
    }
}
//multiple inheritance
class puppy extends dog{
    void play()
    {
        System.out.println("puppy plays");
    }
}

//multiple inheritance
class cat extends dog
{
    void meow()
    {
        System.out.println("meow");
    }
}
public class inheritance
{
    public static void main(String[] args) {
        {
            Animal a=new Animal();
            dog d=new dog();
            puppy p=new puppy();
            cat c=new cat();
            // a.eat();
            // d.eat();
            d.sound();
            d.display();
            // d.bark();
            // p.play();
            // c.meow();

        }
    }
}