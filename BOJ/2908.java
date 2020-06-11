import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String a = scanner.next();
        String b = scanner.next();
        int rA = Integer.parseInt(ReverseString(a));
        int rB = Integer.parseInt(ReverseString(b));
        if(rA > rB)
            System.out.print(rA);
        else
            System.out.print(rB);
    }

    static String ReverseString(String s){
        return new StringBuffer(s).reverse().toString();
    }
}
