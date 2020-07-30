#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1001];

int findMaxPrice(){
    vector<int> P(n);
    for(auto& p : P)
        cin >> p;
    
    dp[1] = P[0];
    for(int i = 2; i <= n; ++i) {
        for(int j = 1; j < i; ++j){
            if(i % j == 0)
                dp[i] = max(dp[i], (i/j) * dp[j]);
            dp[i] = max(dp[i], dp[i-j] + dp[j]);
        }
        dp[i] = max(dp[i], P[i-1]);
    }
    return dp[n];
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    cout << findMaxPrice();
    return 0;
}
