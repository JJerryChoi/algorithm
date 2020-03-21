import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int year = scanner.nextInt();

        int leapYear = isLeapYear(year);
        System.out.print(leapYear);
    }

    private static int isLeapYear(int year) {
        if(year % 400 == 0)
            return 1;
        if(year % 100 == 0)
            return 0;
        if(year % 4 == 0)
            return 1;
        return 0;
    }
}
