#include <bits/stdc++.h>
using namespace std;

int twoOrFive[2];

void findPrimeFactorTwoOrFiveIn(int n) {
    while (n % 2 == 0) {
        n /= 2;
        ++twoOrFive[0];
    }
    while (n % 5 == 0) {
        n /= 5;
        ++twoOrFive[1];
    }

}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i)
        findPrimeFactorTwoOrFiveIn(i);
    cout << min(twoOrFive[0], twoOrFive[1]);
    return 0;
}
