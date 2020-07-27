#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> t;
vector<int> p;
int dp[16];

int resign() {
    for (int i = n - 1; i >= 0; --i) {
        if (t[i] + i > n)
            dp[i] = dp[i + 1];
        else
            dp[i] = max(dp[i + 1], p[i] + dp[t[i] + i]);
    }
    return dp[0];
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    t.resize(n), p.resize(n);
    for (int i = 0; i < n; ++i)
        cin >> t[i] >> p[i];
    cout << resign();
    return 0;
}
