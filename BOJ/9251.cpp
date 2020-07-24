#include <bits/stdc++.h>
using namespace std;

string p, q;
int lcs[1001][1001];

int findLcs() { // LCS = Longest Common Subsequence
    for (int i = 1; i <= p.size(); ++i) {
        for (int j = 1; j <= q.size(); ++j) {
            if (p[i - 1] == q[j - 1])
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            else
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }
    return lcs[p.size()][q.size()];
}

int main() {
    cin >> p >> q;
    printf("%d", findLcs());
    return 0;
}
