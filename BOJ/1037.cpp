#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    v.resize(n);
    for(auto& w : v)
        cin >> w;
    sort(begin(v), end(v));
    if(n > 1)
        cout << v[0] * v[n-1];
    else
        cout << v[0] * v[0];
    return 0;
}
