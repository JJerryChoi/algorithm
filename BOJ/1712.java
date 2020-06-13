import java.util.Scanner;

public class Main{
    static long FindBreakEvenPoint(long a, long b, long c){
        if(b >= c)
            return -1;
        long profit = c - b;
        long need = a / profit;
        return need+1;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        long a = scanner.nextLong();
        long b = scanner.nextLong();
        long c = scanner.nextLong();
        long answer = FindBreakEvenPoint(a, b, c);
        System.out.print(answer);
    }
}
