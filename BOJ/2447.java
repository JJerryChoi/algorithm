import java.io.*;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        char[][] stars = new char[n][n];
        initializeStars(stars, n);
        drawStars(stars, n, 0, 0);
        printStars(stars, n);
    }
    static void initializeStars(char[][] stars, int n){
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                stars[i][j] = '*';
    }
    static void drawStars(char[][] stars, int n, int x, int y) {
        if(n == 1)
            return;

        int nOverThree = n/3;
        for (int i = 0; i < n; i += nOverThree) {
            for (int j = 0; j < n; j += nOverThree) {
                if(i == nOverThree && j == nOverThree){
                    for(int p = i; p < 2*i; ++p)
                        for(int q = j; q < 2*j; ++q)
                            stars[x+p][y+q] = ' ';
                }
                else
                    drawStars(stars, n/3, x+i, y+j);
            }
        }
    }
    static void printStars(char[][] stars, int n) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        for(int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j)
                bufferedWriter.write(stars[i][j]);
            bufferedWriter.write('\n');
        }
        bufferedWriter.flush();
    }
}
