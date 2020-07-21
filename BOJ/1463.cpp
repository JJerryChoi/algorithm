#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1000001];

int main() {
    cin >> n;
    dp[1] = 0, dp[2] = 1, dp[3] = 1;
    for(int i = 2; i <= n; ++i){
        dp[i] = dp[i-1];
        if(i%3 == 0)
            dp[i] = min(dp[i], dp[i/3]);
        if(i%2 == 0)
            dp[i] = min(dp[i], dp[i/2]);
        dp[i] += 1;
    }
    cout << dp[n];
    return 0;
}
