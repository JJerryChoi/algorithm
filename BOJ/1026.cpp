#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for(auto& a : A)
        cin >> a;
    for(auto& b : B)
        cin >> b;

    sort(begin(A), end(A), greater<int>());
    sort(begin(B), end(B));

    int answer = 0;
    for(int i = 0; i < n; ++i)
        answer += A[i]*B[i];
    cout << answer;

    return 0;
}
