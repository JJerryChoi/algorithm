import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int temp = scanner.nextInt();
        int min = temp, max = temp;
        for(int i = 1; i < n; ++i) {
            temp = scanner.nextInt();
            min = Math.min(temp, min);
            max = Math.max(temp, max);
        }
        System.out.print(min + " " + max);
    }
}
