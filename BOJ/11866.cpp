#include <bits/stdc++.h>
using namespace std;

int n, k;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    queue<int> q;
    for(int i = 1; i <= n; ++i)
        q.push(i);

    string output = "<";
    int time;
    while(!q.empty()){
        time = 1;
        while(time < k){
            ++time;
            q.push(q.front());
            q.pop();
        }
        output += to_string(q.front()) + ", ";
        q.pop();
    }
    output.resize(output.size()-2);
    output.push_back('>');
    cout << output;

    return 0;
}
