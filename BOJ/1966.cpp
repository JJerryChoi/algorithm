#include <bits/stdc++.h>
using namespace std;

int findPrintTurn(){
    int n, m;
    cin >> n >> m;
    vector<int> priority(n);
    queue<pair<int, int>> q;
    for(int i = 0; i < n; ++i) {
        cin >> priority[i];
        q.emplace(i, priority[i]);
    }
    sort(begin(priority), end(priority), greater<int>());

    int p = 0;
    while(1){
        if(priority[p] <= q.front().second) {
            if (q.front().first == m) {
                return p+1;
            }
            q.pop();
            ++p;
            continue;
        }
        q.push(q.front());
        q.pop();
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    for(int tc = 0; tc < T; ++tc){
        cout << findPrintTurn() << '\n';
    }

    return 0;
}
