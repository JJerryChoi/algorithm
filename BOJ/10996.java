import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        for(int i = 0; i < 2*n; ++i){
            for(int j = 0; j < n; ++j)
                if((i+j)%2 == 1)
                    System.out.print(' ');
                else
                    System.out.print('*');
            System.out.print('\n');
        }
    }
}
