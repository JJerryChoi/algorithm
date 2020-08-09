#include <bits/stdc++.h>
using namespace std;

const int p = 1000;

void print(vector<vector<int>> metrix){
    for(auto& mx: metrix) {
        for (auto &m : mx) {
            cout << m << ' ';
        }
        cout << '\n';
    }
}

vector<vector<int>> productMetrix(vector<vector<int>>& a, vector<vector<int>    >& b){
    int n = a.size(), m = b[0].size();
    vector<vector<int>> product(n, vector<int>(m, 0));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            for(int k = 0; k < b.size(); ++k){
                product[i][j] += a[i][k] * b[k][j];
                product[i][j] %= p;
            }
        }
    }
    return product;
}

vector<vector<int>> powerMetrix(vector<vector<int>>& metrix, long long b){
    if(b == 0){
        int n = metrix.size();
        vector<vector<int>> m(n, vector<int>(n, 0));
        for(int i = 0; i < n; ++i)
            m[i][i] = 1;
        return m;
    }
    if(b == 1) return metrix;

    vector<vector<int>> product = powerMetrix(metrix, b/2);
    product = productMetrix(product, product);
    if(b % 2 == 1)
        product = productMetrix(product, metrix);

    return product;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long long n, b;
    cin >> n >> b;
    vector<vector<int>> metrix(n, vector<int>(n));
    for(auto& i : metrix)
        for(auto& j : i) {
            cin >> j;
            j %= p;
        }

    print(powerMetrix(metrix, b));
    return 0;
}
