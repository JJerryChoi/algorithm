import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int score = scanner.nextInt();

        char grade = makeGrade(score);
        System.out.print(grade);
    }

    private static char makeGrade(int score) {
        if(score >= 90)
            return 'A';
        if(score >= 80)
            return 'B';
        if(score >= 70)
            return 'C';
        if(score >= 60)
            return 'D';
        return 'F';
    }
}
