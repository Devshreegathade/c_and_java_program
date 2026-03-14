import java.time.LocalDate;
import java.time.Period;
import java.util.Scanner;

public class AgeCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your birthdate (YYYY-MM-DD): ");
        String input = scanner.nextLine();
        scanner.close();

        LocalDate birthDate = LocalDate.parse(input);
        LocalDate currentDate = LocalDate.now();
        Period period = Period.between(birthDate, currentDate);

        System.out.printf("You are %d years, %d months, and %d days old.%n",
                period.getYears(), period.getMonths(), period.getDays());
    }
}   
