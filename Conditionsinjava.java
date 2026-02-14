import java.util.Scanner;

public class Conditionsinjava {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Leap year
        System.out.print("Enter a year: ");
        int year = sc.nextInt();
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            System.out.println("It is a leap year");
        } else {
            System.out.println("It is not a leap year");
        }

        // Greatest of 3 numbers
        System.out.print("Enter a: ");
        int a = sc.nextInt();
        System.out.print("Enter b: ");
        int b = sc.nextInt();
        System.out.print("Enter c: ");
        int c = sc.nextInt();

        if (a > b) {
            if (a > c)
                System.out.println("a is greatest");
            else
                System.out.println("c is greatest");
        } else {
            if (b > c)
                System.out.println("b is greatest");
            else
                System.out.println("c is greatest");
        }

        // If-else ladder
        System.out.print("Enter an integer: ");
        int num = sc.nextInt();

        if (num > 0) {
            System.out.println("The number is positive.");
        } else if (num < 0) {
            System.out.println("The number is negative.");
        } else {
            System.out.println("The number is zero.");
        }

        sc.close();
    }
}
