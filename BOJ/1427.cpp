#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(10, 0);
    while(n > 0){
        ++v[n%10];
        n /= 10;
    }
    for(int i = 9; i >= 0; --i)
        for(int j = 0; j < v[i]; ++j)
            printf("%d", i);
    return 0;
}
