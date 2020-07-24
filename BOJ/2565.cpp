#include <bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> poles;
int lis[1001]; // lis = longest incresing subsequence;

bool cmp(const pair<int, int>& l, const pair<int, int>& r){
    return l.first < r.first;
}

int findLIS(){
    int ans = 1;
    for(int i = 0; i < n; ++i){
        lis[i] = 1;
        for(int j = 0; j < i; ++j) {
            if (poles[i].second > poles[j].second)
                lis[i] = max(lis[i], lis[j] + 1);
        }
    }

    for(int i = 0; i < n; ++i)
        ans = max(ans, lis[i]);

    return ans;
}

int main() {
    scanf("%d", &n);
    poles.resize(n);
    for(int i = 0; i < n; ++i)
        scanf("%d %d", &poles[i].first, &poles[i].second);
    sort(poles.begin(), poles.end(), cmp);
    printf("%d", n - findLIS());
    return 0;
}
