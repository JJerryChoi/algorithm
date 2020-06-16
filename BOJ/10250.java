import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for(int tc = 0; tc < t; ++tc){
            int h = scanner.nextInt();
            int w = scanner.nextInt();
            int n = scanner.nextInt();
            int floor = n % h;
            int roomNumber = n / h + 1;
            if(floor == 0) {
                floor = h;
                roomNumber -= 1;
            }
            System.out.print(floor);
            System.out.format("%02d\n", roomNumber);
        }
    }
}
