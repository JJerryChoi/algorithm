import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int nTestCase = scanner.nextInt();
        for(int tc = 0; tc < nTestCase; ++tc){
            int nStudent = scanner.nextInt();
            int[] scores = new int[nStudent];
            double totalScore = 0;
            for(int i = 0; i < nStudent; ++i){
                scores[i] = scanner.nextInt();
                totalScore += scores[i];
            }
            double averageScore = totalScore / nStudent;

            int nOverAverageStudent = 0;
            for(int i = 0; i < nStudent; ++i)
                if(scores[i] > averageScore)
                    ++nOverAverageStudent;
            double rate = (double)nOverAverageStudent / nStudent * 100;
            System.out.println(String.format("%.3f", rate) + '%');
        }
    }
}
