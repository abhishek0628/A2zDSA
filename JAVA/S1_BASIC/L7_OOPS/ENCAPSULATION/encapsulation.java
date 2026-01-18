
class Student {
    private int age;   // hidden data
    

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        if (age > 0) {
            this.age = age;
        }
    }
    
}
public class encapsulation{
    public static void main(String[] args){
        Student s=new Student();
        s.setAge(18);
        System.out.println(s.getAge());

    }
}
