import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string = scanner.next();
        int needTime = 0;
        for(int i = 0; i < string.length(); ++i){
            int alpabet = string.charAt(i) - 'A';
            needTime += alpabet / 3 + 3;
            if(alpabet == 18)
                needTime -= 1;
            else if(alpabet == 21)
                needTime -=1;
            else if(alpabet >= 24)
                needTime -= 1;
        }
        System.out.print(needTime);
    }
}
