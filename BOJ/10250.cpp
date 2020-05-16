#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, h, w, n;
    cin >> t;
    for(int tc = 0; tc < t; tc++){
        cin >> h >> w >> n;
        int level = n%h;
        int number = 0;
        if(level == 0){
            level = h;
            number = -1;
        }
        number += n/h +1;
        cout << level << setfill('0') << setw(2) << number << endl;
    }
    return 0;
}
