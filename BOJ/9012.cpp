#include <bits/stdc++.h>
using namespace std;

bool isCorrectBracket(string str){
    stack<char> s;
    for(auto& c : str){
        if(c == '(')
            s.push('(');
        else {
            if(s.empty())
                return false;
            else
                s.pop();
        }
    }
    if(s.empty())
        return true;
    return false;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    string s;
    for(int tc = 0; tc < T; ++tc){
        cin >> s;
        if(isCorrectBracket(s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
