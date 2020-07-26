#include <bits/stdc++.h>
using namespace std;

size_t n;
vector<array<int, 2>> v;

int greedy() {
    int answer = 0;
    int lastTime = 0;
    for (const auto& meeting : v) {
        if (meeting[0] >= lastTime) {
            lastTime = meeting[1];
            ++answer;
        }
    }
    return answer;
}

int main() {
    cin >> n;
    v.resize(n);
    for (auto& [x, y] : v)
        cin >> x >> y;

    sort(begin(v), end(v), [](const auto& l, const auto& r)
    { return l[1] != r[1] ? l[1] < r[1] : l[0] < r[0]; });

    cout << greedy();
    return 0;
}
