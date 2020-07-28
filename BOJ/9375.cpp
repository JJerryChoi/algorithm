#include <bits/stdc++.h>
using namespace std;


int findGarmentCombinations(int n){
    int combinations = 1;
    map<string, int> m;
    for(int i = 0; i < n; ++i){
        string name, type;
        cin >> name >> type;
        if(m.find(type) != m.end())
            m[type] += 1;
        else
            m.emplace(type, 1);
    }
    
    for(auto& t : m)
        combinations *= (t.second + 1);
    return combinations - 1;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int T, n;
    cin >> T;
    for(int tc = 0; tc < T; ++tc){
        cin >> n;
        cout << findGarmentCombinations(n) << '\n';
    }
    return 0;
}
