#include <bits/stdc++.h>
using namespace std;

const int INF = 987654321;
int nums[3];

void quardTree(vector<vector<int>> &metrix, int i, int j, int n) {
    if (n == 1) {
        ++nums[metrix[i][j]];
        return;
    }

    int first = metrix[i][j];
    for (int p = 0; p < n; ++p) {
        for (int q = 0; q < n; ++q) {
            if (first != metrix[p + i][q + j]) {
                first = INF;
                break;
            }
        }
        if (first == INF)
            break;
    }

    if (first == INF) {
        for(int p = 0; p < 3; ++p)
            for(int q = 0; q < 3; ++q)
                quardTree(metrix, i + p*n/3, j + q*n/3, n/3);
    } else {
        ++nums[first];
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (auto &mx : matrix)
        for (auto &m : mx) {
            cin >> m;
            m += 1;
        }
    quardTree(matrix, 0, 0, n);
    for(auto& i : nums)
        cout << i << '\n';
    return 0;
}
