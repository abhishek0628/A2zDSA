import java.util.Scanner;
public class _7_whileloops{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
int num;

System.out.println("Enter numbers (0 to stop):");
num = sc.nextInt();

while (num != 0) {
    System.out.println("You entered: " + num);
    num = sc.nextInt();
}
System.out.println("Loop ended.");
sc.close();
    }
}

