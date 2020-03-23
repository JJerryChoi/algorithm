import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int testCase = Integer.parseInt(bufferedReader.readLine());
        for(int testcase = 0; testcase < testCase; ++testcase) {
            StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
            int a = Integer.parseInt(stringTokenizer.nextToken());
            int b = Integer.parseInt(stringTokenizer.nextToken());
            bufferedWriter.write(a + b + "\n");
        }
        bufferedWriter.flush();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
