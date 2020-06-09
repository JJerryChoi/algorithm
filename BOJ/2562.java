import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int max = 0;
        int maxIndex = 0;
        for(int i = 0; i < 9; ++i) {
            int now = scanner.nextInt();
            if (max < now) {
                max = now;
                maxIndex = i + 1;
            }
        }
        System.out.println(max);
        System.out.print(maxIndex);
    }
}
