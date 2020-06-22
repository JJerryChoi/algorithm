import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int nFactorial = ComputeFactorial(n);
        System.out.print(nFactorial);
    }
    static int ComputeFactorial(int n){
        if(n == 0)
            return 1;
        return n * ComputeFactorial(n-1);
    }
}
