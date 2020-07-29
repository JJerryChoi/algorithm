#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    stack<int> s;
    int k;
    for(int i = 0; i < n; ++i){
        cin >> k;
        if(k == 0)
            s.pop();
        else
            s.push(k);
    }

    int sum = 0;
    while(!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
    return 0;
}
