import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int average = 0;
        for(int i = 0; i < 5; ++i) {
            int score = scanner.nextInt();
            if(score < 40)
                score = 40;
            average += score;
        }
        average /= 5;
        System.out.print(average);
    }
}
