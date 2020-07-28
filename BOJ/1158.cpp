#include <bits/stdc++.h>
using namespace std;

int n, k;
list<int> people;

void solveJosephusProblem(list<int>::iterator itr){
    static int i = 0;
    while(itr != people.end()){
        ++i;
        if(i >= k) {
            if(itr == people.end())
                itr = people.begin();
            cout << *itr;
            if(people.size() == 1)
                return;
            itr = people.erase(itr);
            i = 0;
            cout << ", ";
            break;
        }
        ++itr;
    }
    if(itr == people.end())
        solveJosephusProblem(people.begin());
    else
        solveJosephusProblem(itr);
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        people.push_back(i);
    cout << '<';
    solveJosephusProblem(people.begin());
    cout << '>';
    return 0;
}
