#include <bits/stdc++.h>
using namespace std;

int a, b, c;

long long divideAndConquer(int k) {
    if(k == 0)
        return 1;
    if(k == 1)
        return a % c;

    long long p = divideAndConquer(k / 2) % c;
    p *= p;
    if (k % 2)
        return ((p % c) * a) % c;
    return p % c;
}

int main() {
    cin >> a >> b >> c;
    cout << divideAndConquer(b) % c;
    return 0;
}
