#include <bits/stdc++.h>
using namespace std;

const int divisior = 10007;
int n;
int dp[1001];

int tiling(){
    dp[1] = 1;
    dp[2] = 3;
    for(int i = 3; i <= n; ++i) {
        dp[i] = dp[i-1] + 2*dp[i-2];
        dp[i] %= divisior;
    }
    return dp[n];
}

int main() {
    cin >> n;
    cout << tiling();
    return 0;
}
