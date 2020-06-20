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
        primeNumbers = new ArrayList<Boolean>(10000+1);
        Eratosthenes(10000);

        int T = scanner.nextInt();
        for(int tc = 0; tc < T; ++tc){
            int n = scanner.nextInt();
            int a = 0, b = 0;
            for(int i = 2; i <= n / 2; ++i){
                if(primeNumbers.get(i) && primeNumbers.get(n-i)){
                    a = i;
                    b = n-i;
                }
            }
            System.out.print(a);
            System.out.print(' ');
            System.out.println(b);
        }
    }
}
