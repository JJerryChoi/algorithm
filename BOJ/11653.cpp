#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    while(n > 1){
        int k = 2;
        while(n % k != 0)
            ++k;
        cout << k << '\n';
        n /= k;
    }
    return 0;
}
