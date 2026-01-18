import java.util.Scanner;

public class _6_forloops{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // 1. Traditional for loop
        System.out.println("Traditional for loop (1 to 5):");
        for (int i = 1; i <= 5; i++) {
            System.out.print(i + " ");
        }
        System.out.println("\n");

        // 2. For loop with step
        System.out.println("For loop with step (even numbers 0 to 10):");
        for (int i = 0; i <= 10; i += 2) {
            System.out.print(i + " ");
        }
        System.out.println("\n");

        // 3. For loop counting backward
        System.out.println("Counting backward (5 to 1):");
        for (int i = 5; i >= 1; i--) {
            System.out.print(i + " ");
        }
        System.out.println("\n");

        // 4. Enhanced for loop (for-each) with array
        int[] arr = {10, 20, 30, 40};
        System.out.println("Enhanced for loop (array elements):");
        for (int num : arr) {
            System.out.print(num + " ");
        }
        System.out.println("\n");

        // 5. Nested for loop (matrix)
        System.out.println("Nested for loop (3x3 matrix):");
        for (int i = 1; i <= 3; i++) {
            for (int j = 1; j <= 3; j++) {
                System.out.print(i * j + " "); // prints multiplication table
            }
            System.out.println();
        }
        System.out.println();

        // 6. Reading array input using traditional for loop
        System.out.print("Enter size of array: ");
        int n = sc.nextInt();
        int[] userArr = new int[n];

        System.out.println("Enter " + n + " integers:");
        for (int i = 0; i < n; i++) {
            userArr[i] = sc.nextInt();
        }

        System.out.println("You entered:");
        for (int num : userArr) {
            System.out.print(num + " ");
        }

        sc.close();
    }
}
