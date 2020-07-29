#include <bits/stdc++.h>
using namespace std;

int n;

bool isStackSquence(vector<char>& v){
    stack<int> s;
    int input, k = 1, index = 0;
    for(int i = 0; i < n; ++i) {
        cin >> input;
        if(input > n || (!s.empty() && input < s.top()))
            return false;

        while(k <= input){
            s.push(k++);
            v[index++] = '+';
        }
        if(s.top() == input){
            s.pop();
            v[index++] = '-';
        }
    }
    return true;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    vector<char> v(2*n);

    if(isStackSquence(v))
        for(auto& c : v)
            cout << c << '\n';
    else
        cout << "NO";
    return 0;
}
