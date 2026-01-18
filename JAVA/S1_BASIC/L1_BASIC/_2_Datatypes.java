import java.util.Scanner;

public class _2_Datatypes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a byte: ");
        byte b = sc.nextByte();

        System.out.print("Enter a short: ");
        short s = sc.nextShort();

        System.out.print("Enter an int: ");
        int i = sc.nextInt();

        System.out.print("Enter a long: ");
        long l = sc.nextLong();

        System.out.print("Enter a float: ");
        float f = sc.nextFloat();

        System.out.print("Enter a double: ");
        double d = sc.nextDouble();

        System.out.print("Enter a char: ");
        char c = sc.next().charAt(0);

        System.out.print("Enter a boolean (0 or 1 / true/false): ");
        String boolInput = sc.next();
        boolean bool = boolInput.equals("true") || boolInput.equals("1");

        sc.nextLine(); // consume leftover newline
        System.out.print("Enter a String: ");
        String str = sc.nextLine();

        System.out.println("\nYou entered:");
        System.out.println("byte: " + b);
        System.out.println("short: " + s);
        System.out.println("int: " + i);
        System.out.println("long: " + l);
        System.out.println("float: " + f);
        System.out.println("double: " + d);
        System.out.println("char: " + c);
        System.out.println("boolean: " + bool);
        System.out.println("String: " + str);

        sc.close();
    }
}
