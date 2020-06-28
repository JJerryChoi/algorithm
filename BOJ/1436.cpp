#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int cur = 665;
    while(count < n){
        ++cur;
        if(to_string(cur).find("666") != string::npos)
            ++count;
    }
    cout << cur;
    return 0;
}
