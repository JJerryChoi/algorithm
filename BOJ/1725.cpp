#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> v;

int histogram(int s, int e) {
    if (s == e)
        return 0;
    if (s + 1 == e)
        return v[s];

    int mid = (s + e) / 2;
    int result = max(histogram(s, mid), histogram(mid, e));

    int h = v[mid], w = 1, l = mid, r = mid;
    while (r - l + 1 < e - s) {
        int p = l > s ? min(h, v[l-1]) : -1;
        int q = r+1 < e ? min(h, v[r+1]) : -1;
        if(p >= q){
            h = p;
            --l;
        }
        else{
            h = q;
            ++r;
        }
        result = max(result, ++w*h);
    }
    return result;
}

int main() {
    cin >> n;
    v = vector<int>(n);
    for (int i = 0; i < n; ++i)
        cin >> v[i];
    cout << histogram(0, n);
    return 0;
}
