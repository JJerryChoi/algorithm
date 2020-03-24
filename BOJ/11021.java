import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int testCase = scanner.nextInt();
        for(int tc = 1; tc <= testCase; ++tc) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            System.out.println("Case #" + tc + ": " + (a + b));
        }
    }
}
