class Animal{
    void makesound(){
        System.out.println("makes sound");
    }
};
class Dog extends Animal{
    @Override
    void makesound(){
        System.out.println("barking");
    }
    void sound(){
        System.out.println("bark");
    }
}
public class test{
    public static void main(String[]args){
        Animal a=new Animal();
        // Dog d=new Dog();
        Animal d=new Dog();
        a.makesound();
        d.makesound();
        
    }
}