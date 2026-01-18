import java.util.Scanner;

public class _8_function {

    // 1. Void method (no return, no parameters)
    static void greet() {
        System.out.println("Hello, welcome!");
    }

    // 2. Void method with parameters
    static void greetPerson(String name) {
        System.out.println("Hello, " + name + "!");
    }

    // 3. Method returning int
    static int add(int a, int b) {
        return a + b;
    }

    // 4. Method returning String
    static String greetUser(String name) {
        return "Welcome, " + name + "!";
    }

    // 5. Overloaded methods
    static int multiply(int a, int b) {
        return a * b;
    }
    static double multiply(double a, double b) {
        return a * b;
    }

    // 6. Method working with array
    static int arraySum(int[] arr) {
        int sum = 0;
        for (int num : arr) {
            sum += num;
        }
        return sum;
    }

    // 7. Recursive method (factorial)
    static int factorial(int n) {
        if (n <= 1) return 1;
        return n * factorial(n - 1);
    }

    // 8. Method with multiple parameters
    static int average(int a, int b, int c) {
        return (a + b + c) / 3;
    }

    // 9. Method returning boolean
    static boolean isEven(int n) {
        return n % 2 == 0;
    }

    // 10. Method working with strings
    static int stringLength(String str) {
        return str.length();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 1. Void method
        greet();
        System.out.println();

        // 2. Void method with parameters
        System.out.print("Enter your name: ");
        String name = sc.nextLine();
        greetPerson(name);
        System.out.println();

        // 3. Method returning int
        System.out.print("Enter two numbers to add: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("Sum = " + add(a, b));
        System.out.println();

        // 4. Method returning String
        System.out.println(greetUser(name));
        System.out.println();

        // 5. Overloaded methods
        System.out.print("Enter two numbers to multiply (int): ");
        int x = sc.nextInt();
        int y = sc.nextInt();
        System.out.println("Multiplication (int) = " + multiply(x, y));

        System.out.print("Enter two numbers to multiply (double): ");
        double p = sc.nextDouble();
        double q = sc.nextDouble();
        System.out.println("Multiplication (double) = " + multiply(p, q));
        System.out.println();

        // 6. Array sum
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter " + n + " integers:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Array sum = " + arraySum(arr));
        System.out.println();

        // 7. Recursive factorial
        System.out.print("Enter a number to calculate factorial: ");
        int factNum = sc.nextInt();
        System.out.println("Factorial of " + factNum + " = " + factorial(factNum));
        System.out.println();

        // 8. Average of three numbers
        System.out.print("Enter three numbers to calculate average: ");
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();
        int n3 = sc.nextInt();
        System.out.println("Average = " + average(n1, n2, n3));
        System.out.println();

        // 9. Check if number is even
        System.out.print("Enter a number to check even/odd: ");
        int checkNum = sc.nextInt();
        System.out.println(checkNum + " is even? " + isEven(checkNum));
        System.out.println();

        sc.nextLine(); // consume leftover newline

        // 10. String length
        System.out.print("Enter a string to find length: ");
        String str = sc.nextLine();
        System.out.println("Length of string = " + stringLength(str));

        sc.close();
    }
}
