import java.util.Scanner;
public class _3_ifelse{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter age: ");
        int age=sc.nextInt();
        if(age<0 || age>125){
            System.out.println("invalid age");
            return;
        }
        if(age<18){
            System.out.println("minor, can not vote");
        }
        else if(age>18 && age<25){
            System.out.println("can vote but can not contest for election");
        }
        else{
            System.out.println("can do both");
        }
    }
}