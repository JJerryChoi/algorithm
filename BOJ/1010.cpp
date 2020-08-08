#include <bits/stdc++.h>
using namespace std;

long long combination[31][31];

long long calCombination(int n, int m) {
    if (combination[n][m] != -1) return combination[n][m];
    if (n == 0) {
        combination[n][m] = 0;
        return 0;
    }
    if (m == 1) {
        combination[n][m] = n;
        return n;
    }

    combination[n][m] = calCombination(n - 1, m) + calCombination(n - 1, m - 1);
    return combination[n][m];
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    for (auto &c : combination)
        for (auto &d : c)
            d = -1;

    int T;
    cin >> T;
    for (int tc = 0; tc < T; ++tc) {
        int n, m;
        cin >> n >> m;
        cout << calCombination(max(n, m), min(n, m)) << '\n';
    }

    return 0;
}
