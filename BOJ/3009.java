import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] x = new int[4];
        int[] y = new int[4];
        for(int i = 0; i < 3; ++i) {
            x[i] = scanner.nextInt();
            y[i] = scanner.nextInt();
        }
        if(x[0] == x[1])
            x[3] = x[2];
        else if(x[0] == x[2])
            x[3] = x[1];
        else
            x[3] = x[0];
        if(y[0] == y[1])
            y[3] = y[2];
        else if(y[0] == y[2])
            y[3] = y[1];
        else
            y[3] = y[0];
        System.out.print(x[3]);
        System.out.print(' ');
        System.out.print(y[3]);
    }
}
