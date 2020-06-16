import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for(int tc = 0; tc < t; ++tc){
            int x = scanner.nextInt();
            int y = scanner.nextInt();
            int d = y - x;
            int n = 1;
            long max = 1;
            while(d > max){
                ++n;
                int m = n / 2;
                max = m*(m+1);
                if(n%2 == 1)
                    max += m+1;
            }
            System.out.println(n);
        }
    }
}
