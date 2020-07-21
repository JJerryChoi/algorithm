#include <bits/stdc++.h>
using namespace std;

int n;
long long dp[101][10];
const int q = 1000000000;

void findStairNumbers(){
    for(int i = 1; i < 10; ++i)
        dp[1][i] = 1;
    for(int i = 2; i <= n; ++i){
        for(int j = 1; j < 9; ++j) {
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])%q;
        }
        dp[i][0] = dp[i-1][1];
        dp[i][9] = dp[i-1][8];
    }
}

int main() {
    cin >> n;
    findStairNumbers();
    long long sum = 0;
    for(int i = 0; i < 10; ++i) {
        sum += dp[n][i];
        sum %= q;
    }
    cout << sum;
    return 0;
}
