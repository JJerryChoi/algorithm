import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int steps = 1;
        int maxRoomNumber = 1;
        while(maxRoomNumber < n){
            maxRoomNumber += steps * 6;
            ++steps;
        }
        System.out.print(steps);
    }
}
