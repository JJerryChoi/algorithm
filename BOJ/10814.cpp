#include <bits/stdc++.h>
using namespace std;

bool cmp(const pair<int, string>& l, const pair<int, string>& r){
    return l.first < r.first;
}

int main() {
    int n;
    scanf("%d", &n);
    vector<pair<int, string>> v(n);
    int age;
    string name;
    for(int i = 0; i < n; ++i) {
        cin >> age >> name;
        v[i] = make_pair(age, name);
    }
    stable_sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; ++i)
        printf("%d %s\n", v[i].first, v[i].second.c_str());
    return 0;
}
