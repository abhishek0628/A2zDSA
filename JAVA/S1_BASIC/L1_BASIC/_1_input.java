import java.util.Scanner;

public class _1_input {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter an int: ");
        int n = sc.nextInt();

        System.out.print("Enter a float: ");
        float f = sc.nextFloat();

        System.out.print("Enter a double: ");
        double d = sc.nextDouble();

        System.out.print("Enter a long: ");
        long l = sc.nextLong();

        System.out.print("Enter a boolean(true or false): ");
        boolean b = sc.nextBoolean();

        System.out.print("Enter a char: ");
        char ch = sc.next().charAt(0);

        sc.nextLine(); // consume leftover newline

        System.out.print("Enter a word: ");
        String word = sc.next();

        sc.nextLine(); // consume leftover newline
        System.out.print("Enter a line: ");
        String line = sc.nextLine();

        System.out.println("\nYou entered:");
        System.out.println("int: " + n);
        System.out.println("float: " + f);
        System.out.println("double: " + d);
        System.out.println("long: " + l);
        System.out.println("boolean: " + b);
        System.out.println("char: " + ch);
        System.out.println("word: " + word);
        System.out.println("line: " + line);

        sc.close();
    }
}
