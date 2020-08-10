#include <bits/stdc++.h>
using namespace std;

vector<vector<bool>> v(100, vector<bool>(100, false));

void print(vector<vector<int>> metrix){
    for(auto& mx: metrix) {
        for (auto &m : mx) {
            cout << m << ' ';
        }
        cout << '\n';
    }
}

void dfs(vector<vector<int>>& metrix, int start, int cur){
    for(int i = 0; i < metrix.size(); ++i){
        if(metrix[cur][i] == 1 && !v[start][i]){
            metrix[start][i] = 1;
            v[start][i] = true;
            dfs(metrix, start, i);
        }
    }
}

void findPath(vector<vector<int>>& metrix){
    int n = metrix.size();

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(metrix[i][j] == 1 && !v[i][j]) {
                v[i][j] = true;
                dfs(metrix, i, j);
            }
        }
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    vector<vector<int>> adjMetrix(n, vector<int>(n));
    for(auto& i : adjMetrix)
        for(auto& j : i)
            cin >> j;

    findPath(adjMetrix);
    print(adjMetrix);
    return 0;
}
