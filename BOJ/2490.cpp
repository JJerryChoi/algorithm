#include <bits/stdc++.h>
using namespace std;

char yutnori(const vector<int>& yuts){
    int nBack = 0;
    for(auto& yut : yuts)
        if(yut == 1)
            ++nBack;
    switch(nBack){
        case 1:
            return 'C';
        case 2:
            return 'B';
        case 3:
            return 'A';
        case 4:
            return 'E';
        default:
            return 'D';
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    vector<int> yuts(4);
    for(int tc = 0 ; tc < 3; ++tc){
        for(auto& yut : yuts)
            cin >> yut;
        cout << yutnori(yuts) << '\n';
    }
    return 0;
}
