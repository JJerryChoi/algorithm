#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int in, out, cur = 0, answer = 0;
    for(int i = 0; i < 4; ++i) {
        cin >> out >> in;
        cur += in;
        cur -= out;
        answer = max(answer, cur);
    }
    cout << answer;
    return 0;
}
