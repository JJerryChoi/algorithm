import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int nFiveBags = n / 5;
        int nThreeBags = 0;
        int sum = nFiveBags * 5 + nThreeBags * 3;
        int nBags = nFiveBags;
        while(n != sum){
            if(nFiveBags < 0){
                nBags = -1;
                break;
            }
            if(n - sum < 3)
                --nFiveBags;
            
            ++nThreeBags;
            sum = nFiveBags * 5 + nThreeBags * 3;
            nBags = nFiveBags + nThreeBags;
        }
        System.out.print(nBags);
    }
}
