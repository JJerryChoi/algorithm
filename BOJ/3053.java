import java.util.Scanner;

public class Main{
    static final double pi = 3.14159265359;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double r = scanner.nextDouble();
        System.out.println(pi*r*r);
        System.out.print(2*r*r);
    }
}
