#include <bits/stdc++.h>
using namespace std;

void findPrimeFactorTwoOrFiveIn(int* twoOrFive, int n) {
    twoOrFive[0] = 0, twoOrFive[1] = 0;
    for(long long i = 2; n / i >= 1; i *= 2){
        twoOrFive[0] += n/i;
    }
    for(long long i = 5; n / i >= 1; i *= 5){
        twoOrFive[1] += n/i;
    }

}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int twoOrFive[3][2];
    int n, k;
    cin >> n >> k;
    findPrimeFactorTwoOrFiveIn(twoOrFive[0], n);
    findPrimeFactorTwoOrFiveIn(twoOrFive[1], k);
    findPrimeFactorTwoOrFiveIn(twoOrFive[2], n-k);
    for(int i = 1; i < 3; ++i) {
        twoOrFive[0][0] -= twoOrFive[i][0];
        twoOrFive[0][1] -= twoOrFive[i][1];
    }
    cout << min(twoOrFive[0][0], twoOrFive[0][1]);
    return 0;
}
