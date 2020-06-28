#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, int>& l, const pair<int, int>& r){
    return l.second > r.second;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    vector<pair<int, int>> vp(8001);
    for(int i = 0; i < vp.size(); ++i)
        vp[i] = make_pair(-4000+i, 0);
    double sum = 0;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &v[i]);
        sum += v[i];
        ++vp[v[i] + 4000].second;
    }
    printf("%d\n", (int)floor(sum/n + 0.5));
    sort(v.begin(), v.end());
    printf("%d\n", v[n/2]);
    stable_sort(vp.begin(), vp.end(), cmp);
    if(vp[0].second == vp[1].second)
        printf("%d\n", vp[1].first);
    else
        printf("%d\n", vp[0].first);
    printf("%d", v[n-1] - v[0]);
    return 0;
}
