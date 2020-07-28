#include <bits/stdc++.h>
using namespace std;

long long getBinomialCoefficent(int n, int k){ // n! / k!(n-k)!
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

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    cout << getBinomialCoefficent(n, k);

    return 0;
}
