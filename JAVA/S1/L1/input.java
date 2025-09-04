
import java.util.Scanner;
public class input
{
    public static void main(String[] args) {
        {
            Scanner sc=new Scanner(System.in);
            System.out.print("enter integer value :");
            int num=sc.nextInt();//integer input
            System.out.print("enter string value :");
            sc.nextLine();//consume next line
            String str=sc.nextLine();//string input
            System.out.print("enter Long value :");
            Long l=sc.nextLong();
            System.out.print("enter byte value :");
            byte b=sc.nextByte();
            System.out.print("enter short value :");
            short s=sc.nextShort();
            System.out.print("Enter a float: ");
            float f = sc.nextFloat();

            System.out.print("Enter a double: ");
            double d = sc.nextDouble();

            System.out.print("Enter a character: ");
            char c = sc.next().charAt(0);

            System.out.print("Enter true or false: ");
            boolean bool = sc.nextBoolean();

            System.out.print("Enter a word: ");
            String word = sc.next(); // reads one word


            System.out.println(num);
            System.out.println(str);
            System.out.println(l);
            System.out.println(b);
            System.out.println(s);
            System.out.println(f);
            System.out.println(d);
            System.out.println(c);
            System.out.println(bool);
            System.out.println(word);
            // System.out.println(s);
            // System.out.println(f);

        }
    }
}