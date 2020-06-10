import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        for(int tc = 0; tc < T; ++tc){
            int R = scanner.nextInt();
            String S = scanner.next();

            for(int i = 0; i < S.length(); ++i)
                for(int j = 0; j < R; ++j)
                    System.out.print(S.charAt(i));
            System.out.print('\n');
        }
    }
}
