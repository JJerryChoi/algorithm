#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    int i = 1, sum = 1;
    while (sum < x) {
        ++i;
        sum = (i * (i + 1)) / 2;
    }
    x -= (i * (i - 1)) / 2;
    if (i % 2) {
        cout << (i + 1) - x << '/' << x << endl;
    } else {
        cout << x << '/' << (i + 1) - x << endl;
    }
    return 0;
}
