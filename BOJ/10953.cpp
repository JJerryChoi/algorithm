#include <bits/stdc++.h>
using namespace std;

int T;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> T;
    string s;
    for(int tc = 0; tc < T; ++tc){
        cin >> s;
        cout << s[0]-'0' + s[2]-'0' << '\n';
    }
    return 0;
}
