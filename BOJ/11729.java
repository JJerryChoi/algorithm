import java.io.*;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main{
    static List<String> movingOrder = new ArrayList<>();
    public static void main(String[] args) throws IOException {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        hanoi(n, 1, 2, 3);

        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        bufferedWriter.write(String.valueOf(movingOrder.size()) + '\n');
        for (String s : movingOrder)
            bufferedWriter.write(s + '\n');
        bufferedWriter.flush();
    }

    private static void hanoi(int n, int start, int sub, int dest) {
        if(n == 1) {
            movingOrder.add(String.valueOf(start) + ' ' + String.valueOf(dest));
            return;
        }
        hanoi(n-1, start, dest, sub);
        hanoi(1, start, sub, dest);
        hanoi(n-1, sub, start, dest);
    }
}
