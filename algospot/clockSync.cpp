#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
vector<vector<int>> switches = {
        {0, 1,  2},
        {3, 7,  9,  11},
        {4, 10, 14, 15},
        {0, 4,  5,  6,  7},
        {6, 7,  8,  10, 12},
        {0, 2,  14, 15},
        {3, 14, 15},
        {4, 5,  7,  14, 15},
        {1, 2,  3,  4,  5},
        {3, 4,  5,  9,  13}
};

bool areAligned(const vector<int> &clocks) {
    for (auto &c : clocks)
        if (c != 0)
            return false;
    return true;
}

void push(vector<int> &clocks, int switchNumber) {
    for (auto i : switches[switchNumber]) {
        clocks[i] += 3;
        clocks[i] %= 12;
    }
}

int solve(vector<int> &clocks, int switchNumber) {
    if (switchNumber == switches.size()) return areAligned(clocks) ? 0 : INF;
    int ret = INF;
    for (int cnt = 0; cnt < 4; ++cnt) {
        ret = min(ret, cnt + solve(clocks, switchNumber + 1));
        push(clocks, switchNumber);
    }
    return ret;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    size_t C;
    cin >> C;
    for (size_t tc = 0; tc < C; ++tc) {
        vector<int> clocks(16);
        for (auto &c : clocks) {
            cin >> c;
            c %= 12;
        }
        int answer = solve(clocks, 0);
        if (answer == INF) answer = -1;
        cout << answer << '\n';
    }
    return 0;
}
