#include <bits/stdc++.h>
using namespace std;

void printStars6(int n){
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < i; ++j)
            cout << ' ';
        for(int j = 0; j < 2*(n-i)-1; ++j)
            cout << '*';
        cout << '\n';
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    printStars6(n);

    return 0;
}
