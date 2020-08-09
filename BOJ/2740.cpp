#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>> metrix){
    for(auto& mx: metrix) {
        for (auto &m : mx) {
            cout << m << ' ';
        }
        cout << '\n';
    }
}

vector<vector<int>> productMetrix(vector<vector<int>>& a, vector<vector<int>>& b){
    int n = a.size(), m = b[0].size();
    vector<vector<int>> product(n, vector<int>(m, 0));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            for(int k = 0; k < b.size(); ++k){
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return product;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for(auto& i : a)
        for(auto& j : i)
            cin >> j;

    cin >> n >> m;
    vector<vector<int>> b(n, vector<int>(m));
    for(auto& i : b)
        for(auto& j : i)
            cin >> j;

    print(productMetrix(a, b));
    return 0;
}
