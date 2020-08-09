#include <bits/stdc++.h>
using namespace std;

string compression;
void quardTree(vector<vector<char>>& image, int i, int j, int n){
    if(n == 1){
        compression += image[i][j];
        return;
    }
    char first = image[i][j];
    for(int p = 0; p < n; ++p){
        for(int q = 0; q < n; ++q){
            if(first != image[p + i][q + j]) {
                first = 'n';
                break;
            }
        }
        if(first == 'n')
            break;
    }

    if(first == 'n'){
        compression += '(';
        quardTree(image, i, j, n / 2);
        quardTree(image, i, j + n / 2, n / 2);
        quardTree(image, i + n / 2, j, n / 2);
        quardTree(image, i + n / 2, j + n / 2, n / 2);
        compression += ')';
    }
    else
        compression += first;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<vector<char>> image(n, vector<char>(n));
    for(auto& cp : image)
        for(auto& c : cp)
            cin >> c;
    quardTree(image, 0, 0, n);
    cout << compression;
    return 0;
}
