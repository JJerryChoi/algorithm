import java.util.Scanner;

public class Main{
    static final double pi = 3.14159265359;
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int T = scanner.nextInt();
        for(int tc = 0; tc < T; ++tc){
            int x1 = scanner.nextInt();
            int y1 = scanner.nextInt();
            int r1 = scanner.nextInt();
            int x2 = scanner.nextInt();
            int y2 = scanner.nextInt();
            int r2 = scanner.nextInt();
            int dCenterSquare = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
            int rSumSquare = (r1+r2) * (r1+r2);
            int rDiffSquare = (r1-r2) * (r1-r2);
            if(dCenterSquare == 0 && rDiffSquare == 0)
                System.out.println(-1);
            else if(rSumSquare == dCenterSquare || rDiffSquare == dCenterSquare)
                System.out.println(1);
            else if(rSumSquare < dCenterSquare || rDiffSquare > dCenterSquare)
                System.out.println(0);
            else
                System.out.println(2);
        }
    }
}
