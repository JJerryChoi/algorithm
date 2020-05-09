#include <bits/stdc++.h>
using namespace std;

bool isGroupWord(string word){
    set<char> s;
    for(int i = 0; i < word.size(); ){
        char c = word[i];
        if(!s.insert(c).second) {
            return false;
        }
        while(c == word[++i])
            ;
    }
    return true;
}

int main() {
    int n, answer = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        string word;
        cin >> word;
        if(isGroupWord(word)){
            ++answer;
        }
    }
    cout << answer;
}
