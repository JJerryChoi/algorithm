#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &v[i]);
    sort(v.begin(), v.end());
    for(int i = 0; i < n; ++i)
        printf("%d\n", v[i]);

    return 0;
}
