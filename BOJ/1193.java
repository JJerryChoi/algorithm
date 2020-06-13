import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = scanner.nextInt();
        int n = 1;
        while (n * (n + 1) / 2 < x)
            ++n;
        x -= (n - 1) * n / 2;

        int denominator, numerator;
        if (n % 2 == 0) {
            denominator = n - x + 1;
            numerator = x;
        } else {
            denominator = x;
            numerator = n - x + 1;
        }
        System.out.print(numerator);
        System.out.print('/');
        System.out.print(denominator);
    }
}
