#include <bits/stdc++.h>
using namespace std;

int requiredNumber[9];

int getMinNumberSet(string& s){
    for(auto& c : s){
        if(c == '9')
            ++requiredNumber[6];
        else
            ++requiredNumber[c - '0'];
    }
    if(requiredNumber[6] % 2 == 1)
        ++requiredNumber[6];
    requiredNumber[6] /= 2;

    int numberSet = 0;
    for(auto n : requiredNumber)
        numberSet = max(numberSet, n);
    return numberSet;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string number;
    cin >> number;
    cout << getMinNumberSet(number);

    return 0;
}
