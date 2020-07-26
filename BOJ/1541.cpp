#include <bits/stdc++.h>
using namespace std;

int makeMin(string& s){
    int answer = 0;
    int plus = 0;
    for(int i = s.length()-1; i > 0; --i){
        if(s[i] == '+') {
            plus += stoi(s.substr(i));
            s.resize(i);
        }
        if(s[i] == '-') {
            answer -= stoi(s.substr(i+1)) + plus;
            plus = 0;
            s.resize(i);
        }
    }
    answer += stoi(s) + plus;
    return answer;
}

int main() {
    string expression;
    cin >> expression;
    cout << makeMin(expression);
    return 0;
}
