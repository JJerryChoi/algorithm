#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;
array<int, 8> output;
array<bool, 8> check;

void backTracking(int depth){
    if(depth == m){
        for(int i = 0; i < m; ++i)
            printf("%d ", output[i]);
        printf("\n");
        return;
    }

    for(int i = 0; i < n; ++i){
        if(!check[i]) {
            check[i] = true;
            output[depth] = v[i];
            backTracking(depth + 1);
            check[i] = false;
        }
    }

}

int main() {
    scanf("%d %d", &n, &m);
    v.resize(n);
    fill(check.begin(), check.end(), false);
    for(int i = 0; i < n; ++i)
        v[i] = i+1;
    backTracking(0);
    return 0;
}
