import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String string = scanner.next();
        int nCroatiaAlphabet = 0;
        for(int i = 0; i < string.length(); ++i){
            char alphabet = string.charAt(i);
            if(i+2 < string.length()){
                if(string.substring(i, i + 3).equals("dz="))
                    i += 2;
            }
            if(i+1 < string.length()){
                String subString = string.substring(i, i+2);
                char nextAlphabet = string.charAt(i+1);
                if(subString.equals("lj")){
                    i += 1;
                }
                else if(subString.equals("nj")){
                    i += 1;
                }
                else if(nextAlphabet == '-' || nextAlphabet == '='){
                    i += 1;
                }
            }
            nCroatiaAlphabet += 1;
        }
        System.out.print(nCroatiaAlphabet);
    }
}
