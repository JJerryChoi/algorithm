#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> stairs;
array<int, 301> dp;

void goUpStairs(){
    dp[0] = 0;
    dp[1] = stairs[1];
    if(n >= 2)
        dp[2] = dp[1] + stairs[2];
    for(int i = 3; i <= n; ++i) {
        dp[i] = max(dp[i - 3] + stairs[i - 1], dp[i - 2]);
        dp[i] += stairs[i];
    }
}

int main() {
    cin >> n;
    stairs.resize(n+1);
    int t;
    for(int i = 1; i <= n; ++i) {
        cin >> t;
        stairs[i] = t;
    }
    goUpStairs();
    cout << dp[n];
    return 0;
}
