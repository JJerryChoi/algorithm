import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int setPrice = -50;
        int[] bugerPrice = new int[3];
        for(int i = 0; i < 3; ++i)
            bugerPrice[i] = scanner.nextInt();
        setPrice += Math.min(bugerPrice[0], Math.min(bugerPrice[1], bugerPrice[2]));

        int[] beveragePrice = new int[2];
        for(int i = 0; i < 2; ++i)
            beveragePrice[i] = scanner.nextInt();
        setPrice += Math.min(beveragePrice[0], beveragePrice[1]);

        System.out.print(setPrice);
    }
}
