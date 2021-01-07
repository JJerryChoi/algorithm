import java.io.*;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        StringTokenizer stringTokenizer = new StringTokenizer(bufferedReader.readLine());
        int n = Integer.parseInt(stringTokenizer.nextToken());
        int k = Integer.parseInt(stringTokenizer.nextToken());

        int[] dp = new int[k + 1];
        int[] coin = new int[n];
        for (int i = 0; i < n; ++i)
            coin[i] = Integer.parseInt(bufferedReader.readLine());

        dp[0] = 1;
        for (int i = 0; i < n; ++i) {
            for (int j = coin[i]; j < k + 1; ++j) {
                dp[j] += dp[j - coin[i]];
            }
        }

        bufferedWriter.write(Integer.toString(dp[k]));
        bufferedWriter.flush();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
