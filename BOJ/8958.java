import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int nTestCase = scanner.nextInt();
        for(int tc = 0; tc < nTestCase; ++tc){
            String result = scanner.next();
            int straightCorrect = 1;
            int score = 0;
            for(int i = 0; i < result.length(); ++i){
                if(result.charAt(i) == 'O'){
                    score += straightCorrect;
                    ++straightCorrect;
                }
                else
                    straightCorrect = 1;
            }
            System.out.println(score);
        }
    }
}
