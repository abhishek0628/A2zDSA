class Animal{
    void makesound(){
        System.out.println("makes sound");
    }
}
class Dog extends Animal{
    void bark(){
        System.out.println("barks");
    }
}
class puppy extends Dog{
    void weep(){
        System.out.println("weep");
    }
}