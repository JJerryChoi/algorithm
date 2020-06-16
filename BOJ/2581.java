import java.util.Scanner;
import static java.lang.Math.sqrt;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        int minPrime = -1;
        int sumPrimes = 0;
        for(int i = n; i <= m; ++i) {
            if(isPrime(i)) {
                if(minPrime == -1)
                    minPrime = i;
                sumPrimes += i;
            }
        }
        if(minPrime == -1)
            System.out.print(minPrime);
        else {
            System.out.println(sumPrimes);
            System.out.print(minPrime);
        }
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
