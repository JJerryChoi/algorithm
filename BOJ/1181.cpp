#include <bits/stdc++.h>
using namespace std;

bool cmp(const string& l, const string& r){
    if(l.size() == r.size())
        return l < r;
    return l.size() < r.size();
}

int main() {
    int n;
    scanf("%d", &n);
    vector<string> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), cmp);
    printf("%s\n", v[0].c_str());
    for(int i = 1; i < n; ++i)
        if(v[i] != v[i-1])
            printf("%s\n", v[i].c_str());
    return 0;
}
