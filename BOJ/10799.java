import java.io.*;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        String input = bufferedReader.readLine();
        int stack = 0;
        int answer = 0;
        for (int i = 0; i < input.length(); ++i) {
            if (input.charAt(i) == '(') {
                if (input.charAt(i + 1) == ')') {
                    answer += stack;
                    ++i;
                } else
                    ++stack;
            } else {
                --stack;
                ++answer;
            }
        }
        bufferedWriter.write(Integer.toString(answer));
        bufferedWriter.flush();
        bufferedReader.close();
        bufferedWriter.close();
    }
}
