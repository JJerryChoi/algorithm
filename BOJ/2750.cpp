#include <bits/stdc++.h>
using namespace std;

void sort(vector<int>& v){
    for(int i = 0; i < v.size()-1; ++i)
        for(int j = i+1; j < v.size(); ++j)
            if(v[i] > v[j])
                swap(v[i], v[j]);
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    sort(v);
    for(int i = 0; i < n; ++i)
        cout << v[i] << endl;

    return 0;
}
