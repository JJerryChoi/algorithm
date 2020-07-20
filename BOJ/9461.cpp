#include <bits/stdc++.h>
using namespace std;

int T, n;
vector<long long> dp;

int main() {
    cin >> T;
    dp.resize(100 + 1);
    dp[0] = 0, dp[1] = 1, dp[2] = 1;
    for (int i = 3; i <= 100; ++i) {
        dp[i] = dp[i-2] + dp[i-3];
    }
    for(int tc = 0; tc < T; ++tc) {
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}
