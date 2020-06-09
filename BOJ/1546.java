import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int nSubject = scanner.nextInt();
        double[] scores = new double[nSubject];
        double maxScore = 0;
        for (int i = 0; i < nSubject; ++i) {
            scores[i] = scanner.nextDouble();
            maxScore = Math.max(maxScore, scores[i]);
        }

        double totalScore = 0;
        for (int i = 0; i < nSubject; ++i)
            totalScore += scores[i] / maxScore * 100;
        double averageScore = totalScore / nSubject;
        System.out.print(averageScore);
    }
}
