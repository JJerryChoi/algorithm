#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> s;
int diff = INT_MAX;

void findMinimumTeamStatsDiff() {
    vector<int> v(n, 1);
    for (int i = 0; i < n/2; ++i)
        v[i] = 0;
    do {
        vector<int> aTeam;
        vector<int> bTeam;
        for(int i = 0; i < n; ++i)
            if(v[i] == 0)
                aTeam.push_back(i);
            else
                bTeam.push_back(i);
        int aStats = 0;
        int bStats = 0;
        for(int i = 0; i < n/2-1; ++i) {
            for (int j = i; j < n / 2; ++j) {
                aStats += s[aTeam[i]][aTeam[j]] + s[aTeam[j]][aTeam[i]];
                bStats += s[bTeam[i]][bTeam[j]] + s[bTeam[j]][bTeam[i]];
            }
        }
        diff = min(abs(aStats - bStats), diff);
    } while (next_permutation(v.begin(), v.end()));
}

int main() {
    cin >> n;
    s = vector<vector<int>>(n, vector<int>(n));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            cin >> s[i][j];
    findMinimumTeamStatsDiff();
    cout << diff;
    return 0;
}
