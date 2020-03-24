import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int average = 0;
        for(int i = 0; i < 5; ++i) {
            int score = scanner.nextInt();
            average += Math.max(score, 40);
        }
        average /= 5;
        System.out.print(average);
    }
}
