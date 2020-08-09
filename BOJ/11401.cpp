#include <bits/stdc++.h>
using namespace std;

const long long p = 1000000007;
unsigned long long factorial[4000001] = {1, 1};

unsigned long long getPower(unsigned long long x, unsigned long long k){
    if(k == 0) return 1;
    if(k == 1) return x % p;
    unsigned long long ull = getPower(x, k / 2);
    ull *= ull;
    ull %= p;
    if(k % 2 == 1)
        ull *= x % p;
    return ull % p;
}

unsigned long long getBinomialCoefficient(int n, int k){
    unsigned long long nFac = factorial[n];
    unsigned long long denominator = getPower(factorial[n-k]*factorial[k]%p, p-2);
    return nFac * denominator % p;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, k;
    cin >> n >> k;
    for(int i = 1; i < n; ++i)
        factorial[i+1] = factorial[i] * (i+1) % p;
    cout << getBinomialCoefficient(n, k);
    return 0;
}
