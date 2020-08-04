#include <bits/stdc++.h>
using namespace std;

int n, m;
bool areFriends[10][10];

int countPairings(vector<bool>& taken) {
    int firstSolo = -1;
    for (int i = 0; i < n; ++i) {
        if (!taken[i]) {
            firstSolo = i;
            break;
        }
    }
    if (firstSolo == -1) return 1;

    int ret = 0;
    for (int pairWith = firstSolo + 1; pairWith < n; ++pairWith) {
        if (!taken[pairWith] && areFriends[firstSolo][pairWith]) {
            taken[firstSolo] = taken[pairWith] = true;
            ret += countPairings(taken);
            taken[firstSolo] = taken[pairWith] = false;
        }
    }
    return ret;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    size_t C;
    cin >> C;
    for (size_t tc = 0; tc < C; ++tc) {
        cin >> n >> m;
        for(int k = 0; k < n; ++k)
            fill(areFriends[k], areFriends[k]+10, false);
        int i, j;
        for (int k = 0; k < m; ++k) {
            cin >> i >> j;
            areFriends[i][j] = areFriends[j][i] = true;
        }
        vector<bool> taken(n, false);
        cout << countPairings(taken) << '\n';
    }
    return 0;
}
