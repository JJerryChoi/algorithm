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
        int n = scanner.nextInt();
        int m = scanner.nextInt();
        primeNumbers = new ArrayList<Boolean>(m+1);
        Eratosthenes(m);

        for(int i = n; i <= m; ++i) {
            if(primeNumbers.get(i))
                System.out.println(i);
        }
    }
}
