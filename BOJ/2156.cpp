#include <bits/stdc++.h>
using namespace std;

int n;
int wine[10001];
int dp[10001][3];

void drinkMaximumWine(){
    dp[1][1] = wine[1], dp[1][2] = wine[1];
    if(n > 1)
        dp[2][0] = wine[1], dp[2][1] = wine[2], dp[2][2] = wine[1] + wine[2];
    for(int i = 3; i <= n; ++i){
        dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
        dp[i][1] = dp[i-1][0] + wine[i];
        dp[i][2] = dp[i-1][1] + wine[i];
    }
}

int main() {
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i)
        scanf("%d", wine+i);
    drinkMaximumWine();
    int maxWine = max(dp[n][0], max(dp[n][1], dp[n][2]));
    printf("%d", maxWine);
    return 0;
}
