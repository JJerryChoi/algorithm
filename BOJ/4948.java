import java.util.ArrayList;
import java.util.Scanner;

public class Main{
    static ArrayList<Boolean> primeNumbers;
    static void Eratosthenes(int m){
        for(int i = 0; i <= m; ++i){
            if(i < 2) {
                primeNumbers.add(i, false);
                continue;
            }
            primeNumbers.add(i, true);
        }
        for(int i = 2; i*i <= primeNumbers.size(); ++i){
            if(primeNumbers.get(i)){
                for(int j = i*2; j < primeNumbers.size(); j+=i)
                    primeNumbers.set(j, false);
            }
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        primeNumbers = new ArrayList<Boolean>(123456*2+1);
        Eratosthenes(123456*2);

        int n = scanner.nextInt();
        while(n != 0) {
            int nPrimes = 0;
            for (int i = n+1; i <= 2*n; ++i) {
                if (primeNumbers.get(i))
                    ++nPrimes;
            }
            System.out.println(nPrimes);
            n = scanner.nextInt();
        }
    }
}
