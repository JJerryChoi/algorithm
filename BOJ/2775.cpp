#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, k, n;
    cin >> t;
    array<array<int, 15>, 15> arr;
    for(int i = 0; i < 15; ++i)
        for(int j = 0; j < 15; ++j){
            if(i == 0)
                arr[i][j] = j;
            else if(j == 0)
                arr[i][j] = 0;
            else
                arr[i][j] = arr[i-1][j]+arr[i][j-1];
        }
    for(int tc = 0; tc < t; ++tc){
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }
    return 0;
}
