#include <bits/stdc++.h>
using namespace std;

string reverseQuardTree(string::iterator& itr){
    char first = *itr;
    ++itr;
    if(first == 'w' || first == 'b')
        return string(1, first);
    string leftTop = reverseQuardTree(itr);
    string rightTop = reverseQuardTree(itr);
    string leftBottom = reverseQuardTree(itr);
    string rightBottom = reverseQuardTree(itr);
    return "x" + leftBottom + rightBottom + leftTop + rightTop;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T;
    cin >> T;
    string input;
    for(int tc = 0; tc < T; ++tc){
        cin >> input;
        string::iterator itr = input.begin();
        cout << reverseQuardTree(itr) << '\n';
    }
    return 0;
}
