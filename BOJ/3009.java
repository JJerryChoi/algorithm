import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int x = 0;
        int y = 0;
        for(int i = 0; i < 3; ++i) {
            x ^= scanner.nextInt();
            y ^= scanner.nextInt();
        }
        System.out.print(x);
        System.out.print(' ');
        System.out.print(y);
    }
}
