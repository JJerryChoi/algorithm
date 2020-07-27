#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> A;

int binarySearch(int l, int r, int target){
    if(l > r)
        return 0;
    int mid = (l+r)/2;
    if(A[mid] == target)
        return 1;
    if(A[mid] < target)
        return binarySearch(mid+1, r, target);
    return binarySearch(l, mid-1, target);
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n;
    A.resize(n);
    for(auto& a : A)
        cin >> a;
    sort(begin(A), end(A));

    cin >> m;
    int k;
    for(int tc = 0; tc < m; ++tc){
        cin >> k;
        cout << binarySearch(0, n, k) << '\n';
    }
    return 0;
}
