import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long a = scanner.nextLong();
        long b = scanner.nextLong();
        long v = scanner.nextLong();
        long days = (v-a)/(a-b) + 1;
        days += (v-a)%(a-b) == 0 ? 0 : 1;
        System.out.print(days);
    }
}
