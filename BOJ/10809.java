import java.util.Arrays;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string = scanner.next();
        int[] startPoint = new int[26];
        Arrays.fill(startPoint, -1);
        for(int i = 0; i < string.length(); ++i){
            int alpabet = string.charAt(i) - 'a';
            if(startPoint[alpabet] == -1)
                startPoint[alpabet] = i;
        }

        for(int i = 0; i < startPoint.length; ++i) {
            System.out.print(startPoint[i]);
            System.out.print(' ');
        }
    }
}
