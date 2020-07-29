#include <bits/stdc++.h>
using namespace std;

bool isCorrectBracket(string str){
    stack<char> s;
    for(auto& c : str){
        if(c != '(' && c != ')' && c!= '[' && c != ']')
            continue;
        if(c == '(' || c == '[')
            s.push(c);
        else {
            if(s.empty())
                return false;
            else if(c == ')' && s.top() == '(')
                s.pop();
            else if(c == ']' && s.top() == '[')
                s.pop();
            else
                return false;
        }
    }
    if(s.empty())
        return true;
    return false;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string s;
    while(getline(cin, s)) {
        if(s == ".")
            break;
        if (isCorrectBracket(s))
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
