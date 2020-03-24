import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = (a%10)*10 + (a/10 + a%10)%10;
        int ans = 1;
        while(a != b){
            b = (b%10)*10 + (b/10 + b%10)%10;
            ++ans;
        }
        System.out.print(ans);
    }
}
