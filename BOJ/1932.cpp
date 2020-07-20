#include <bits/stdc++.h>
using namespace std;

int n;
array<array<int, 500>, 500> triangle;
array<array<int, 500>, 500> dp;

int main() {
    cin >> n;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j <= i; ++j)
            cin >> triangle[i][j];

    dp[0][0] = triangle[0][0];
    for(int i = 1; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if(j == 0)
                dp[i][j] = dp[i-1][j];
            else if(j == i)
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]);
            dp[i][j] += triangle[i][j];
        }
    }
    int result = dp[n-1][0];
    for(int i = 1; i < n; ++i)
        result = max(dp[n-1][i], result);
    cout << result;
    return 0;
}
