#include <bits/stdc++.h>
using namespace std;

const int divisor = 10007;
int binomialCoefficent[1001][1001];

long long getBinomialCoefficent2(int n, int k){ // n! / k!(n-k)!
    long long numerator = 1;
    for(int i = k+1; i <= n; ++i) {
        numerator *= i;
    }

    long long denominator = n-k;
    for(int i = 2; i < n-k; ++i)
        denominator *= i;
    if(denominator == 0)
        denominator = 1; // 0! = 1;
    return numerator / denominator;
}

long long getBinomialCoefficent(int n, int k) {
    if(binomialCoefficent[n][k] != 0)
        return binomialCoefficent[n][k];
    binomialCoefficent[n][k] = getBinomialCoefficent(n-1, k-1) + getBinomialCoefficent(n-1, k);
    binomialCoefficent[n][k] %= divisor;
    return binomialCoefficent[n][k];
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    for(int i = 1; i <= n; ++i) {
        binomialCoefficent[i][0] = 1;
        binomialCoefficent[i][i] = 1;
    }
    cout << getBinomialCoefficent(n, k);
    return 0;
}
