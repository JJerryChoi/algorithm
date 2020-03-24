import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();
        if(a > b){
            if(b > c)
                System.out.print(b);
            else { // b <= c
                if(a > c)
                    System.out.print(c);
                else // a <= c
                    System.out.print(a);
            }
        }
        else{ // b >= a
            if(a > c)
                System.out.print(a);
            else{ // a <= c
                if(b > c)
                    System.out.print(c);
                else // b <= c
                    System.out.print(b);
            }
        }
    }
}
