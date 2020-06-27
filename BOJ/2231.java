import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int generator = 0;
        for(int i = 1; i < n; ++i){
            String string = Integer.toString(i);
            int sum = i;
            for(int j = 0; j < string.length(); ++j)
                sum += string.charAt(j) - '0';
            if(sum == n) {
                generator = i;
                break;
            }
        }
        System.out.print(generator);
    }
}
