#include <bits/stdc++.h>
using namespace std;

int n;
int A[1001];
int dp[1001];

int findLongestIncreasingSquence(){
    int ans = 1;
    for(int i = 0; i < n; ++i){
        dp[i] = 1;
        for(int j = 0; j < i; ++j) {
            if (A[i] > A[j])
                dp[i] = max(dp[i], dp[j] + 1);
            ans = max(ans, dp[i]);
        }
    }
    return ans;
}

int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", A+i);
    printf("%d", findLongestIncreasingSquence());
    return 0;
}
