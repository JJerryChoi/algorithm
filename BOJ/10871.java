import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int X = scanner.nextInt();
        for(int n = 0; n < N; ++n){
            int x = scanner.nextInt();
            if(x < X)
                System.out.print(x + " ");
        }
    }
}
