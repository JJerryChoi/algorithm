#include <bits/stdc++.h>
using namespace std;

int n, k;
int parcel[101][2];
int dp[101][100001];

int solveKnapSack() {
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= k; ++j){
            dp[i][j] = dp[i-1][j];
            if(j - parcel[i][0] >= 0) {
                dp[i][j] = max(dp[i-1][j - parcel[i][0]] + parcel[i][1], dp[i][j]);
            }
        }
    }
    return dp[n][k];
}

int main() {
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= n; ++i)
        scanf("%d %d", &parcel[i][0], &parcel[i][1]);
    printf("%d", solveKnapSack());
    return 0;
}
