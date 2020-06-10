import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] numbers = new int[n];
        int nHanSu = findNumberOfHanSu(n);
        System.out.print(nHanSu);
    }

    static int findNumberOfHanSu(int n){
        if(n < 100)
            return n;

        int nHansu = 99;
        for(int i = 100; i <= n; ++i){
            String number = String.valueOf(i);
            int diff = number.charAt(1) - number.charAt(0);
            for(int j = 2; j < number.length(); ++j){
                if(diff != number.charAt(j) - number.charAt(j-1)){
                    --nHansu;
                    break;
                }
            }
            ++nHansu;
        }
        return nHansu;
    }
}
