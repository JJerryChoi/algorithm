#include <bits/stdc++.h>
using namespace std;

int white, blue;
void cutColoredPaper(vector<vector<int>>& cp, int i, int j, int n){
    if(n == 1){
        if(cp[i][j] == 0)
            ++white;
        else
            ++blue;
        return;
    }
    int first = cp[i][j];
    for(int p = 0; p < n; ++p){
        for(int q = 0; q < n; ++q){
            if(first != cp[p+i][q+j]) {
                first = -1;
                break;
            }
        }
        if(first == -1)
            break;
    }

    if(first == -1){
        cutColoredPaper(cp, i, j, n/2);
        cutColoredPaper(cp, i, j+n/2, n/2);
        cutColoredPaper(cp, i+n/2, j, n/2);
        cutColoredPaper(cp, i+n/2, j+n/2, n/2);
    }
    else{
        if(first == 0)
            ++white;
        else
            ++blue;
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<int>> coloredPaper(n, vector<int>(n));
    for(auto& cp : coloredPaper)
        for(auto& c : cp)
            cin >> c;
    cutColoredPaper(coloredPaper, 0, 0, n);
    cout << white << '\n' << blue;
    return 0;
}
