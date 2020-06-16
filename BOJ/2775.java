import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        int[][] apartment = new int[15][15];
        for(int i = 0; i < 15; ++i){
            for(int j = 0; j < 15; ++j){
                if(i == 0)
                    apartment[i][j] = j;
                else if(j == 0)
                    apartment[i][j] = 0;
                else
                    apartment[i][j] = apartment[i][j-1] + apartment[i-1][j];
            }
        }
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for(int tc = 0; tc < t; ++tc){
            int k = scanner.nextInt();
            int n = scanner.nextInt();
            System.out.println(apartment[k][n]);
        }
    }
}
