#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(10001, 0);
    int t;
    for(int i = 0; i < n; ++i) {
        scanf("%d", &t);
        ++v[t];
    }
    for(int i = 1; i <= 10000; ++i)
        for(int j = 0; j < v[i]; ++j)
            printf("%d\n", i);

    return 0;
}
