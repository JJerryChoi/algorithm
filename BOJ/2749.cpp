#include <bits/stdc++.h>
using namespace std;

const int p = 1000000;

vector<vector<long long>> productMetrix(vector<vector<long long>>& a, vector<vector<long long>>& b){
    int n = a.size(), m = b[0].size();
    vector<vector<long long>> product(n, vector<long long>(m, 0));
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

vector<vector<long long>> powerMetrix(vector<vector<long long>>& metrix, long long b){
    if(b == 0){
        int n = metrix.size();
        vector<vector<long long>> m(n, vector<long long>(n, 0));
        for(int i = 0; i < n; ++i)
            m[i][i] = 1;
        return m;
    }
    if(b == 1) return metrix;

    vector<vector<long long>> product = powerMetrix(metrix, b/2);
    product = productMetrix(product, product);
    if(b % 2 == 1)
        product = productMetrix(product, metrix);

    return product;
}

int getFibonacci(long long n){
    vector<vector<long long>> m(2, vector<long long>(2, 1));
    m[1][1] = 0;
    m = powerMetrix(m, n-1);
    return m[0][0];
}


int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    long long n;
    cin >> n;
    cout << getFibonacci(n);
    return 0;
}
