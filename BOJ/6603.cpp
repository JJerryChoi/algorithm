#include <bits/stdc++.h>
using namespace std;

const int nLotto = 6;

void print(const vector<int>& picked){
    for(auto& p : picked)
        cout << p << ' ';
    cout << '\n';
}

void printCombination(vector<int>& numbers, vector<int> picked, int nextNumber){
    if(picked.size() == nLotto) {
        print(picked);
        return;
    }
    for(int i = nextNumber; i < numbers.size(); ++i){
        picked.push_back(numbers[i]);
        printCombination(numbers, picked, i+1);
        picked.pop_back();
    }
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    while(true) {
        cin >> n;
        if (n == 0)
            break;
        vector<int> numbers(n);
        for (auto &number : numbers)
            cin >> number;
        printCombination(numbers, vector<int>(), 0);
        cout << '\n';
    }
    return 0;
}
