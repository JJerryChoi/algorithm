#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int tc = 0; tc < T; ++tc){
        int x, y;
        cin >> x >> y;
        int d = y - x;
        int n = 1;
        long long max = 1;
        while(d > max){
            ++n;
            int m = n/2;
            max = m*(m+1);
            if(n%2 == 1)
                max += m+1;
        }
        cout << n << endl;
    }
    return 0;
}
