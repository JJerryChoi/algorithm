#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(b, a%b);
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    size_t T;
    cin >> T;
    for(size_t tc = 0; tc < T; ++tc){
        int a, b;
        cin >> a >> b;
        cout << a*b/gcd(a, b) << '\n';
    }
    return 0;
}
