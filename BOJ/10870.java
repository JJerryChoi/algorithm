import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int nFactorial = ComputeFibonacci(n);
        System.out.print(nFactorial);
    }
    static int ComputeFibonacci(int n){
        if(n == 0)
            return 0;
        else if(n == 1)
            return 1;
        return ComputeFibonacci(n-1) + ComputeFibonacci(n-2);
    }
}
