import java.util.Arrays;
import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string = scanner.next();
        int[] alphabet = new int[26];
        Arrays.fill(alphabet, 0);
        for(int i = 0; i < string.length(); ++i){
            int singleLetter = string.charAt(i) - 'A';
            if(singleLetter > 25){
                singleLetter += 'A';
                singleLetter -= 'a';
            }
            ++alphabet[singleLetter];
        }

        int max = 0;
        char maxChar = 0;
        for(int i = 0; i < alphabet.length; ++i){
            if(max < alphabet[i]) {
                max = alphabet[i];
                maxChar = (char) (i + 'A');
            }
            else if(max == alphabet[i]){
                maxChar = '?';
            }
        }
        System.out.print(maxChar);
    }
}
