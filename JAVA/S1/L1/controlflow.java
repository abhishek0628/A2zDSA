import java.util.Scanner;
public class controlflow
{
    public static void main(String [] args)
    {
        Scanner sc=new Scanner(System.in);
        // int age=sc.nextInt();
        // if(age>=18)
        // {
        //     System.out.println("you can vote");
        // }
        // else 
        // System.out.println("you can not vote");

        // char c=sc.next().charAt(0);
        // switch(c)
        // {
        //     case 'a':System.out.println("this is a");
        //               break;
        //     case 'b':System.out.println("this is b");
        //     break;
        //     default:System.out.println("invalid");
        // }
        for (int i = 1; i <= 5; i++) {
                System.out.println("Count: " + i);
            }

            int i = 1;
while (i <= 5) {
    System.out.println("Count: " + i);
    i++;
}
int j = 1;
do {
    System.out.println("Count: " + j);
    i++;
} while (i <= 5);



    }
}