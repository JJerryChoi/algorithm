#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, v;
    cin >> a >> b >> v;
    int day = 1 + ((v - a) / (a - b)) + ((v - a) % (a - b) ? 1 : 0);
    cout << day;
    return 0;
}
