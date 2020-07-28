#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> rings;

int findGcd(int a, int b){
    if(b == 0)
        return a;
    return findGcd(b, a % b);
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    rings.resize(n);
    for(auto& ring : rings)
        cin >> ring;

    int firstRing = rings[0];
    for(int i = 1; i < n; ++i) {
        int gcd = findGcd(rings[0], rings[i]);
        cout << firstRing/gcd << '/' << rings[i]/gcd << '\n';
    }
    return 0;
}
