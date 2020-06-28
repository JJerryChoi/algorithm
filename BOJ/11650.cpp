#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& l, const pair<int, int>& r){
    if(l.first == r.first)
        return l.second < r.second;
    return l.first < r.first;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<pair<int,int>> v(n);
    int a, b;
    for(int i = 0; i < n; ++i) {
        scanf("%d %d", &a, &b);
        v[i] = make_pair(a, b);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; ++i)
        printf("%d %d\n", v[i].first, v[i].second);
    return 0;
}
