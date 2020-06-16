import java.util.Scanner;
import static java.lang.Math.sqrt;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int nPrime = 0;
        for(int i = 0; i < n; ++i) {
            int k = scanner.nextInt();
            if(isPrime(k))
                ++nPrime;
        }
        System.out.print(nPrime);
    }

    static boolean isPrime(int k){
        if(k == 1)
            return false;
        for(int i = 2; i <= sqrt(k); ++i){
            if(k % i == 0)
                return false;
        }
        return true;
    }
}
