import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string = scanner.nextLine();
        if(string.equals(" ") || string.equals("")) {
            System.out.print(0);
            return;
        }

        string = string.trim();
        String[] words = string.split(" ");
        System.out.print(words.length);
    }
}
