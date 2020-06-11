import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int nGroupWord = 0;
        for(int tc = 0; tc < n; ++tc){
            String word = scanner.next();
            if(isGroupWord(word))
                ++nGroupWord;
        }
        System.out.print(nGroupWord);
    }

    static boolean isGroupWord(String word){
        boolean[] appearedAlpabet = new boolean[26];
        for(int i = 0; i < word.length(); ++i){
            char c = word.charAt(i);
            if( appearedAlpabet[c - 'a'] )
                return false;
            while(i+1 < word.length()){
                if(c != word.charAt(i+1))
                    break;
                c = word.charAt(i+1);
                ++i;
            }
            appearedAlpabet[c - 'a'] = true;
        }
        return true;
    }
}
