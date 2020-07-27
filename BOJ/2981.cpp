#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;
set<int> bag;

int findGcd(int a, int b){
    if(b == 0)
        return a;
    return findGcd(b, a % b);
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    v.resize(n);
    for(auto& w : v)
        cin >> w;

    int gcd = abs(v[0] - v[1]);
    for(int i = 1; i < n-1; ++i)
        gcd = findGcd(gcd, abs(v[i]-v[i+1]));

    int divisor = 2;
    while(gcd >= divisor*divisor){
        if(gcd % divisor == 0) {
            bag.insert(divisor);
            bag.insert(gcd/divisor);
        }
        ++divisor;
    }
    bag.insert(gcd);

    for(const auto& b : bag)
        cout << b << ' ';

    return 0;
}
